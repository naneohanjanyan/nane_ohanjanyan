const sum = document.getElementById("plus");
const sub = document.getElementById("sub");
const mult = document.getElementById("mult");
const division = document.getElementById("division");
const reset = document.getElementById("resetBtn");

sum.onclick = () => {
    const num1 = document.getElementById('number1').value;
    const num2 = document.getElementById('number2').value;
    document.getElementById('operator').innerHTML = '+';
    document.getElementById('output').innerHTML = Number(num1) + Number(num2);
}

sub.onclick = () => {
    const num1 = document.getElementById('number1').value;
    const num2 = document.getElementById('number2').value;
    document.getElementById('operator').innerHTML = '-';
    document.getElementById('output').innerHTML = Number(num1) - Number(num2);
}

mult.onclick = () => {
    const num1 = document.getElementById('number1').value;
    const num2 = document.getElementById('number2').value;
    document.getElementById('operator').innerHTML = '*';
    document.getElementById('output').innerHTML = Number(num1) * Number(num2);
}

division.onclick = () => {
    const num1 = document.getElementById('number1').value;
    const num2 = document.getElementById('number2').value;
    document.getElementById('operator').innerHTML = '/';
    if (Number(num2) === 0) {
        document.getElementById('output').innerHTML = 'INFINITY'
    } else {
        document.getElementById('output').innerHTML = Number(num1) / Number(num2);
    }
}

reset.onclick = () => {
    document.getElementById('operator').innerHTML = '+';
    document.getElementById('output').innerHTML = '';
    document.getElementById('number1').value = '';
    document.getElementById('number2').value = '';
}

document.addEventListener('keydown', function (event) {
    if (event.key === "Escape") {
        reset.onclick();
    }
});