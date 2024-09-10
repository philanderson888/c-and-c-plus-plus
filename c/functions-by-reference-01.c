#include<stdio.h>

void add(int a, int b, int *result, int *cumulativeResult) {
    *result = a + b;
    *cumulativeResult += (a + b);
}

int main() {

	printf("=============================================================================================\n");
	printf("                            Functions By Reference                                           \n");
	printf("=============================================================================================\n");

    printf("\n");
    printf("function by reference\n");
    int a = 1;
    int b = 2;
    int result = 0;
    int cumulativeResult = 0;
    add(a, b, &result, &cumulativeResult);
    printf("%d plus %d is %d and the cumulative result is %d\n", a, b, result, cumulativeResult);

    int c = 3;
    int d = 4;
    add(c, d, &result, &cumulativeResult);
    printf("%d plus %d is %d and the cumulative result is %d\n", c, d, result, cumulativeResult);

	return 0;
}



    
