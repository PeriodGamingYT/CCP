function lex(str) {
  return str => str.split(/\b( |	|[*]|[/]|[+]|[-]|[(]|[)]|[[]|]|{|})\b/).map(s => s.trim()).filter(s => s.length);
}

