/**
 * @template {string} RuleName
 * @param {RuleBuilders<RuleName, never>} rules
 */
function rules(rules) {
  return rules;
}

/// common functions
function kwd(word) {
  return alias(reserved(caseInsensitive(word)), word);
}

function reserved(regex) {
  return token(prec(1, new RegExp(regex)));
}

function caseInsensitive(word) {
  return word
    .split('')
    .map((letter) => `[${letter}${letter.toUpperCase()}]`)
    .join('');
}

function optseq(...args) {
  return optional(seq(...args));
}

function sep(rule, delimiter) {
  return seq(rule, repeat(seq(delimiter, rule)));
}

module.exports = {
  rules,
  kwd,
  reserved,
  caseInsensitive,
  optseq,
  sep,
};
