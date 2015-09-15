var text= "what makes the desert beautiful, said the little prince is that somewhere it hides a well";

function wordsearch(n) {
   if (n.indexOf(" ") != -1) return false;
   return text.indexOf(n) != -1;
}