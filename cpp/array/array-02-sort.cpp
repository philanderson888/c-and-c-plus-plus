#include<iostream> 
#include<sstream>
#include<vector>
using namespace std; 

#include <algorithm>
#include <array>



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




void findMaxAndMinSumsOf4ElementsFromAGroupOf5Elements(int arrayOfFiveElements[]) {

    int sum = 0;
    int minSum = 0;
    int maxSum = 0;
    int arrayLength = 5;

    for (int i = 0; i < arrayLength; i++) {
        sum += arrayOfFiveElements[i];
    }

    for (int i = 0; i < arrayLength; i++) {
        int tempSum = sum - arrayOfFiveElements[i];
        if (i == 0) {
            minSum = tempSum;
            maxSum = tempSum;
        }
        if (tempSum < minSum) {
            minSum = tempSum;
        }
        if (tempSum > maxSum) {
            maxSum = tempSum;
        }
    }

    cout << "min sum is " << minSum << endl;
    cout << "max sum is " << maxSum << endl;


    cout << "\n\nsecond way of doing this is just by adding the first and last to the mid group of 3 elements in a sorted array" << endl;
    std::sort(arrayOfFiveElements, arrayOfFiveElements + 5);
    // sort(arrayOfFiveElements.begin(), arrayOfFiveElements.end());
    cout << "sorted array ... " << endl;
    for (int i = 0; i < 5; i++) {
        cout << arrayOfFiveElements[i] << " ";
    }
    cout << endl;
    int sumOfMidThreeElements = 0;
    for (int i = 1; i < 4; i++) {
        sumOfMidThreeElements += arrayOfFiveElements[i];
    }
    int minSum2 = arrayOfFiveElements[0] + sumOfMidThreeElements;
    int maxSum2 = arrayOfFiveElements[4] + sumOfMidThreeElements;

    cout << "min sum is " << minSum2 << endl;
    cout << "max sum is " << maxSum2 << endl;

    cout << endl; 
}

int main() { 

    printf("=============================================================================================\n");
    printf("=============================================================================================\n");
	printf("                                    Coding Challenges                                        \n");
	printf("=============================================================================================\n");
    printf("=============================================================================================\n");
    
    std::cout << "c++ version is " << __cplusplus << " which is " << c_plus_plus_version() << std::endl;


    printf("=============================================================================================\n");
	printf("            Find Max And Min Sums Of 4 Elements From A Group Of 5 Elements                   \n");
    printf("=============================================================================================\n");

    int arrayOf5Elements[] = {1, 2, 3, 4, 5};
    findMaxAndMinSumsOf4ElementsFromAGroupOf5Elements(arrayOf5Elements);


    return 0;
}
