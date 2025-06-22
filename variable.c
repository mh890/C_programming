#include <stdio.h>


int main(){
    /*
when assigning a new value to an existing value, it wil overwrite
*/
int myNum=15;
myNum=10;
printf("%i\n", myNum, "\n"); //outputs 10



// can add variables together
int x, y, z;
x = y = z = 50;
printf("%d\n", x + y + z);

/*
CHARACTERS
chars can be stored using single quotes
--> if you try to store more than one single char in a char, it will only output the last one
    char c1= "hereisalistofchar"; //this will not compile when using gcc command bc its produced an error
    printf("%c", c1);
    printf("%s", c1);

--> to produce a STRING, which is an array of chars, you can do:
*/

char c2[]="hereisalistofchar\n";
printf("%s", c2);

/*
because each environment and computer has different settings, you can check the sizes od each type
*/

printf("char size: %lu bytes\n", sizeof(char));
printf("int size: %lu bytes\n", sizeof(int));
printf("short size: %lu bytes\n", sizeof(short));
printf("long size: %lu bytes\n", sizeof(long));
printf("float size: %lu bytes\n", sizeof(float));
printf("double size: %lu bytes\n", sizeof(double));
printf("long double size: %lu bytes\n", sizeof(long double));


/*
CONSTANTS
    if prepended with const keyword, the value always remains the same
    const int AGE=37;

    another way to define it --> #define AGE 37
        in this case, we dont have to add a type because the compiler will infer the type from the value
*/

return 0;
}

