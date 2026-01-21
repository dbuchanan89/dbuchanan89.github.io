let tally = 0;
let currentStudent = null;

function pickStudent() {
    currentStudent = Math.floor(Math.random() * 40) + 1;
    document.getElementById("studentNumber").innerText = currentStudent;
}

function markCorrect() {
    if (currentStudent === null) return;

    tally += 1;
    updateTally();
    pickStudent();
}

function markWrong() {
    if (currentStudent === null) return;

    tally -= 1;
    updateTally();
    pickStudent();
}

function resetClass() {
    tally = 0;
    currentStudent = null;
    updateTally();
    document.getElementById("studentNumber").innerText = "—";
}

function updateTally() {
    document.getElementById("tally").innerText = tally;
}
