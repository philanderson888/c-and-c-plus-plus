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

int sumArray(int dataArray[], int arrayLength) {

    long long sum = 0;

    std::stringstream stringBuilder;
    for (int i = 0; i < arrayLength; i++) {
        sum += dataArray[i];
        stringBuilder << dataArray[i] << " ";
    }

    std::string arrayAsString = stringBuilder.str();
    cout << "array as string " << arrayAsString << endl;
    cout << "sum of array is " << sum << endl;
    return sum;
}

int findTheDiagonalDifferenceOfAMatrixDiagonals(int squareMatrix[3][3], int matrixSize) {
    int primaryDiagonal = 0;
    int secondaryDiagonal = 0;

    cout << "\nmatrix size is " << matrixSize << endl;
    cout << "\n\nthe matrix elements are ... " << endl;

    std::stringstream stringBuilder;

    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixSize; j++) {
            int element = squareMatrix[i][j];
            stringBuilder << element << " ";
        }
        stringBuilder << "\n";
    }

    std::string matrixRowElements = stringBuilder.str();
    cout << matrixRowElements << endl;

    for (int i = 0; i < matrixSize; i++) {
        primaryDiagonal += squareMatrix[i][i];
        secondaryDiagonal += squareMatrix[i][matrixSize - i - 1];
    }

    cout << "primary diagonal sum is " << primaryDiagonal << endl;
    cout << "secondary diagonal sum is " << secondaryDiagonal << endl;

    cout << "diagonal difference is " << abs(primaryDiagonal - secondaryDiagonal) << endl;

    return abs(primaryDiagonal - secondaryDiagonal);
}


