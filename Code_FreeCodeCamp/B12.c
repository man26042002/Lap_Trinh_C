#include<stdio.h>
#include<stdlib.h>

void sayHi(char name[]){
	printf("Hello %s\n", name);
}

int main(){
	// Function
	
	sayHi("Son");
	sayHi("Lam");
	sayHi("John");
	return 0;
}
