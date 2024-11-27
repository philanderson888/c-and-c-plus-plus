#include<iostream> 
using namespace std; 

int main() { 

    printf("=============================================================================================\n");
	printf("                                    Getters And Setters                                      \n");
	printf("=============================================================================================\n");

    
    class Student {
        private:
            string fullName;
            int age;
            string fatherName;
            string permanentAddress;
        public:
            void setFullName(string name) {
                fullName = name;
            }
            string getFullName() {
                return fullName;
            }
            void setAge(int studentAge) {
                age = studentAge;
            }
            int getAge() {
                return age;
            }
            void setFatherName(string name) {
                fatherName = name;
            }
            string getFatherName() {
                return fatherName;
            }
            void setPermanentAddress(string address) {
                permanentAddress = address;
            }
            string getPermanentAddress() {
                return permanentAddress;
            }
    };

    Student student1;
    student1.setFullName("John Doe");
    student1.setAge(20);
    student1.setFatherName("Mr. Doe");
    student1.setPermanentAddress("123 Main St, Springfield, IL");

    cout << "Student 1" << endl;
    cout << "Full Name: " << student1.getFullName() << endl;
    cout << "Age: " << student1.getAge() << endl;
    cout << "Father's Name: " << student1.getFatherName() << endl;
    cout << "Permanent Address: " << student1.getPermanentAddress() << endl;
    

    return 0;
}
