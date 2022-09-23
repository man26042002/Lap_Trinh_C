#include<stdio.h>
#include<stdlib.h>

double cube(double num){
	return num*num*num;
}

int main(){
	// Return Statement
	printf("Answer : %f", cube(3.0));
	return 0;
}
