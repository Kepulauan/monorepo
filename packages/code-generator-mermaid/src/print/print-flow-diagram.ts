import { Doc } from 'prettier';
import { builders as p } from 'prettier/doc';
import { Node } from '../types';
import { assert } from '../assert';

export default function print(node: Node): Doc {
  assert(node.type === 'diagram_flow');
  const [flowchart, direction, ...statements] = node.children;
  return [
    flowchart.text,
    ' ',
    direction.text,
    p.indent([p.hardline, p.join(p.hardline, statements.map(printStatement))]),
  ];
}

function printStatement(node: Node): Doc {
  switch (node.type) {
    case 'flow_stmt_vertice':
      return printVerticeStatement(node);
    case 'flow_stmt_subgraph':
      return printSubgraphStatement(node);
    case ';':
      return ';';
    default:
      throw new Error(`Unexpected node type: ${node.type}`);
  }
}

function printVerticeStatement(node: Node): Doc {
  assert(node.type === 'flow_stmt_vertice');
  const [start, link, end] = node.children;
  if (!link) {
    return printNode(start);
  }
  return p.group([printNode(start), ' ', printLink(link), ' ', printNode(end)]);
}

function printNode(node: Node): Doc {
  assert(node.type === 'flow_node');
  const [vertex] = node.children;
  assert(vertex.type === 'flow_vertex');
  const [id, ...extras] = vertex.children;
  if (extras.length === 0) {
    return id.text;
  }

  return [id.text, ...extras.map((n) => n.text)];
}

function printLink(node: Node): Doc {
  switch (node.type) {
    case 'flow_link_simplelink':
      return printSimpleLink(node);
    case 'flow_link_arrowtext':
      return printArrowTextLink(node);
    case 'flow_link_middletext':
      return printMiddleTextLink(node);
    default:
      throw new Error(`Unexpected node type: ${node.type}`);
  }
}

function printSimpleLink(node: Node): Doc {
  assert(node.type === 'flow_link_simplelink');
  return node.text;
}

function printArrowTextLink(node: Node): Doc {
  assert(node.type === 'flow_link_arrowtext');
  const [arrow, , text] = node.children;
  return [arrow.text, '|', text.text, '|'];
}

function printMiddleTextLink(node: Node): Doc {
  assert(node.type === 'flow_link_middletext');
  const [start, text, arrow] = node.children;
  return [start.text, ' ', text.text, ' ', arrow.text];
}

function printSubgraphStatement(node: Node): Doc {
  assert(node.type === 'flow_stmt_subgraph');
  const [subgraph, ...statements] = node.children;
  const end = statements.pop()!;

  if (statements.length === 0) {
    return p.markAsRoot([subgraph.text, end.text]);
  }

  if (statements[0].type === 'flow_vertex_id' || 'flow_vertex_text') {
    const idOrText = statements.shift();
    return p.markAsRoot([
      subgraph.text,
      ' ',
      idOrText!.text,
      p.indent([
        p.hardline,
        p.join(p.hardline, statements.map(printStatement)),
      ]),
      end.text,
    ]);
  }

  return p.markAsRoot([
    subgraph.text,
    p.indent([p.hardline, p.join(p.hardline, statements.map(printStatement))]),
    end.text,
  ]);
}

function printEnd(node: Node): Doc {
  assert(node.type === 'end');
  return [p.dedentToRoot(p.hardline), node.text];
}
