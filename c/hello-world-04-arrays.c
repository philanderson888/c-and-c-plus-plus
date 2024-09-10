	#include <stdio.h>

	int main() {

        printf("\n");
        printf("\n");
        printf("\n");
	
        int grades[2][5];
		float average;
		int i;
		int j;

		grades[0][0] = 80;
		grades[0][1] = 70;
		grades[0][2] = 65;
		grades[0][3] = 89;
		grades[0][4] = 90;

		grades[1][0] = 85;
		grades[1][1] = 80;
		grades[1][2] = 80;
		grades[1][3] = 82;
		grades[1][4] = 87;

        int numberOfSubjects = 2;
        printf("\n");
        printf("The number of subjects is: %d\n", numberOfSubjects);
        
        int numberOfGrades = 5;
        printf("The number of grades is %d:\n", numberOfGrades);
		
        for (i = 0; i < numberOfSubjects; i++) {
			int totalScore = 0;
            printf("\n");
			for (j = 0; j < numberOfGrades; j++) {
                int score = grades[i][j];
                printf("The score obtained in subject %d is: %d\n", i, score);
				totalScore += score;
			}
			average = totalScore / numberOfGrades;
            printf("\n");
            printf("The total marks obtained in subject %d is: %d\n", i, totalScore);
			printf("The average marks obtained in subject %d is: %.2f\n", i, average);
            printf("\n");
            
		}

		return 0;
	}
