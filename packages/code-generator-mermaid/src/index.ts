import { doc } from 'prettier';
import Parser, { SyntaxNode, Tree } from 'tree-sitter';
import TreeSitterMermaid from 'tree-sitter-mermaid';
import { Node } from './types';
import printMermaidTree from './print';
import { readFileSync } from 'node:fs';
import * as path from 'node:path';

const parser = new Parser();
parser.setLanguage(TreeSitterMermaid);

function pruneTree(node: SyntaxNode): Node {
  return {
    type: node.type,
    text: node.text.trim(),
    children: node.children
      .map(pruneTree)
      .filter((child) => child.type !== 'ERROR' && child != null),
  };
}

export default function print(tree: Tree): string {
  const cleanTree = pruneTree(tree.rootNode);
  return doc.printer.printDocToString(printMermaidTree(cleanTree), {
    printWidth: 80,
    tabWidth: 2,
  }).formatted;
}

//
// Test
//

const input = readFileSync(
  path.join(
    path.dirname(new URL(import.meta.url).pathname),
    '../examples/architecture.mermaid',
  ),
  'utf8',
);
const formatted = print(parser.parse(input));

import mermaid from 'mermaid';
mermaid.initialize({ startOnLoad: true });

console.log(formatted);
mermaid.parse(formatted);
