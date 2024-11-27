#include<iostream> 
using namespace std; 

void greet() {
    cout << "Hello, World!" << endl;
}

int main() { 

    printf("=============================================================================================\n");
	printf("                                    Pointers                                                 \n");
	printf("=============================================================================================\n");


    // Pointers
    int number = 10;
    int *pointer = &number;
    cout << "Value of number: " << number << endl;
    
    cout << "Memory address of number is obtained using the ampersand prefix: " << &number << endl;
    cout << "pointer is memory address and is declared with an asterisk" << pointer << endl;
    cout << "*pointer = &variable;   (declaration)" << endl;
    cout << "pointer is used after that without an asterisk: (use)" << endl;
    cout << "pointer is:" << pointer << endl;
    cout << "Value stored at pointer memory address is: " << *pointer << endl;

    int a = 5;  //Declare and initialize a variable
    /*
    The following pointer declarations are all valid and they all are doing the same:
    Declaring a new pointer and initializing it with 0 (a non accessible memory address) for safety-reasons.
    int * b = 0;
    int* b = 0                 
    int *b = 0; // This is how its usually written.
    int *b; // <= this, however would cause "b" to point to some random address which might be unsafe.
    */
    int *b = 0; // Create a new pointer of type int and initialize it with 0

    cout << "\"b\" is initialized and now pointing to memory-address:  " << b << endl << endl;

    //Now make the pointer "point" to the address of a
    b = &a; //"b" now points to the address of "a"

    cout << "\"a\" is stored at memory-address:  " << &a << endl;
    cout << "\"b\" is stored at memory-address:  " << &b << endl;
    cout << "\"b\" is pointing to memory-address now:  " << b << endl << endl;

    cout << "The value of \"a\" is: " << a << endl;  // returns the value of a

    //the "*b" will get the value from the address b points to (the value of a)
    cout << "The value of the area \"b\" is pointing to is: " << *b << endl << endl << endl;

    //Now modify the value of the address "b" is pointing to...effectively changing the value of "a"     
    *b=10;

    cout << "\"a\" is still stored at memory-address:  " << &a << endl;
    cout << "\"b\" is still stored at memory-address:  " << &b << endl;
    cout << "\"b\" is still pointing to memory-address:  " << b << endl << endl;

    cout << "The value of \"a\" is now: " << a << endl;  // returns the value of a
    cout << "The value of the area \"b\" is pointing to is now: " << *b << endl << endl;


    void* p1;
    char* p2;
    p2 = (char*) p1; // In C++ we have to typecast the pointer!
    // p2 = p1; // This will not work in C++!

    cout << " " << endl;
    cout << "the value of p1 is: " << p1 << endl;
    cout << "the value of p2 is: " << p2 << endl;
    
    


    return 0;
}
