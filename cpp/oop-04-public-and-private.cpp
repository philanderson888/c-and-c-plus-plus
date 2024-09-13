#include<iostream> 
using namespace std; 

int main() { 

    printf("=============================================================================================\n");
	printf("                            Private and Public Class Members                                 \n");
	printf("=============================================================================================\n");

    class Student {
        public:
            string fullName;
            int age;
            string fatherName;
            string permanentAddress;
        private:
            string studentId;
    };

    Student student1;
    student1.fullName = "John Doe";
    student1.age = 20;
    student1.fatherName = "Mr. Doe";
    student1.permanentAddress = "123 Main St, Springfield, IL";
    // student1.studentId = "123456

    cout << "Student 1" << endl;
    cout << "Full Name: " << student1.fullName << endl;
    cout << "Age: " << student1.age << endl;
    cout << "Father's Name: " << student1.fatherName << endl;
    cout << "Permanent Address: " << student1.permanentAddress << endl;
    // cout << "Student ID: " << student1.studentId << endl;

    cout << "we can now add a constructor to initialize the studentId" << endl;

    class Student2 {
        public:
            string fullName;
            int age;
            string fatherName;
            string permanentAddress;
        private:
            string studentId;

        // Constructor
        public:
            Student2(string name, int age, string father, string address, string id) {
                fullName = name;
                this->age = age;
                fatherName = father;
                permanentAddress = address;
                studentId = id;
            }
    };

    Student2 student2("John Doe", 20, "Mr. Doe", "123 Main St, Springfield, IL", "123456");

    cout << "Student 2" << endl;
    cout << "Full Name: " << student2.fullName << endl;
    cout << "Age: " << student2.age << endl;
    cout << "Father's Name: " << student2.fatherName << endl;
    cout << "Permanent Address: " << student2.permanentAddress << endl;
    cout << "cannot print student id directly as it is a private variable" << endl;
    
    return 0;
}
