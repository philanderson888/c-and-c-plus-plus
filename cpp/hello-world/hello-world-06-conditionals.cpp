#include<iostream> 
#include<string>
#include<sstream>
using namespace std; 

int main() { 

    printf("=============================================================================================\n");
	printf("                                   Conditionals                                              \n");
	printf("=============================================================================================\n");

    for (int number = -5; number < 6; number++) {

        cout << " " << endl;
        cout << "Number is: " << number << endl;

        if (number > 0) {
            cout << "Number is positive" << endl;
        } else {
            cout << "Number is negative" << endl;
        }

        if (number % 2 == 0) {
            cout << "Number is even" << endl;        
        } else if (number % 3 == 0) {
            cout << "Number is divisible by 3" << endl;
        } else if (number % 5 == 0) {
            cout << "Number is divisible by 5" << endl;
        } else {
            cout << "Number is odd" << endl;
        }

    }
    
    return 0;
}