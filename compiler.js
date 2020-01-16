function lex(str) {
  var lxe = str => str.split(/\b( |	|[*]|[/]|[+]|[-]|[(]|[)]|[[]|]|{|})\b/).map(s => s.trim()).filter(s => s.length);
  return lxe;
}

