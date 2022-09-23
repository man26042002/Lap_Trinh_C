#include<stdio.h>
#include<stdlib.h>

struct Student{
	char name[50];
	char major[50];
	int age;
	double gpa;
};

int main(){
	// Struct
	struct Student student1;
	struct Student student2;
	struct Student student3;
	// student1
	student1.age = 20;
	student1.gpa = 3.4;
	strcpy(student1.name, "Son");
	strcpy(student1.major, "Physic");
	// student2
	student2.age = 22;
	student2.gpa = 2.4;
	strcpy(student2.name, "Duong");
	strcpy(student2.major, "KHDL");
	// student3
	student3.age = 31;
	student3.gpa = 2.75;
	strcpy(student3.name, "Phong");
	strcpy(student3.major, "Math");
	// In ra
	
	printf("\n-----------------------\n");
	printf("Student 1 :\n");
	printf("Name : %s\n", student1.name);
	printf("Age : %d\n", student1.age);
	printf("Major : %s\n", student1.major);
	printf("GPA : %f\n", student1.gpa);
	
	printf("\n-----------------------\n");
	printf("Student 2 :\n");
	printf("Name : %s\n", student2.name);
	printf("Age : %d\n", student2.age);
	printf("Major : %s\n", student2.major);
	printf("GPA : %f\n", student2.gpa);
	
	printf("\n-----------------------\n");
	printf("Student 3 :\n");
	printf("Name : %s\n", student3.name);
	printf("Age : %d\n", student3.age);
	printf("Major : %s\n", student3.major);
	printf("GPA : %f\n", student3.gpa);
	
	return 0;
}
