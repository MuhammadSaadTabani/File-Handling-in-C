#include <stdio.h>
#include <stdlib.h>

void main(void) {
	struct employee {
		int id;
		char name[10];
		char position[10];
		int salary;
		int dd, mm, yy;
		char address[25];
	}emp[1];
	FILE *fptr= fopen("file.txt", "w");
	fprintf(fptr,"%s","ID\tName\tPosition\tSalary\tDOJ\tAddress");
	fclose(fptr);
	FILE *fptr2,*fptr3;
	printf("\nEnter id of Employee 1: ");
	scanf("%d", &emp[0].id);
	printf("\nEnter name of Employee 1: ");
	scanf("%s", &emp[0].name);
	printf("\nEnter position of Employee 1:");
	scanf("%s", &emp[0].position);
	printf("\nEnter salary of Employee 1: ");
	scanf("%d", &emp[0].salary);
	printf("\nEnter Date of join (dd-mm-yyyy) of Employee 1: ");
	scanf("%d%d%d", &emp[0].dd, &emp[0].mm, &emp[0].yy);
	printf("\nEnter address of Employee 1: ");
	scanf("%s", &emp[0].address);
	fptr2 = fopen("C:\\Users\\DELL\\Desktop\\Uni Lectures\\Programming fundamentals\\file handling ass\\employee.txt", "a+");
	fprintf(fptr2,"\n%d\t%s\t%s\t%d\t%d-%d-%d\t%s",emp[0].id,emp[0].name,emp[0].position,emp[0].salary,
		emp[0].dd,emp[0].mm,emp[0].yy,emp[0].address);
	fclose(fptr2);
	// Emp2
	printf("\nEnter id of Employee 2: ");
	scanf("%d", &emp[1].id);
	printf("\nEnter name of Employee 2: ");
	scanf("%s", &emp[1].name);
	printf("\nEnter position of Employee 2:");
	scanf("%s", &emp[1].position);
	printf("\nEnter salary of Employee 2: ");
	scanf("%d", &emp[1].salary);
	printf("\nEnter Date of join (dd-mm-yyyy) of Employee 2: ");
	scanf("%d%d%d", &emp[1].dd, &emp[1].mm, &emp[1].yy);
	printf("\nEnter address of Employee 2: ");
	scanf("%s", &emp[1].address);
	fptr3 = fopen("C:\\Users\\DELL\\Desktop\\Uni Lectures\\Programming fundamentals\\file handling ass\\employee.txt", "a+");
	fprintf(fptr3,"\n%d\t%s\t%s\t%d\t%d-%d-%d\t%s",emp[1].id,emp[1].name,emp[1].position,emp[1].salary,
		emp[1].dd,emp[1].mm,emp[1].yy,emp[1].address);
	fclose(fptr3);
}