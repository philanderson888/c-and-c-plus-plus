#include<stdio.h>

int main() {

	printf("=============================================================================================\n");
	printf("                                         Pointers                                            \n");
	printf("=============================================================================================\n");

    printf("\n");
    printf("pointers are declared with a star before the variable name\n");
    printf("pointer variables without the star hold the memory address of another variable\n");
    printf("pointer variables with the star hold the value of the variable they point to\n");
    printf("the & symbol is used to get the memory address of a variable\n");
    printf("the * symbol is used to get the value of the variable a pointer points to\n");
    printf("pointers are used to pass variables by reference to functions\n");
    printf("pointers are used to dynamically allocate memory\n");
    printf("pointers are used to build complicated data structures like linked lists\n");
    printf("pointers are used to build arrays\n");
    printf("pointers are used to build strings\n");
    printf("pointers are used to build functions\n");
    printf("pointers are used to build pointers to functions\n");

    int number01 = 10;
    int *pointer01 = &number01;
    printf("number01 is %d\n", number01);
    printf("pointer01 memory address is %p\n", pointer01);
    printf("*pointer01 value is %d\n", *pointer01);

    printf("\n");
    printf("data in a pointer location can be updated\n");
    *pointer01 = 20;
    printf("number01 is %d\n", number01);
    printf("pointer01 memory address is %p\n", pointer01);
    printf("*pointer01 value is %d\n", *pointer01);

	return 0;
}



    
