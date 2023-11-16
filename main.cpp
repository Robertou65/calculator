// libraries
#include <iostream>
#include <cctype>
#include "operations.h"
#include "interface.h"

/*
    how the program works

    this program is a basic calculator where there are 8 operations and one funtion, of course with its symbols

    firstly, the program pass through 5 steps:
        1. the program asks for a number
        2. the program asks for a operation (you need to type any symbol)
        3. according to the symbol which you type before, the program asks for another number or not
        4. the program shows the result (the number at the left)
        5. the program will ask you whether you wish to continue or not.

    second, to understand how the program works, please read the following
        the interface is a rectangle, at the top is the tittle "calculator"
        then there is the screen, it has 3 spaces or lines
            the first is where the current operation will be shown
            the second is where the last number entered will be displayed
            the thrid is where the result will be shown
        then there are 3 lines of operations
            in the first line are: percent, sine, cosine and the funtion to delete all
            in the second line are: factorial, exponentiation, square root and division
            in the thrid line are: multiplication, subtraction, additon and logarithm
    
    symbols: 
        operation without numbers:
            '<' = delete all

        operations with two numbers:
            '%' = percentaje
            '^' = exponentiation
            '*' = multiplication
            '-' = subtraction
            '+' = additon

        operations with a single number:
            's' = sine
            'c' = cosine
            '!' = factorial
            '&' = square root
            '@' = logarithm
*/

int main(){
    bool signal {true}; char charSignal;
    long double numbers{0}, numberAux{0};
    long double result{0};
    char operation{' '}, operationAux{' '};
    int i{1};

    do{
        // call the main interface function
        interface(numbers, result, operation);
        
        switch(i){
            case 1:
                // asking for a number
                std::fflush(stdin);
                std::cout<<"first number: "; std::cin>>numbers;
                break;

            case 2:
                // asking for the operation
                std::fflush(stdin);
                std::cout<<"operation: "; std::cin>>operationAux;
                operation = tolower(operationAux);

                // funtion to delete all
                if (operation == '<'){
                    operation = ' '; operationAux = ' ';
                    numbers = 0; numberAux = 0;
                    i = 0;
                    result = 0;
                }
                break;
            
            case 3:
                // filter the type of operation (with one number or two numbers)
                if (operation != '@' && operation != '&' && operation != '!' && operation != 's' && operation != 'c'){
                    numberAux = numbers;
                    std::fflush(stdin);
                    std::cout<<"second number: "; std::cin>>numbers; // asking for a second number
                    result = filterOperationsTwoNumbers(operation, numberAux, numbers);
                }else{
                    result = filterOpertationOneNumber(operation, numbers);
                }
                break;

            default:
                break;
        }
        i++;

        std::system("pause");
        std::system("cls"); // clear the console

        // asking to the user wether he/she wants to continue or not
        if (i == 5){
            std::cout<<"would you like to continue?(y/n) "; std::cin>>charSignal;
            char charSignal2 = towlower(charSignal);

            if (charSignal2 == 'y'){
                // deleting all
                i = 0;
                operation = ' '; operationAux = ' ';
                numbers = 0; numberAux = 0;
                i = 0;
                result = 0;
                signal = true;
            }else{
                signal = false;
            }
        }
        
    }while(signal);

    std::system("cls");
    return 0;
}