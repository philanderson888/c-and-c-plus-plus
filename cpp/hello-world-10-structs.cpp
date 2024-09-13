#include<iostream> 
using namespace std; 

int main() { 

    printf("=============================================================================================\n");
	printf("                                    Structs                                                  \n");
	printf("=============================================================================================\n");

    struct Student {
        string fullName;
        int age;
        string fatherName;
        string permanentAddress;
    };

    Student student1;
    student1.fullName = "John Doe";
    student1.age = 20;
    student1.fatherName = "Mr. Doe";
    student1.permanentAddress = "123 Main St, Springfield, IL";

    cout << "Student 1" << endl;
    cout << "Full Name: " << student1.fullName << endl;
    cout << "Age: " << student1.age << endl;
    cout << "Father's Name: " << student1.fatherName << endl;
    cout << "Permanent Address: " << student1.permanentAddress << endl;

    
    


    return 0;
}
