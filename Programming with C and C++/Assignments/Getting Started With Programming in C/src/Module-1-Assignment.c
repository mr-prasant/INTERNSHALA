/*
 ============================================================================
 Name        : Module-01-Assignment.c
 Author      : prasant.cp
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//vARIABLES =============================================
	int standard;
	char name[50];
	char section;
	char grade;
	double totalMarks;
	double maths, eng, hindi, sci, sst;

	//GETTING INPUT =========================================
	puts("----------WELCOME TO JAWAHAR NAVODAYA VIDYALAYA----------\n\nPlease enter the details of student.\n");
	printf("Enter the name of student: ");
	fflush(stdout);
	scanf("%[^\n]%*c", name);
	name[0] = toupper(name[0]);

	printf("Enter the standard of %s: ", name);
	fflush(stdout);
	scanf("%d", &standard);

	printf("Enter the section: ");
	fflush(stdout);
	while ((getchar()) != '\n');
	scanf("%c", &section);
	section = toupper(section);

	puts("\nMarks secured in: /100");
	printf("Mathematics: ");
	fflush(stdout);
	scanf("%lf", &maths);

	printf("English: ");
	fflush(stdout);
	scanf("%lf", &eng);

	printf("Hindi: ");
	fflush(stdout);
	scanf("%lf", &hindi);

	printf("Science: ");
	fflush(stdout);
	scanf("%lf", &sci);

	printf("Social Science: ");
	fflush(stdout);
	scanf("%lf", &sst);

	//TOTAL MARKS ===========================================
	totalMarks = maths + eng + hindi + sci + sst;
	puts("\nPlease wait...");
	fflush(stdout);
	sleep(1);

	//CALCULATIONS ==========================================
	if(!(totalMarks > 500) && !(totalMarks < 0)) {

		printf("\nGenerating report card...");
		fflush(stdout);
		sleep(3);

		if (totalMarks >= 450 || totalMarks <= 500) {
			grade = 'A';
		} else if (totalMarks >= 400 || totalMarks <= 449) {
			grade = 'B';
		} else if (totalMarks >= 350 || totalMarks <= 399) {
			grade = 'C';
		} else if (totalMarks >= 300 && totalMarks <= 349) {
			grade = 'D';
		} else if (totalMarks >= 200 || totalMarks <= 299) {
			grade = 'E';
		} else if (totalMarks >= 0 && totalMarks <= 199) {
			grade = 'F';
		}

	} else {
		puts("\nError occurred in the marks!");
		_Exit(0);
	}

	//GENERATING MESSAGE=================================================================================================================================================================
	puts("\n-----------------------------------------------------------\n\n            Jawahar Navodaya Vidyalaya\n\n                 Annual Report Card\n\n");
	printf("           Name: %s\n           Standard: %d\n           Section: %c\n\n\n", name, standard, section);
	printf("           Marks Secured out of 100\n           Mathematics: %.1lf\n           English: %.1lf\n           Hindi: %.1lf\n           Science: %.1lf\n           Social Science: %.1lf\n\n\n", maths, eng, hindi, sci, sst);
	printf("          Total marks secured: %.1lf\n\n          Grade: %c\n\n------------------------------------------------------------", totalMarks, grade);
	//GENERATING MESSAGE=================================================================================================================================================================

	return EXIT_SUCCESS;
}
