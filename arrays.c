#include <stdio.h>
#include <math.h>

/*
Used to store multiple variables obv
every value in c MUST have the same type
    int prices[5];
    double myNums[8];

C does NOT provide dynamic arrays so you must always specify the size
can access array elements suin index numbers and can assign values


--> to get size of array, use sizeof() operator
*/

int main(){
    

//changing array element
int s;
int myNum[]={25, 50, 75, 100};
myNum[2]=22;
printf("%d\n", myNum[2]);
for(s=0;s<4;s++){

    printf("%d ", myNum[s]);
}

printf("\nThe size of the array is: %d", sizeof(myNum)); //why did it show 16 instead of 4? its bc sizeof() returns the size of a type in bytes

int lengthArr= sizeof(myNum)/sizeof(int); //take total num of bytes and divide it by the nunmber of bytes in the data type
printf("\nThe actual size of array: %d", lengthArr);



}
