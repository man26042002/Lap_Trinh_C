#include<stdio.h>
#include<stdlib.h>
int main(){
	// Switch Statement
	char grade;
	printf("Enter a grade : "); scanf(" %c", &grade);
	
	switch(grade){
		case 'A': printf("You are great !!!"); break;
		case 'B': printf("You are normal !!!"); break;
		case 'C': printf("Dumb !!!"); break;
		case 'F': printf("Very dumb !!!"); break;
		default : printf("Invalid Grade !!!"); break;
	}
	
	
	return 0;
}
