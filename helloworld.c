#include <stdio.h>

int main(int argc, char* argv[]){
    printf("%c %d\n", 'A', 'A');
}

/* 
statically typed language
    --> any variable has an associated type, and the type is only known as compilation time

C does not protect you from going over the limit of a type, you will need to take of it yourself

#include <stdio.h> is a header file library
--> it allows u to use and work with input/output functions like printf
--> they add functionality to c programs

another thing: c ignores whitespaces. unlike python, the program can be formatted any which way and will compile with some logic


to OUTPUT text, use printf() fucntion
--> char are wrapped with single quotes
--> strings are wrapped with double quotes
--> use escape characters to changes the position of the curson, depending on where you want it to be

--> when trying to ouput the value of a VARIABLE, C does not behave like Python/Java
    you cannot simply do 
                int myNum=15
                printf(myNum); absolutely nothing will happen
    
    you will have to use FORMAT SPECIFIERS


FORMAT SPECIFIERS
this tells the compiler what type of data the variable is storing
--> used for both printf() nad scanf()
-->  %[flags][width][.precision][length]specifier
        % = start of the format specifier
        flags = this is optional, this is to modify the output format
                - is for left alignment
                + to force a plus sign for positive numbers
        
        width = optional. specifies minimum number of chars to be printed
        .precision = optional. specifies number of digits after the decimal point to be printed
        length = optinal. modifies the length of data type 
                l for long
                h for short
        specifier = char that specifies the type of data
                  %d = int
                  %u = unsigned int
                  %ld = long int
                  %f = float
                  % c= char
                  %p = prints pointer address
                  %s = string
                

--> a placeholder for the variable value
                int myNum=15
                printf("%d", myNum); //this outputs 15

    to combine text and data, we seperate with a comma

--> can also print a value without storing it in a variabble, as long as the format specifier is correct:
            printf("My favorite number is: %d", 15);
            printf("My favorite letter is: %c", 'D');
*/
