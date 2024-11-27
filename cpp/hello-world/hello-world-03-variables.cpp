#include<iostream> 
#include<sstream>
#include<vector>
using namespace std; 

int sumArray(int dataArray[], int arrayLength) {
    printf("=============================================================================================\n");
  	printf("                                   Find Sum Of Array                                         \n");
    printf("=============================================================================================\n");

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

int main() {

  int a = 3;
  float b = 4.5;
  double c = 5.25;
  double sum;

  sum = a + b + c;

  cout << "The sum of a, b, and c is " << sum << endl;
  
  printf("The sum of a, b, and c is %f\n", sum);


  printf("\nstring to integer conversion\n");
  string numberAsString = "2021";
  int numberFromString = stoi(numberAsString);
  cout << "The integer value of the string" << numberAsString << " is " << numberFromString << endl;


  printf("\ninteger to string conversion\n");
  int numberToConvert = 2021;
  string numberToString = to_string(numberToConvert);
  cout << "The string value of the integer " << numberToConvert << " is " << numberToString << endl;

  printf("We can also use 'long long' data type in this case when we sum the values of an array\n");
  printf("... then the result will be more than an int. so we can use 'long' or 'long long' in these cases.\n");
  int dataArray[] = {5, 6, 7};
  int arrayLength = end(dataArray) - begin(dataArray);
  sumArray(dataArray, arrayLength);
  int dataArray2[] = {1000000001, 1000000002, 1000000003, 1000000004, 1000000005};
  arrayLength = end(dataArray2) - begin(dataArray2);
  sumArray(dataArray2, arrayLength);

  printf("=============================================================================================\n");
  printf("                         Compare Vectors And Arrays In C++                                   \n");
  printf("=============================================================================================\n");

  vector<int> vector01 = {1, 2, 3, 4, 5};
  int array01[] = {1, 2, 3, 4, 5};
  int arrayLength01 = sizeof(array01) / sizeof(array01[0]);

  cout << "vector01 size is " << vector01.size() << endl;
  cout << "array01 size is " << arrayLength01 << endl;

  cout << "vector01 elements are ... " << endl;
  for (int i = 0; i < vector01.size(); i++) {
      cout << vector01[i] << " ";
  }

  cout << "\narray01 elements are ... " << endl;
  for (int i = 0; i < arrayLength01; i++) {
      cout << array01[i] << " ";
  }

  cout << endl;
  

  return 0;
}
