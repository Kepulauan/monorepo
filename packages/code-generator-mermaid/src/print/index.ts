import { Doc } from 'prettier';
import { builders as p } from 'prettier/doc';
import { Node } from '../types';
import { assert } from '../assert';
import printFlowDiagram from './print-flow-diagram';

export default function print(node: Node): Doc {
  return printFile(node);
}

function printFile(node: Node): Doc {
  assert(node.type === 'source_file');
  return p.fill([node.children.map(printDiagram), p.hardline]);
}

function printDiagram(node: Node): Doc {
  const { type } = node;
  switch (type) {
    case 'diagram_flow':
      return printFlowDiagram(node);
    default:
      throw new Error(`Unexpected node type: ${type}`);
  }
}
