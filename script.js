let account = {
    name: "Pradyumn Chaudhary",
    accNo: 12345678901,
    balance: 10000000,
    pin: "0000",
};

function displayMessage(message) {
    const output = document.getElementById("output");
    output.style.display = "block";
    output.innerHTML = message;
}

function checkPin() {
    const pin = prompt("Enter your PIN:");
    if (pin !== account.pin) {
        alert("Incorrect PIN!");
        return false;
    }
    return true;
}

function cashWithdraw() {
    if (!checkPin()) return;

    const amount = parseFloat(prompt("Enter amount to withdraw:"));
    if (amount > 0 && amount <= account.balance) {
        account.balance -= amount;
        displayMessage(`Withdrawal Successful! Remaining Balance: ${account.balance.toFixed(2)}`);
    } else if (amount <= 0) {
        displayMessage("Invalid amount!");
    } else {
        displayMessage("Insufficient balance!");
    }
}

function miniStatement() {
    if (!checkPin()) return;

    displayMessage(
        `Name: ${account.name}<br>
        Account Number: ${account.accNo}<br>
        Balance: ${account.balance.toFixed(2)}`
    );
}

function balanceEnquiry() {
    if (!checkPin()) return;

    displayMessage(`Balance: ${account.balance.toFixed(2)}`);
}

function quickCash() {
    if (!checkPin()) return;

    const options = [100, 200, 500, 1000, 2000, 5000, 10000];
    const choice = prompt(
        `Choose Quick Cash Option:\n1. $100\n2. $200\n3. $500\n4. $1000\n5. $2000\n6. $5000\n7. $10000`
    );

    const amount = options[parseInt(choice) - 1];
    if (amount && amount <= account.balance) {
        account.balance -= amount;
        displayMessage(`Quick Cash Successful! Remaining Balance: ${account.balance.toFixed(2)}`);
    } else if (amount > account.balance) {
        displayMessage("Insufficient balance!");
    } else {
        displayMessage("Invalid input!");
    }
}

function deposit() {
    if (!checkPin()) return;

    const amount = parseFloat(prompt("Enter amount to deposit:"));
    if (amount > 0) {
        account.balance += amount;
        displayMessage(`Deposit Successful! New Balance: ${account.balance.toFixed(2)}`);
    } else {
        displayMessage("Invalid amount!");
    }
}

function exitATM() {
    alert("Thank you for using the ATM. Have a great day!");
    displayMessage("Thank you!");
}
