#include<iostream> 
using namespace std; 

int main() { 

    printf("=============================================================================================\n");
	printf("                                      Loops                                                  \n");
	printf("=============================================================================================\n");

    printf("While Loop\n");
    int i = 0;
    while (i < 5) {
        cout << "i is: " << i << endl;
        i++;
    }

    printf("Do While Loop\n");
    int j = 0;
    do {
        cout << "j is: " << j << endl;
        j++;
    } while (j < 5);

    printf("For Loop\n");
    for (int k = 0; k < 5; k++) {
        cout << "k is: " << k << endl;
    }

    printf("Nested For Loop\n");
    for (int l = 0; l < 3; l++) {
        for (int m = 0; m < 3; m++) {
            cout << "l is: " << l << " m is: " << m << endl;
        }
    }

    printf("Break Statement\n");
    for (int n = 0; n < 5; n++) {
        if (n == 3) {
            break;
        }
        cout << "n is: " << n << endl;
    }

    printf("Continue Statement\n");
    for (int o = 0; o < 5; o++) {
        if (o == 3) {
            continue;
        }
        cout << "o is: " << o << endl;
    }

    printf("for each loop\n");
    int numbers[] = {10, 20, 30, 40, 50};
    for (int number : numbers) {
        cout << "number is: " << number << endl;
    }

    printf("immutable for each loop\n");
    int numbers2[] = {10, 20, 30, 40, 50};
    for (const int number : numbers2) {
        cout << "number is: " << number << endl;
    }

    






    return 0;
}