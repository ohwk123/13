#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
		int ID;
		char name[20];
		double grade;
	};

void main(void) {
	struct student s1;
	s1.ID = 123456;
	strcpy(s1.name, "Juyeop");
	s1.grade = 4.20000;
	
	printf("ID: %i\n", s1.ID);
	printf("name : %s\n", s1.name);
	printf("grade : %f\n", s1.grade);
	
	

}