void calculateRatioOfPositiveNegativeAndZeroIntegersInArray(int arrayOfPositiveNegativeAndZeroIntegers[], int positiveNegativeZeroArrayLength) {

    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;

    for (int i = 0; i < positiveNegativeZeroArrayLength; i++) {
        if (arrayOfPositiveNegativeAndZeroIntegers[i] > 0) {
            positiveCount++;
        } else if (arrayOfPositiveNegativeAndZeroIntegers[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    cout << "positive count is " << positiveCount << endl;
    cout << "negative count is " << negativeCount << endl;
    cout << "zero count is " << zeroCount << endl;

    cout << "positive ratio is " << (float)positiveCount / positiveNegativeZeroArrayLength << endl;
    cout << "negative ratio is " << (float)negativeCount / positiveNegativeZeroArrayLength << endl;
    cout << "zero ratio is " << (float)zeroCount / positiveNegativeZeroArrayLength << endl;

    float ratioPositive = (float)positiveCount / positiveNegativeZeroArrayLength;
    cout << ratioPositive << endl;
    float ratioNegative = (float)negativeCount / positiveNegativeZeroArrayLength;
    cout << ratioNegative << endl;
    float ratioZeros = (float)zeroCount / positiveNegativeZeroArrayLength;
    cout << ratioZeros << endl;
}


void printStaircase(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        for (int k = 0; k < i + 1; k++) {
            cout << "#";
        }
        cout << endl;
    }
}

void findMaxAndMinSumsOf4ElementsFromAGroupOf5Elements(int arrayOfFiveElements[]) {

    long sum = 0;
    long minSum = 0;
    long maxSum = 0;
    int arrayLength = 5;

    bool showDebugPrintout = false;

    for (int i = 0; i < arrayLength; i++) {
        sum += arrayOfFiveElements[i];
    }

    for (int i = 0; i < arrayLength; i++) {
        long tempSum = sum - arrayOfFiveElements[i];
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

    if (showDebugPrintout) {
        cout << "min sum is " << minSum << endl;
        cout << "max sum is " << maxSum << endl;
    }
    
    if (showDebugPrintout) {
        cout << "\n\nsecond way of doing this is just by adding the first and last to the mid group of 3 elements in a sorted array" << endl;
    }
    
    std::sort(arrayOfFiveElements, arrayOfFiveElements + 5);
    // sort(arrayOfFiveElements.begin(), arrayOfFiveElements.end());
 
    if (showDebugPrintout) {
        cout << "sorted array ... " << endl;
        for (int i = 0; i < 5; i++) {
            cout << arrayOfFiveElements[i] << " ";
        }
        cout << endl;
    }

    long sumOfMidThreeElements = 0;
    for (int i = 1; i < 4; i++) {
        sumOfMidThreeElements += arrayOfFiveElements[i];
    }
    long minSum2 = arrayOfFiveElements[0] + sumOfMidThreeElements;
    long maxSum2 = arrayOfFiveElements[4] + sumOfMidThreeElements;

    if (showDebugPrintout) {
        cout << "min sum is " << minSum2 << endl;
        cout << "max sum is " << maxSum2 << endl;
    }

    cout << minSum2 << " " << maxSum2 << endl;

}


int findNumberOfTallestCandles(int candles[], int candlesLength) {

    int max = 0;
    int count = 0;

    for (int i = 0; i < candlesLength; i++) {
        if (candles[i] > max) {
            max = candles[i];
            count = 1;
        } else if (candles[i] == max) {
            count++;
        }
    }

    cout << "max is " << max << endl;
    cout << "count is " << count << endl;

    return count;
}   

string convertTimeFrom12HourTo24HourFormat(string time) {
    string convertedTime = "";
    string hours = time.substr(0, 2);
    string minutes = time.substr(3, 2);
    string seconds = time.substr(6, 2);
    string period = time.substr(8, 2);

    if (period == "AM") {
        if (hours == "12") {
            hours = "00";
        }
    } else {
        if (hours != "12") {
            int hoursInt = stoi(hours);
            hoursInt += 12;
            hours = to_string(hoursInt);
        }
    }

    convertedTime = hours + ":" + minutes + ":" + seconds;
    cout << "converted time is " << convertedTime << endl;
    return convertedTime;
}


vector<int> gradeYourStudents(vector<int> grades) {
    
    printf("given a series of grades, round them up to the nearest multiple of 5 if the difference between the grade and the next multiple of 5 is less than 3\n");
    printf("if the grade is less than 38, no rounding occurs\n");

    int gradesLength = grades.size();
    printf("we have %d grades listed below: \n", gradesLength);
    for (int i = 0; i < gradesLength; i++) {
        printf("%d ", grades[i]);
    }

    for (int i = 0; i < gradesLength; i++) {
        int grade = grades[i];
        if (grade < 38) {
            grades[i] = grade;
        } else {
            int nextMultipleOf5 = (grade / 5 + 1) * 5;
            if (nextMultipleOf5 - grade < 3) {
                grades[i] = nextMultipleOf5;
            } else {
                grades[i] = grade;
            }
        }
    }

    printf("\n\nthe rounded grades are: \n");
    for (int i = 0; i < gradesLength; i++) {
        printf("%d ", grades[i]);
    }

    return grades;
}

void findNumberOfFruitsWhichFallOnYourHouse(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {


    int applesOnTree = apples.size();
    int applesCount = 0;
    for (int i = 0; i < applesOnTree; i++) {
        int appleDistance = a + apples[i];
        if (appleDistance >= s && appleDistance <= t) {
            applesCount++;
        }
    }

    int orangesOnTree = oranges.size();
    int orangesCount = 0;
    for (int i = 0; i < orangesOnTree; i++) {
        int orangeDistance = b + oranges[i];
        if (orangeDistance >= s && orangeDistance <= t) {
            orangesCount++;
        }
    }

    printf("\n\napples count is %d\n", applesCount);
    printf("oranges count is %d\n", orangesCount);

    cout << "apples count is " << applesCount << endl;
    cout << "oranges count is " << orangesCount << endl;

    cout << applesCount << endl;
    cout << orangesCount << endl;
    
}

vector<int> comparePoints(vector<int> pointsA, vector<int> pointsB) {
    int scoreA = 0;
    int scoreB = 0;
    int pointsLength = pointsA.size();

    for (int i = 0; i < pointsLength; i++) {
        if (pointsA[i] > pointsB[i]) {
            scoreA++;
        } else if (pointsA[i] < pointsB[i]) {
            scoreB++;
        }
    }

    int scores[] = {scoreA, scoreB};
    vector<int> scoresVector(scores, scores + sizeof(scores) / sizeof(scores[0]));

    cout << scoreA << " " << scoreB << endl;

    if (scoreA > scoreB) {
        cout << "A wins!" << endl;
    } else if (scoreA < scoreB) {
        cout << "B wins!" << endl;
    } else {
        cout << "It's a tie!" << endl;
    }

    return scoresVector;
}


string reduceByPowersOf2(int initialGameValue) {

    // given initial number n, reduce it by subtracting the largest power of 2 less than n
    // there are 2 plaers, Louise and Richard
    // Louise goes first
    // if n = 1 then Richard wins as there are no moves left
    // if n is even, divide by 2 and pass to the other player
    // if n is odd, subtract the largest power of 2 less than n and pass to the other player
    // the game ends when the number reaches 1
    // return the name of the winner as a string either "Louise" or "Richard"

    int moves = 0;
    int gamePlayValue = initialGameValue;
    string winner = "";

    cout << "using the & (bitwise and) operator is a fancy way of checking if a number is a power of 2 or not" << endl;
    cout << "132 & 131 is " << (132 & 131) << " yields 128" << endl;
    cout << "131 & 130 is " << (131 & 130) << " yields 128" << endl;
    cout << "130 & 129 is " << (130 & 129) << " yields 128" << endl;
    cout << "129 & 128 is " << (129 & 128) << " yields 128" << endl; 
    cout << "128 & 127 is " << (128 & 127) << " yields 0" << endl;
    cout << " " << endl;

    while (gamePlayValue > 1) {

        moves++;
        cout << "\nmove " << moves << endl;        
        cout << "game play value this turn starts " << gamePlayValue << endl;
        // cout << "game play value - 1 is " << (gamePlayValue - 1) << endl;
        // cout << "game play value & (game play value - 1) is " << (gamePlayValue & (gamePlayValue - 1)) << endl;
        if ((gamePlayValue & (gamePlayValue - 1)) == 0) {
            gamePlayValue = gamePlayValue / 2;
            cout << "dividing by 2 so game play value this turn ends " << gamePlayValue << endl;
        } else {
            int largestPowerOf2 = 1;
            while (largestPowerOf2 * 2 < gamePlayValue) {
                largestPowerOf2 *= 2;
            }
            gamePlayValue -= largestPowerOf2;
            cout << "subtracting largest power of 2 " << largestPowerOf2 << " so game play value this turn ends " << gamePlayValue << endl;
        }
    }

    cout << "\nfinal move is " << moves << endl;        
    cout << "final game play value is " << gamePlayValue << endl;

    if (moves % 2 == 0) {
        winner = "Richard";
    } else {
        winner = "Louise";
    }

    cout << "winner is " << winner << endl;

    return winner;
}

string circusShow(int initialPositionAnimal1, int speedAnimal1, int initialPositionAnimal2, int speedAnimal2) {

    /*

    circus show
    two kangaroos have initial position x and speed of each jump v so input data is [x1, v1] and [x2, v2]
    initial position time t = 0 the are at [x1, x2]
    after time t they are at [x1 + v1*t, x2 + v2*t]
    we have to determine if at any point on the journey they are at the same position ie x1 + v1*t = x2 + v2*t for some t

    so mathematically x1 + v1*t = x2 + v2*t 
    separate out t and we get t = (x2 - x1) / (v1 - v2) has to be an integer

    */

    string result = "NO";

    int x1 = initialPositionAnimal1;
    int v1 = speedAnimal1;
    int x2 = initialPositionAnimal2;
    int v2 = speedAnimal2;

    cout << "initial position of animal 1 is " << x1 << " and speed is " << v1 << endl;
    cout << "initial position of animal 2 is " << x2 << " and speed is " << v2 << endl;

    cout << "\nnow determine if they meet ..." << endl;

    bool willMeet = false;
    int willMeetTime = -1;
    int willMeetPosition = -1;

    if (v1 == v2) {
        if (x1 == x2) {
            cout << "they are at the same position so they will meet" << endl;
            willMeet = true;
            willMeetTime = 0;
        } else {
            cout << "they are moving at the same speed so they will never meet" << endl;
        }
    } else {
        willMeetTime = (x2 - x1) / (v1 - v2);
        bool willMeetAtAPerfectIntegerPosition = (x2 - x1) % (v1 - v2) == 0;
        if (willMeetTime >= 0 && willMeetAtAPerfectIntegerPosition) {
            willMeet = true;
        }
    }

    if (willMeet) {
        result = "YES";
        willMeetPosition = x1 + v1 * willMeetTime;
        cout << "they will meet at position " << willMeetPosition << " at time " << willMeetTime << endl;
    } else {
        cout << "they will never meet" << endl;
    }

    cout << "result is " << result << endl;

    return result;

}

int findFactors(vector<int> factorArray1, vector<int> factorArray2) {

    /*
    given two arrays
    a) the elements of the first array are all factors of the integer n
    b) the integer n is a factor of all elements of the second array
    */

    vector<int> a = factorArray1;
    vector<int> b = factorArray2;

    cout << "factor array 1 is ";
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    
    cout << "\nfactor array 2 is ";
    for (int i = 0; i < b.size(); i++) {
        cout << b[i] << " ";
    }

    cout << "\nfind factors meeting conditions ... " << endl;

    vector<int> factors;

    int maxA = *max_element(a.begin(), a.end());
    int minB = *min_element(b.begin(), b.end());

    cout << "max of a is " << maxA << endl;
    cout << "min of b is " << minB << endl;

    for (int i = maxA; i <= minB; i++) {
        bool isFactor = true;
        for (int j = 0; j < a.size(); j++) {
            if (i % a[j] != 0) {
                isFactor = false;
                break;
            }
        }
        if (isFactor) {
            for (int j = 0; j < b.size(); j++) {
                if (b[j] % i != 0) {
                    isFactor = false;
                    break;
                }
            }
        }
        if (isFactor) {
            factors.push_back(i);
        }
    }

    int factorsFound = factors.size();

    if (factorsFound > 0) {
        cout << factorsFound << " factors found ... ";
        for (int i = 0; i < factorsFound; i++) {
            cout << factors[i] << " ";
        }
    } else {
        cout << "no factors found" << endl;
    }

    cout << endl;

    return factorsFound;

}

int main() { 

    printf("=============================================================================================\n");
    printf("=============================================================================================\n");
	printf("                                    Coding Challenges                                        \n");
	printf("=============================================================================================\n");
    printf("=============================================================================================\n");
    
    std::cout << "c++ version is " << __cplusplus << " which is " << c_plus_plus_version() << std::endl;

    comparePoints();

    printf("=============================================================================================\n");
	printf("                                   Find Sum Of Array                                         \n");
    printf("=============================================================================================\n");
    int dataArray[] = {5, 6, 7};
    int arrayLength = end(dataArray) - begin(dataArray);
    sumArray(dataArray, arrayLength);
    int dataArray2[] = {1000000001, 1000000002, 1000000003, 1000000004, 1000000005};
    arrayLength = end(dataArray2) - begin(dataArray2);
    sumArray(dataArray2, arrayLength);

    printf("=============================================================================================\n");
	printf("                         Find Diagonal Difference Of A Matrix Diagonals                      \n");
    printf("=============================================================================================\n");
    int squareMatrix01[3][3] = {
        {11, 2, 4},
        {4, 5, 6},
        {10, 8, -12}
    };

    int matrixSize = sizeof(squareMatrix01) / sizeof(squareMatrix01[0]);
    findTheDiagonalDifferenceOfAMatrixDiagonals(squareMatrix01, matrixSize);


    printf("=============================================================================================\n");
	printf("                Calculate Ratio Of Positive Negative and Zero Integers In Array              \n");
    printf("=============================================================================================\n");

    int arrayOfPositiveNegativeAndZeroIntegers[] = {-4, 3, -9, 0, 4, 1};
    int positiveNegativeZeroArrayLength = sizeof(arrayOfPositiveNegativeAndZeroIntegers) / sizeof(arrayOfPositiveNegativeAndZeroIntegers[0]);
    calculateRatioOfPositiveNegativeAndZeroIntegersInArray(arrayOfPositiveNegativeAndZeroIntegers, positiveNegativeZeroArrayLength);


    printf("=============================================================================================\n");
	printf("                             Print A Staircase Of Size n                                     \n");
    printf("=============================================================================================\n");

    int n = 6;
    printStaircase(n);



    printf("=============================================================================================\n");
	printf("            Find Max And Min Sums Of 4 Elements From A Group Of 5 Elements                   \n");
    printf("=============================================================================================\n");

    int arrayOf5Elements[] = {1, 2, 3, 4, 5};
    findMaxAndMinSumsOf4ElementsFromAGroupOf5Elements(arrayOf5Elements);

    int arrayOf5Elements02[] = {256741038, 623958417, 467905213, 714532089, 938071625};
    findMaxAndMinSumsOf4ElementsFromAGroupOf5Elements(arrayOf5Elements02); // expected output 2063136757 2744467344
    



    printf("=============================================================================================\n");
	printf("                           Find Out The Tallest Candles                                      \n");
    printf("=============================================================================================\n");

    int candles[] = {3, 2, 1, 3};
    int candlesLength = sizeof(candles) / sizeof(candles[0]);
    findNumberOfTallestCandles(candles, candlesLength);

    printf("=============================================================================================\n");
	printf("                         Convert Time From 12 Hour To 24 Hour Format                         \n");
    printf("=============================================================================================\n");

    string time = "07:05:45PM";
    string time2 = "12:05:45AM";
    string time3 = "12:05:45PM";
    convertTimeFrom12HourTo24HourFormat(time);
    convertTimeFrom12HourTo24HourFormat(time2);



    printf("=============================================================================================\n");
	printf("                          Grade Your Students Based On Their Scores                          \n");
    printf("=============================================================================================\n");

    // c++ 11
    //  vector<int> grades = {73, 67, 38, 33};
    
    // c++ 98
    int grades[] = {73, 67, 38, 33};
    vector<int> gradesAsVector(grades, grades + sizeof(grades) / sizeof(grades[0])); 
    gradeYourStudents(gradesAsVector);
  



    printf("=============================================================================================\n");
    printf("                       Number Of Apples And Oranges Which Fall On A House                    \n");
    printf("=============================================================================================\n");

    // s and t are the start and end points of the house
    int s = 7;
    int t = 11;
    // a is the location of the apple tree
    int a = 5;
    // b is the location of the orange tree
    int b = 15;
    // apples is an array of distances at which each apple falls from the tree
    // oranges is an array of distances at which each orange falls from the tree
    int apples[] = {-2, 2, 1};
    int oranges[] = {5, -6};

    vector<int> applesAsVector(apples, apples + sizeof(apples) / sizeof(apples[0])); 
    vector<int> orangesAsVector(oranges, oranges + sizeof(oranges) / sizeof(oranges[0])); 
    findNumberOfFruitsWhichFallOnYourHouse(s, t, a, b, applesAsVector, orangesAsVector);




    printf("=============================================================================================\n");
    printf("                                   Reduce By Powers Of 2                                     \n");
    printf("=============================================================================================\n");

    int initialGameValue = 132;
    reduceByPowersOf2(initialGameValue);


    printf("=============================================================================================\n");
    printf("                             Compare Points Of Two Players                                   \n");
    printf("=============================================================================================\n");
    int pointsA[] = {5, 6, 7};
    int pointsB[] = {3, 6, 10};
    vector<int> pointsAsVectorA(pointsA, pointsA + sizeof(pointsA) / sizeof(pointsA[0]));
    vector<int> pointsAsVectorB(pointsB, pointsB + sizeof(pointsB) / sizeof(pointsB[0]));
    comparePoints(pointsAsVectorA, pointsAsVectorB);


    printf("=============================================================================================\n");
    printf("                                   Circus Show                                               \n");
    printf("=============================================================================================\n");

    int animal1[] = {0,3};
    int animal2[] = {4,2};
    circusShow(animal1[0], animal1[1], animal2[0], animal2[1]);



    printf("=============================================================================================\n");
    printf("                                      Find Factors                                           \n");
    printf("=============================================================================================\n");

    int factorArray1[] = {2, 6};
    int factorArray2[] = {24, 36};
    vector<int> factorArrayAsVector1(factorArray1, factorArray1 + sizeof(factorArray1) / sizeof(factorArray1[0]));
    vector<int> factorArrayAsVector2(factorArray2, factorArray2 + sizeof(factorArray2) / sizeof(factorArray2[0]));
    findFactors(factorArrayAsVector1, factorArrayAsVector2);

    int factorArray3[] = {2, 4};
    int factorArray4[] = {16, 32, 96};
    vector<int> factorArrayAsVector3(factorArray3, factorArray3 + sizeof(factorArray3) / sizeof(factorArray3[0]));
    vector<int> factorArrayAsVector4(factorArray4, factorArray4 + sizeof(factorArray4) / sizeof(factorArray4[0]));
    findFactors(factorArrayAsVector3, factorArrayAsVector4);

    return 0;
}
