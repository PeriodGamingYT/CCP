/* The regular expressions is being a RUDE BITCH */

function lex(str) {
  if(typeof(str) != 'string') {
    console.error('You need to input a string');
    return -1;
  }
  var lxe = str.split(' ');
  var cLex = lxe;
  str = cLex;
  var lxe = str.split('	');
  var cLex = lxe;
  str = cLex;
  var lxe = str => str.split('+').map(s => s.trim()).filter(s => s.length);
  var cLex = lxe(str);
  str = cLex;
  var lxe = str => str.split('-').map(s => s.trim()).filter(s => s.length);
  var cLex = lxe(str);
  str = cLex;
  var lxe = str => str.split('*').map(s => s.trim()).filter(s => s.length);
  var cLex = lxe(str);
  str = cLex;
  var lxe = str => str.split('/').map(s => s.trim()).filter(s => s.length);
  var cLex = lxe(str);
  str = cLex;
  var lxe = str => str.split('^').map(s => s.trim()).filter(s => s.length);
  var cLex = lxe(str);
  str = cLex;
  var lxe = str => str.split('(').map(s => s.trim()).filter(s => s.length);
  var cLex = lxe(str);
  str = cLex;
  var lxe = str => str.split(')').map(s => s.trim()).filter(s => s.length);
  var cLex = lxe(str);
  str = cLex;
  var lxe = str => str.split('[').map(s => s.trim()).filter(s => s.length);
  var cLex = lxe(str);
  str = cLex;
  var lxe = str => str.split(']').map(s => s.trim()).filter(s => s.length);
  var cLex = lxe(str);
  str = cLex;
  var lxe = str => str.split('{').map(s => s.trim()).filter(s => s.length);
  var cLex = lxe(str);
  str = cLex;
  var lxe = str => str.split('}').map(s => s.trim()).filter(s => s.length);
  var cLex = lxe(str);
  str = cLex;
  var lxe = str => str.split('=').map(s => s.trim()).filter(s => s.length);
  var cLex = lxe(str);
  str = cLex;
  var lxe = str => str.split('`').map(s => s.trim()).filter(s => s.length);
  var cLex = lxe(str);
  str = cLex;
  return cLex;
}
