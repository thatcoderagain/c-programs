#define PI 3.14

float add(float number1, float number2) {
    return number1 + number2;
}

float sub(int number1, int number2) {
    return number1-number2;
}

float mul(int number1, int number2) {
    return number1*number2;
}

float div(int number1, int number2) {
    if (number2 != 0) {
        return number1 / number2;
    }
    return 0;
}

float square(int number1) {
    return number1*number1;
}