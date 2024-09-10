#include <stdio.h>
#include <string.h>

int main() {

	printf("=============================================================================================\n");
	printf("                                  Strings                                                    \n");
	printf("=============================================================================================\n");

	char * nameReadOnly = "'John read only string'";
	printf("read only string is %s\n", nameReadOnly);	

	char name[] = "John";
	printf("name is %s\n", name);

	int nameReadOnlyLength = strlen(nameReadOnly);
	int nameLength = strlen(name);

	printf("nameReadOnly length is %d\n", nameReadOnlyLength);
	printf("name length is %d\n", nameLength);

	if (strncmp(name, "John", 4) == 0) {
		printf("name is John\n");
	} else {
		printf("name is not John\n");
	}

	char * stringPart01 = "this is a string";
	char * stringPart02 = " and this is another string";
	char stringCombined[100];
	strcpy(stringCombined, stringPart01);
	strcat(stringCombined, stringPart02);
	printf("combined string is %s\n", stringCombined);


	char * stringPart03 = "this is a string";
	char * stringPart04 = " and this is another string";
	char stringCombined02[100];
	strncat(stringCombined02, stringPart03, 20);
	strncat(stringCombined02, stringPart04, 40);
	printf("combined string is %s\n", stringCombined02);

	return 0;
}
