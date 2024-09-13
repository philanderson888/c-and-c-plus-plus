#include<iostream> 
#include<string>
#include<sstream>
using namespace std; 

int main() { 

    printf("=============================================================================================\n");
	printf("                                   Strings                                                   \n");
	printf("=============================================================================================\n");

    string fullName;
    string fatherName;
    string permanentAddress;

    cout << "Enter the full name of student: ";  // cin name
    getline( cin , fullName );

    cout << "\nAge: ";  // cin age
    int age;
    {
        std::string line;
        getline(cin, line);
        std::istringstream ss(line);
        ss >> age;
    }   

    cout << "\nFather's Name: ";  // cin father name
    getline( cin , fatherName );

    cout << "\nPermanent Address: ";  // cin permanent address
    getline( cin , permanentAddress );

    string greeting = "Hello, World!";

    cout << " " << endl;
    cout << greeting << endl;
   
    cout << " " << endl;
    string inputText = "some text";

    cout << "Enter some text: ";
    getline(cin, inputText);  

    cout << " " << endl;
    cout << "you entered: " << inputText << endl;

    return 0;
}