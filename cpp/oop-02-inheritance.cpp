#include<iostream> 
using namespace std; 

int main() { 

    printf("=============================================================================================\n");
	printf("                                  Inheritance                                                \n");
	printf("=============================================================================================\n");

    class Person {
        public:
            string fullName;
            int age;
            string fatherName;
            string permanentAddress;
    };

    class Student : public Person {
        public:
            string studentId;
            string department;
    };

    Student student1;
    student1.fullName = "John Doe";
    student1.age = 20;
    student1.fatherName = "Mr. Doe";
    student1.permanentAddress = "123 Main St, Springfield, IL";

    student1.studentId = "123456";
    student1.department = "Computer Science";

    cout << "Student 1" << endl;
    cout << "Full Name: " << student1.fullName << endl;
    cout << "Age: " << student1.age << endl;
    cout << "Father's Name: " << student1.fatherName << endl;
    cout << "Permanent Address: " << student1.permanentAddress << endl;
    cout << "Student ID: " << student1.studentId << endl;
    cout << "Department: " << student1.department << endl;

    return 0;
}
