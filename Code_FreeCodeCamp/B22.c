#include<stdio.h>
#include<stdlib.h>
int main(){
	// Memory Adresses
	int age = 30;
	double gpa = 3.4;
	char grade = 'A';
	// print out memory adresses
	printf("age : %p\ngpa : %p\ngrade : %p", &age, &gpa, &grade);
	return 0;
}
