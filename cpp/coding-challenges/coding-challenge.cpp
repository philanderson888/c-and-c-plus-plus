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


void comparePoints(){
    
    int alicePoints[] = {5, 6, 7};
    int bobPoints[] = {3, 6, 10};

    int aliceScore = 0;
    int bobScore = 0;
    int pointsLength = sizeof(alicePoints) / sizeof(alicePoints[0]);

    for (int i = 0; i < pointsLength; i++) {
        if (alicePoints[i] > bobPoints[i]) {
            aliceScore++;
        } else if (alicePoints[i] < bobPoints[i]) {
            bobScore++;
        }
    }

    int scores[] = {aliceScore, bobScore};

    cout << aliceScore << " " << bobScore << endl;
    cout << "compare scores: alice " << scores[0] << " : bob " << scores[1] << endl;
    cout << "scores ... " << endl;

    if (__cplusplus <= 199711) {
        std::copy(
        std::begin(scores),
        std::end(scores),
        std::ostream_iterator<int>(std::cout, "\n"));
    } else {
        #if __cplusplus > 199711
        for (int i : scores) {
            cout << i << endl;
        }
        #endif
    }

    if (scores[0] > scores[1]) {
        cout << "Alice wins!" << endl;
    } else if (scores[0] < scores[1]) {
        cout << "Bob wins!" << endl;
    } else {
        cout << "It's a tie!" << endl;
    }   
    
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

    printf("=============================================================================================\n");
    printf("=============================================================================================\n");
	printf("                                    Coding Challenges                                        \n");
	printf("=============================================================================================\n");
    printf("=============================================================================================\n");
    
    std::cout << "c++ version is " << __cplusplus << " which is " << c_plus_plus_version() << std::endl;

    comparePoints();

    int dataArray[3] = {5, 6, 7};
    int arrayLength = end(dataArray) - begin(dataArray);
    sumArray(dataArray, arrayLength);

    return 0;
}
