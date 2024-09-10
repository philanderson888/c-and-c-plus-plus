#include<stdio.h>

int runner()
{
    static int count = 0;
    count++;
    return count;
}

static void fun(void) {
   printf("I am a static function.");
}

int sum (int num) {
    static int result = 0;
    printf("add number: %d\n", num);
    result += num;
    return result;
}

int main() {

	printf("=============================================================================================\n");
	printf("                                         Static                                           \n");
	printf("=============================================================================================\n");

    printf("\n");
    printf("static is like a global variable that stays in memory\n");
    printf("%d\n", runner());
    printf("%d\n", runner());
    printf("%d\n", runner());

    printf("\n");
    printf("static functions are only visible to other functions in the same file\n");
    fun();

    printf("\n");
    printf("static variables in functions are like global variables that stay in memory\n");
    printf("running total is: %d\n", sum(55));
    printf("running total is: %d\n", sum(45));
    printf("running total is: %d\n", sum(50));   
	return 0;
}
