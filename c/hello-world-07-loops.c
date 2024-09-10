#include <stdio.h>
#include <string.h>

int main() {

	printf("=============================================================================================\n");
	printf("                                  Loops                                                    \n");
	printf("=============================================================================================\n");

    printf("\n");
    printf("for loop\n");
    int i;
    for (i = 0; i < 3; i++) {
        printf("i is %d\n", i);
    }

    printf("\n");
    printf("for loop with continue ie skipping item 5\n");
    int j;
    for (j = 0; j < 3; j++) {
        if (j == 1) {
            continue;
        }
        printf("j is %d\n", j);
    }

    printf("\n");
    printf("for loop with break\n");
    int k;
    for (k = 0; k < 3; k++) {
        if (k == 1) {
            break;
        }
        printf("k is %d\n", k);
    }

    printf("\n");
    printf("while loop\n");
    int l = 0;
    while (l < 3) {
        printf("l is %d\n", l);
        l++;
    }

    printf("\n");
    printf("do while loop\n");
    int m = 0;
    do {
        printf("m is %d\n", m);
        m++;
    } while (m < 3);



	return 0;
}
