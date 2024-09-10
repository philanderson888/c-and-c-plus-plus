#include<stdio.h>

int main() {

	printf("=============================================================================================\n");
	printf("                                         Structs                                             \n");
	printf("=============================================================================================\n");

    printf("\n");
    printf("structs\n");
    printf("structs are a way to group variables together\n");
    printf("structs are the basis of simple objects in C\n");

    printf("\n");
    printf("structs are defined using the struct keyword\n");
    printf("structs can contain variables of different types\n");
    printf("structs can contain other structs\n");
    printf("structs are like classes\n");

    struct Point {
        int x;
        int y;
    };

    struct Point instance01 = {1, 2};

    printf("p1.x is %d\n", instance01.x);
    printf("p1.y is %d\n", instance01.y);

    struct Vehicle {
        char * make;
        char * model;
        int year;
    };

    struct Vehicle car01 = {"Toyota", "Corolla", 2015};

    printf("car01.make is %s\n", car01.make);
    printf("car01.model is %s\n", car01.model);
    printf("car01.year is %d\n", car01.year);   


	return 0;
}



    
