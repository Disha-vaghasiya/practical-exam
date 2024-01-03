#include <stdio.h>

int ly(int *year) {
    return ((*year % 4 == 0 && *year % 100 != 0) || (*year % 400 == 0));
}

 main() {
    FILE *oFile;
    int startYear, endYear;

    printf("Enter the starting year: ");
    scanf("%d", &startYear);

    printf("Enter the ending year: ");
    scanf("%d", &endYear);

    oFile = fopen("resulttt.txt", "w");

    if (oFile == NULL) {
        printf("File could not open...!\n");
      
    }

    for (int year = startYear; year <= endYear; ++year) {
    	
        if (ly(&year)) 
		{
            fprintf(oFile, "%d is a leap year.\n", year);
        }
    }

    fclose(oFile);

    printf("Leap years written to resulttt.txt\n");


}

