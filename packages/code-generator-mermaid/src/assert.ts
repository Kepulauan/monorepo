export function assert(arg0: boolean) {
  if (!arg0) {
    throw new Error('Wrong type');
  }
}
