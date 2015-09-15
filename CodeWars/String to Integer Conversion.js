function myParseInt(str) {
   str = str.trim();
   if (str.search(/[^0-9]/g) != -1) return NaN;
   
   return parseInt(str);
}