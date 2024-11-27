#include<iostream> 
#include<fstream>
using namespace std; 


int add(int x, int y) {
    return x + y;
}

int main() { 

    printf("=============================================================================================\n");
    printf("=============================================================================================\n");
	printf("                                    All In One C++ App                                       \n");
	printf("=============================================================================================\n");
    printf("=============================================================================================\n");


    printf("=============================================================================================\n");
	printf("                                      Hello World                                            \n");
	printf("=============================================================================================\n");

    printf("Hello, World!\n");
    cout << "Hello, World!" << std::endl;


    printf("=============================================================================================\n");
    printf("                                      Variables                                              \n");
    printf("=============================================================================================\n");

    int a = 3;
    float b = 4.5;
    double c = 5.25;
    double sum;

    sum = a + b + c;
    
    cout << "The sum of a, b, and c is " << sum << endl;
    printf("The sum of a, b, and c is %f\n", sum);

    printf("=============================================================================================\n");
    printf("                                      Data Types                                             \n");
    printf("=============================================================================================\n");

    int intType = 5;
    float floatType = 3.14;
    double doubleType = 2.71828;
    char charType = 'A';
    string stringType = "Hello, World!";
    bool boolType = true;

    cout << "intType: " << intType << endl;
    cout << "floatType: " << floatType << endl;
    cout << "doubleType: " << doubleType << endl;
    cout << "charType: " << charType << endl;
    cout << "stringType: " << stringType << endl;
    cout << "boolType: " << boolType << endl;

    printf("=============================================================================================\n");
    printf("                                      Operators                                              \n");
    printf("=============================================================================================\n");

    int x = 5;
    int y = 3;
    int z;

    z = x + y;
    cout << "x + y = " << z << endl;
    z = x - y;
    cout << "x - y = " << z << endl;
    z = x * y;
    cout << "x * y = " << z << endl;
    z = x / y;
    cout << "x / y = " << z << endl;

    printf("=============================================================================================\n");
    printf("                                      Loops                                                  \n");
    printf("=============================================================================================\n");

    int i;
    for (i = 0; i < 5; i++) {
        cout << "C++ For Loop: " << i << endl;
    }

    i = 0;
    while (i < 5) {
        cout << "C++ While Loop: " << i << endl;
        i++;
    }

    i = 0;
    do {
        cout << "C++ Do While Loop: " << i << endl;
        i++;
    } while (i < 5);

    printf("=============================================================================================\n");
    printf("                                      Conditional Statements                                  \n");
    printf("=============================================================================================\n");

    int age = 20;
    if (age >= 18) {
        cout << "You are an adult." << endl;
    } else {
        cout << "You are not an adult." << endl;
    }

    int number = 0;
    if (number > 0) {
        cout << "The number is positive." << endl;
    } else if (number < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    printf("=============================================================================================\n");
    printf("                                      Functions                                              \n");
    printf("=============================================================================================\n");

    int result = add(5, 3);

    cout << "The sum of 5 and 3 is " << result << endl;

        printf("=============================================================================================\n");
	printf("                                    Structs                                                  \n");
	printf("=============================================================================================\n");

    struct StudentAsStruct {
        string fullName;
        int age;
        string fatherName;
        string permanentAddress;
    };

    StudentAsStruct student1;
    student1.fullName = "John Doe";
    student1.age = 20;
    student1.fatherName = "Mr. Doe";
    student1.permanentAddress = "123 Main St, Springfield, IL";

    cout << "Student 1" << endl;
    cout << "Full Name: " << student1.fullName << endl;
    cout << "Age: " << student1.age << endl;
    cout << "Father's Name: " << student1.fatherName << endl;
    cout << "Permanent Address: " << student1.permanentAddress << endl;



    printf("=============================================================================================\n");
    printf("                                      Classes                                                \n");
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

    Student student2;
    student2.setFullName("John Doe");
    student2.setAge(20);
    student2.setFatherName("Mr. Doe");
    student2.setPermanentAddress("123 Main St, Springfield, IL");

    cout << "Student 1" << endl;
    cout << "Full Name: " << student2.getFullName() << endl;
    cout << "Age: " << student2.getAge() << endl;
    cout << "Father's Name: " << student2.getFatherName() << endl;
    cout << "Permanent Address: " << student2.getPermanentAddress() << endl;
    

    printf("=============================================================================================\n");
    printf("                                      Arrays                                                 \n");
    printf("=============================================================================================\n");

    int numbers[5] = {1, 2, 3, 4, 5};

    cout << "The first element is " << numbers[0] << endl;
    cout << "The second element is " << numbers[1] << endl;
    cout << "The third element is " << numbers[2] << endl;
    cout << "The fourth element is " << numbers[3] << endl;
    cout << "The fifth element is " << numbers[4] << endl;

    printf("=============================================================================================\n");
    printf("                                      Pointers                                               \n");
    printf("=============================================================================================\n");

    int var = 5;
    int *ptr = &var;

    cout << "The value of var is " << var << endl;
    cout << "The address of var is " << &var << endl;
    cout << "The value of ptr is " << ptr << endl;

    printf("=============================================================================================\n");
    printf("                                      File I/O                                               \n");
    printf("=============================================================================================\n");


    ofstream file;

    file.open("example.txt");
    file << "Read File Line 1   ";
    file << "Read File Line 2   ";
    file << "Read File Line 3   ";
    file.close();

    ifstream readFile("example.txt");
    string line;
    while (getline(readFile, line)) {
        cout << line;
    }

    printf("\n\n");
    printf("=============================================================================================\n");
    printf("                                      Exception Handling                                      \n");
    printf("=============================================================================================\n");

    try {
        throw 20;
    } catch (int e) {
        cout << "An exception occurred. Exception Nr. " << e << endl;
    }

    printf("=============================================================================================\n");
    printf("                                      Conclusion                                             \n");
    printf("=============================================================================================\n");

    printf("Thank you for using All In One C++ App!\n");

    return 0;
}
