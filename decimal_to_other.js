dec_to_bho = function (n, base) {

    if (n < 0) {
        n = 0xFFFFFFFF + n + 1;
    }
    switch (base) {
        case 'B':
            return parseInt(n, 10).toString(2);
            break;
        case 'H':
            return parseInt(n, 10).toString(16);
            break;
        case 'O':
            return parseInt(n, 10).toString(8);
            break;  
        default:
            return ("Wrong input.........");
    }
}

let decimal_to_binary = (number) => {

    let binary = ""; // Variable to store the binary number here
    let temp = number; // Temporary variable to store the input

    while (temp > 0) {
        if (temp % 2 == 0) {
            binary = "0" + binary;
        }
        else {
            binary = "1" + binary;
        }

        temp = Math.floor(temp / 2); // To round off the number, Temp is the quotient
    }
    return binary;
}

console.log(decimal_to_binary(75))