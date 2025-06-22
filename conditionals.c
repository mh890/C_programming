#include <stdio.h>


/*
C only has if, if-else, if else-if ladder and switch statements.
--> these determine the flow of program execution
--> scanf() function needs to be used for USER INPUT
    however, only for int, float, double, and char since theyre variables and not pointers
    char or strings dont need because arrays are already pointers
    IF int is already a point, meaning int* or something like that, then you alr have the address and no need for & 


IF STATEMENT
checks for condition and if true, then performs the block, else it performs some other operation
    same logic for if-else, if else-if and nested blocks


SWITCH STATEMENT
proba better to use rather than many if-else statements
provide a varaible as a condition and series of cases that can be switched
    dont forget break keyword after each case!! its to avoid the next case to be executed
    also can add a default case at the end
*/


//PROBLEMS

int main(){

// Equality check. Program must accept two intergers and check whether they are equal
int x;
int y;
printf("What is x: ");
scanf("%d", &x); //scanf() NEEDS the address of variable to store the input value
printf("What is y: ");
scanf("%d", &y);

if(x ==y){
    printf("They are equal\n");
} else{
    printf("They are not equal \n");
}

//Even or Odd check
int m;
printf("Test data: ");
scanf("%d", &m);

if(m%2==0){
    printf("%d is an even interger\n", m);
} else{
    printf("%d is an odd integer\n", m);
}

// Voting Eligibility --> read age and determeine if eligible
int age;
printf("Enter age: ");
        // not legal to do if(scanf("%d", &age)>=21){...} unfuckinfortunately
scanf("%d", &age);
if(age>=21){
    printf("You are legal\n");
}else {
    printf("You are not legal :/\n");
}


    

}


