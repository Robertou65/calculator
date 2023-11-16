# calculator
first mini proyect in c++

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
