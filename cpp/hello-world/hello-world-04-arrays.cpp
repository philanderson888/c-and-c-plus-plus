#include <iostream>
using namespace std;

int main() {

	printf("=============================================================================================\n");
	printf("                                   Arrays                                                    \n");
	printf("=============================================================================================\n");

  int array01[5] = {1, 2, 3, 4, 5};
  int array02[]  = {1, 2, 3, 4, 5};

  int sum = 0;

  for (int i = 0; i < 5; i++) {
    sum += array01[i];
  }

  cout << "The sum of the array is " << sum << endl;

  return 0;
}
