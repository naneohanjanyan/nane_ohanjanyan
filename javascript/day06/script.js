if (sessionStorage.getItem('highScoore') !== null) {
    document.querySelector('#scoreValue').innerText = sessionStorage.getItem('highScoore');
}

let random = Math.floor(Math.random() * 101);
alert(random);
let num = document.querySelector("#input");
let count = document.querySelector("#countValue");
let score = document.querySelector("#scoreValue");
let help = document.querySelector("#help");
let button = document.querySelector("#again");

function clearInput() {
    num.value = '';
}

function readOnly() {
    document.querySelector("#input").readOnly = true;
}

function outputLoss() {
    document.querySelector("#text").style.color = "red";
    document.querySelector("#text").innerHTML = "You loss";
    readOnly();
}

function outpuWin() {
    document.querySelector("#text").style.color = "green";
    document.querySelector("#text").innerHTML = "You win";
    readOnly();
}

function calcCount() {
    let count1 = Number(count.innerText) - 1;
    if (count1 === 0) {
        outputLoss();
        document.removeEventListener("keydown", calcCount);
        document.querySelector("#countValue").innerHTML = 0;
        return;
    }
    document.querySelector("#countValue").innerHTML = count1;
}

button.onclick = () => {
    location.reload();
    document.querySelector("#scoreValue").innerHTML = sessionStorage.getItem('highScoore');

}

document.addEventListener("keydown", function (event) {
    if (event.key === "Enter") {
        check();
        clearInput();
    }
});

function calcScore() {
    let arrScore = [3, 5, 8, 10, 12, 15, 20];
    let countindex = Number(count.innerText);

    for (let i = 0; i < arrScore.length; i++) {
        if (i + 1 === countindex) {
            if (arrScore[i] >= Number(sessionStorage.getItem("highScoore"))) {
                document.querySelector("#scoreValue").innerHTML = arrScore[i];
                sessionStorage.setItem("highScoore", `${arrScore[i]}`);
            }
            return;
        }
    }
}

function check() {
    let num1 = Number(num.value);
    if (num1 === random) {
        outpuWin();
        calcScore();
    } else {
        calcCount();
        let sub = Math.abs(random - num1);
        let hit;
        num1 < random ? hit = `mindedNum > ${num1}` : hit = `mindedNum < ${num1}`;

        if (sub > 10 && sub < 20) {
            help.innerHTML = "low |  " + hit;
        }
        else if (sub <= 10) {
            help.innerHTML = "superlow |  " + hit;
        }
        else if (sub >= 20 && sub < 30) {
            help.innerHTML = "high |  " + hit;
        }
        else if (sub >= 30) {
            help.innerHTML = "superhigh |  " + hit;
        }
    }
};