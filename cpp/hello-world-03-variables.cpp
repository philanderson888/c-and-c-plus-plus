#include <iostream>
using namespace std;

int main() {

  int a = 3;
  float b = 4.5;
  double c = 5.25;
  double sum;

  sum = a + b + c;

  cout << "The sum of a, b, and c is " << sum << endl;
  
  printf("The sum of a, b, and c is %f\n", sum);

  return 0;
}
