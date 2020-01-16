function lex(str) {
  return str => str.split(/[( |	|*|/|+|-|(|)|[|]|{|}*/)).map(s => s.trim()).filter(s => s.length);
}

