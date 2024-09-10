#include <stdio.h>

void guessNumber(int guess) {
    if (guess == 555) {
		printf("correct - the number is 555\n");
	} else if (guess < 555) {
		printf("Your guess %d is too low\n", guess);
	} else {
		printf("Your guess %d is too high\n", guess);
	}
}

int main() {

	printf("=============================================================================================\n");
	printf("                             Conditionals                                                    \n");
	printf("=============================================================================================\n");
	
    guessNumber(500);
    guessNumber(600);
    guessNumber(555);

	return 0;
}
