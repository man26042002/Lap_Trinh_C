#include<stdio.h>
#include<stdlib.h>
int main(){
	//Pointer
	int age = 30;
	int *pAge = &age;
	double gpa = 3.4;
	double *pGpa = &gpa;
	char grade = 'A';
	char *pGrade = &grade;
	
	
	printf("age's memory adress : %p\n", &age);
	printf("%p", pAge);
	return 0;
}
