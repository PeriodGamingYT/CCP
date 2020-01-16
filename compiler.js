function lex(str) {
  if(typeof(str) != 'string') {
    console.error('You need to input a string');
    return -1;
  }
  var lxe = str => str.split(/\b( |	|[*]|[/]|[+]|[-]|[(]|[)]|[[]|]|{|})\b/).map(s => s.trim()).filter(s => s.length);
  return lxe(str);
}
