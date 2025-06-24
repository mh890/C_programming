#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

/*
syntax of for and while loops are a feature of c language.
as long as specified condition is met, the loop will exxecute
    while(condition){
        //code block
    }

 */

 //PROBLEMS
 int main(){

 // print numbers 0-10 and 10-0 using two while loops
 int i=0;
 int j=10;
printf("Numbers from 0 to 10 below: ");
 while(i<=10){
    printf("%d ",i);
    i++;
 }
printf("\n");
printf("Numbers 10 to 0 below: ");
while(j>=0){
printf("%d ",j);
    j--;
}

//using while loop, find product of numbers 1 to 5
int m=1;
int sum=1;
while (m<=5)
{
    sum *= m;
    m++;
}
printf("\nThe sum of the numbers 1 to 5: %d", sum);


//username validation, prompt user and make sure that username is valid (atleast 8 char long)
char str[100];

while(1){
    printf("\nPlease input username to check for validation: ");
    fgets(str, sizeof(str), stdin); 
    
     if (strlen(str) >= 8) {
            break;
    } else {
            printf("Error: Username too short\n");
    }


}
printf("Valid username: %s", str);



//display the cube of the number up to an integer using for loop

int numbers;
printf("\nInput number of terms: ");
scanf("%d", &numbers);

for(i=0;i<=numbers;i++){
    printf("Number is: %d and the cube of %d is: %d\n", i, i, (i*i*i));
}


//display pattern of asterisks shaped in right angle triangle
int rows, a, b;
printf("\nInput number of rows: ");
scanf("%d", &rows);
for(a=1;a<=rows;a++)
{
    for(b=1;b<=a;b++)
    {
        printf("*");
    }

    printf("\n");
} 


return 0;



}