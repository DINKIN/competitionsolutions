function repeatSequence(count) {
    for (var i = count - 1; i > -1; i--) {
         printSequence(i, count - i);
    }
}

function printSequence(a, b) {
    var arr = [];
    for (var i = 0;  i < a; i++) {
        arr.push(" ");
    }
    for (var j = 0; j < b; j++) {
        arr.push("#");
    }
    
    console.log(arr.join(""));
}
function processData(input) {
    repeatSequence(input);
} 

process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
    _input += input;
});

process.stdin.on("end", function () {
   processData(_input);
});
