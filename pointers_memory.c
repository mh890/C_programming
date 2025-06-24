#include <stdio.h>


/*

MEMORY MANAGEMENT
--> this si done manually in C - programmer has full control over how memory is allocated and freed
    --> this gives power and efficiency but risk is high

Types of memory:
        -- Stack = this is automatically managed when it stores varaibles and function calls
        -- Heap = manually managed when using dynamic memory (malloc and alloc and free)
        -- Data Segment (stores gloval and static varaibles)
        -- Code Segment (stores compiled program instructions for read only)


MALLOC/ALLOC/FREE
malloc --> dynamically allocated block of memory of specific sixe in bytes from the heap and returns a pointer to the first byte of that block
    void* malloc(size_t size);
    if allocation fails, it returns NULL

    example: int *arr = (int *)malloc(5 * sizeof(int));  // allocates space for 5 ints

                if (arr == NULL) {
                    printf("Memory allocation failed.\n");
                }

calloc --> allocates zero intialized memory for an array of elements
    void* calloc(size_t num, size_t size);
    initializes all bits to zero
    
    exmaple: int *arr = (int *)calloc(5, sizeof(int));  // allocates and sets to 0

                if (arr == NULL) {
                    printf("Memory allocation failed.\n");
                }

realloc --> resizing memory block

free() --> deallocate memory
    this free memory previously allocated by malloc,calloc or realloc
    void free(void *ptr);

POINTERS

variable that stores memory

when declaring an integer number like this: 
    int age= 37;

we can use & operand to get value of address in memory
    printf("%p", &age); // outputs: 0x7ffeef7dcb9c
    
--> you have to use the &p specifier in printf to print address value

can also assign the address to a variable instead:
    int *address=&age;
    here, we are declaring a POINTER to an INTEGER

can use pointer operator * to get value of the variable an address is pointing to:
    int age=37;
    int *address= &age;
    printf("%u", *address) //output: 37
*/

//PROBLEMS

int main(){

 //m=10, n and o are integer variables and *z is integer
 int m=10;
 int n,o;
 int *z=&m;
printf("z stores the address of m: %p\n",z);
printf("\n*z stores the value of m: %d\n",*z);
printf("\n&m is the address of m: %p\n", &m);
printf("\n&n stores the address of n: %p\n", &n);
printf("\n&o stores the address of o: %p\n", &o);

return 0;


}


