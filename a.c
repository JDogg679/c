
#include <stdio.h>
//#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {
    double grade[8];
    float sum = 0, avg, temp;
    int i, j, counter = 0;

    for (i = 0; i < 8; i++) {
        do {
            printf("Insert grade: ");
            scanf("%lf", &grade[i]);
            grade[i] *= 10;
            if (grade[i] != floor(grade[i]) || (grade[i]) < 0 || (grade[i]) > 100)
                printf("Grade should range from 0 to 10 and have one decimal point.\nPlease re-enter grade.\n\a");
            else {
                printf("Grade accepted.\n");
		sum = sum + (grade[i] / 10);
            }
	} while (grade[i] != floor(grade[i]) || grade[i] < 0 || grade[i] > 100);
    }
	
    avg = sum / 8;
	
    for (i = 0; i < 8; i++) {
        if ((grade[i] / 10) > avg)
            counter += 1;
    }
	
    for (i = 0; i < 8; i++) {
        for(j = i; j < 8; j++) {        	
            if(grade[i] > grade[j]) {
                temp = grade[i];
                grade[i] = grade[j];
                grade[j] = temp;
            }        	
        }
    }
    
	printf("\nStudents with grades better than average: %d\n", counter);
	printf("\nHighest grade: %.1f ", grade[7] / 10);
	printf("Students: ");
	
	for (i = 0; i < 7; i++)		
            printf("%.1f, ", grade[i] / 10);
	
        printf("%.1f\n", grade[7] / 10);
	
	return 0;
	
}
