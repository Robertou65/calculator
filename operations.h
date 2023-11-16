#include <math.h>

// percentage
long double percentage(double part, double number){
    return (part * number) / 100;
}

// exponentiation
long double exponentiation(double base, double exponent){
    return std::pow(base, exponent);
}

// division
long double division (double number1, double number2){
    return number1 / number2;
}

// multiplication
long double multiplication(double number1, double number2){
    return number1 * number2;
}

// subtraction
long double subtraction(double number1, double number2){
    return number1 - number2;
}

// sum
long double sum(double number1, double number2){
    return number1 + number2;
}

// funtion to filter the operations with two numbers
long double filterOperationsTwoNumbers (char operation, double number1, double number2){
    long double resulFilterTwoNumbers;

    switch(operation){
        case '%':
            resulFilterTwoNumbers = percentage(number1, number2);
            break;
        case '^':
            resulFilterTwoNumbers = exponentiation(number1, number2);
            break;
        case '/':
            resulFilterTwoNumbers = division(number1, number2);
            break;
        case '*':
            resulFilterTwoNumbers = multiplication(number1, number2);
            break;
        case '-':
            resulFilterTwoNumbers = subtraction(number1, number2);
            break;
        case '+':
            resulFilterTwoNumbers = sum(number1, number2);
            break;
        default:
            break;
    }

    return resulFilterTwoNumbers;
}

// sine
long double sine(double number){
    long double PI = 3.14159265;
    return std::sin(number*PI / 180);
}

// cosine 
long double cosine(double number){
    long double PI = 3.14159265;
    return std::cos(number*PI / 180);
}

// logarithm
long double logarithm(double number){
    return std::log(number);
}

// square root
long double squareRoot (double number){
    return std::sqrt(number);
}

// factorial
long double factorial(double number){
    unsigned long long factorial = 1;
    for (int i = 2; i <= number; i++) {
        factorial *= i;
    }
    return factorial;
}

// funtion to filter the operations with one number
long double filterOpertationOneNumber (char operation, double number){
    long double resulFilterOneNumbers;

    switch(operation){
        case 's':
            resulFilterOneNumbers = sine(number);
            break;
        case 'c':
            resulFilterOneNumbers = cosine(number);
            break;
        case '!':
            resulFilterOneNumbers = factorial(number);
            break;
        case '&':
            resulFilterOneNumbers = squareRoot(number);
            break;
        case '@':
            resulFilterOneNumbers = logarithm(number);
            break;
        default:
            break;
    }

    return resulFilterOneNumbers;
}
