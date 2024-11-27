#include<iostream> 
using namespace std; 

void greet() {
    cout << "Hello, World!" << endl;
}

int main() { 

    printf("=============================================================================================\n");
	printf("                                    Functions                                                \n");
	printf("=============================================================================================\n");

    // Function Declaration
    void greet();

    // Function Call
    greet();

    return 0;
}