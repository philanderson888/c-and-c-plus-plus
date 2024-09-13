#include<iostream> 
using namespace std; 

int main() { 

    printf("=============================================================================================\n");
	printf("                                 Constructors                                                \n");
	printf("=============================================================================================\n");

    class Student {
        public:
            string fullName;
            int age;
            string fatherName;
            string permanentAddress;

            // Constructor
            Student(string name, int age, string father, string address) {
                fullName = name;
                this->age = age;
                fatherName = father;
                permanentAddress = address;
            }
    };

    Student student1("John Doe", 20, "Mr. Doe", "123 Main St, Springfield, IL");

    cout << "Student 1" << endl;
    cout << "Full Name: " << student1.fullName << endl;
    cout << "Age: " << student1.age << endl;
    cout << "Father's Name: " << student1.fatherName << endl;
    cout << "Permanent Address: " << student1.permanentAddress << endl;
    
    return 0;
}
