#include <stdio.h>
#include <string.h>

int add(int a, int b);

int main() {

	printf("=============================================================================================\n");
	printf("                                         Functions                                           \n");
	printf("=============================================================================================\n");

    printf("\n");
    printf("function with return value\n");
    int a = 1;
    int b = 2;
    int result = add(a, b);
    printf("%d plus %d is %d\n", a, b, result);
    
	return 0;
}


int add(int a, int b) {
    return a + b;
}
