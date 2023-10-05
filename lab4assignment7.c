#include <stdio.h>
#include <string.h>

struct Student{
char name[10];
char grade[3];

};


int main(int argc, char *argv[]){

struct Student students[10];
strcpy(students[0].name, "AHS");
strcpy(students[1].name, "FEA");
strcpy(students[2].name, "SAK");
strcpy(students[3].name, "DRZ");
strcpy(students[4].name, "GHF");
strcpy(students[5].name, "FAR");
strcpy(students[6].name, "SHH");
strcpy(students[7].name, "ATA");
strcpy(students[8].name, "FRG");
strcpy(students[9].name, "ZHF");

strcpy(students[0].grade, "C+");
strcpy(students[1].grade, "B+");
strcpy(students[2].grade,"D ");
strcpy(students[3].grade,"B ");
strcpy(students[4].grade,"B ");
strcpy(students[5].grade,"B ");
strcpy(students[6].grade,"C ");
strcpy(students[7].grade,"D+");
strcpy(students[8].grade,"B ");
strcpy(students[9].grade,"A ");
printf("| Student Name | Grade |");
for(int i=0; i<10; i++){
	printf("\n| %s          |  %s   | ",students[i].name,students[i].grade);
	
}
printf("\n");
}

