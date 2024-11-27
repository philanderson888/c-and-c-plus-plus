#include<iostream> 
#include<sstream>
#include<vector>
using namespace std; 



/**
 * Get Human Readable C++ Version
 * @return std::string
 */
std::string c_plus_plus_version() {
    std::ostringstream version;

    switch (__cplusplus) {
        case 202101L:
            version << "C++23";
            break;
        case 202002L:
            version << "C++20";
            break;
        case 201703L:
            version << "C++17";
            break;
        case 201402L:
            version << "C++14";
            break;
        case 201103L:
            version << "C++11";
            break;
        case 199711L:
            version << "C++98";
            break;
        default:
            version << "pre-standard C++: " << __cplusplus;
            break;
    }

    return version.str();
}


int sumArray(int dataArray[], int arrLength) {
    printf("=============================================================================================\n");
	printf("                                   Find Sum Of Array                                         \n");
    printf("=============================================================================================\n");

    int sum = 0;

    std::stringstream stringBuilder;
    for (int i = 0; i < arrLength; i++) {
        sum += dataArray[i];
        stringBuilder << dataArray[i] << " ";
    }

    std::string arrayAsString = stringBuilder.str();
    cout << "array as string " << arrayAsString << endl;
    cout << "sum of array is " << sum << endl;
    return sum;
}


int main() { 

   
    std::cout << "c++ version is " << __cplusplus << " which is " << c_plus_plus_version() << std::endl;

    int dataArray[3] = {5, 6, 7};
    int arrayLength = end(dataArray) - begin(dataArray);
    sumArray(dataArray, arrayLength);

    return 0;
}
