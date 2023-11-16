#include <iostream>
#include <iomanip>

// function to display the first line according to the operation
void firstLineButtons(char button){
    switch(button){
        case '%': 
            std::cout<<"\t"<<std::setw(22)<<std::left<<"|///| s | c | < |"<<std::endl;
            break;
        case 's':
            std::cout<<"\t"<<std::setw(22)<<std::left<<"| % |///| c | < |"<<std::endl;
            break;
        case 'c':
            std::cout<<"\t"<<std::setw(22)<<std::left<<"| % | s |///| < |"<<std::endl;
            break;
        case '<':
            std::cout<<"\t"<<std::setw(22)<<std::left<<"| % | s | c |///|"<<std::endl;
            break;
        default:
            std::cout<<"\t"<<std::setw(12)<<std::left<<"| % | s | c | < |"<<std::endl;
            break;
    }
}

// function to display the second line according to the operation
void secondLineButtons(char button){
    switch(button){
        case '!': 
            std::cout<<"\t"<<std::setw(12)<<std::left<<"|///| ^ | & | / |"<<std::endl;
            break;
        case '^':
            std::cout<<"\t"<<std::setw(12)<<std::left<<"| ! |///| & | / |"<<std::endl;
            break;
        case '&':
            std::cout<<"\t"<<std::setw(12)<<std::left<<"| ! | ^ |///| / |"<<std::endl;
            break;
        case '/':
            std::cout<<"\t"<<std::setw(12)<<std::left<<"| ! | ^ | & |///|"<<std::endl;
            break;
        default:
            std::cout<<"\t"<<std::setw(12)<<std::left<<"| ! | ^ | & | / |"<<std::endl;
            break;
    }
}

// function to display the thrid line according to the operation
void thridLineButtons(char button){
    switch(button){
        case '*': 
            std::cout<<"\t"<<std::setw(12)<<std::left<<"|///| - | + | @ |"<<std::endl;
            break;
        case '-':
            std::cout<<"\t"<<std::setw(12)<<std::left<<"| * |///| + | @ |"<<std::endl;
            break;
        case '+':
            std::cout<<"\t"<<std::setw(12)<<std::left<<"| * | - |///| @ |"<<std::endl;
            break;
        case '@':
            std::cout<<"\t"<<std::setw(12)<<std::left<<"| * | - | + |///|"<<std::endl;
            break;
        default:
            std::cout<<"\t"<<std::setw(12)<<std::left<<"| * | - | + | @ |"<<std::endl;
            break;
    }
}

// main funtion to display the interface
void interface(double currentNumber, double currentResult, char button){
    std::cout<<"\t-----------------"<<std::endl;
    std::cout<<"\t|   Calculator  |"<<std::endl;
    std::cout<<"\t-----------------"<<std::endl;
    std::cout<<"\t|"<<std::setw(15)<<std::left<<button<<"|"<<std::endl;
    std::cout<<"\t|"<<std::setw(15)<<std::right<<currentNumber<<"|"<<std::endl;
    std::cout<<"\t|"<<std::setw(15)<<std::left<<currentResult<<"|"<<std::endl;
    std::cout<<"\t-----------------"<<std::endl;
    firstLineButtons(button);
    std::cout<<"\t-----------------"<<std::endl;
    secondLineButtons(button);
    std::cout<<"\t-----------------"<<std::endl;
    thridLineButtons(button);
    std::cout<<"\t-----------------"<<std::endl;
}