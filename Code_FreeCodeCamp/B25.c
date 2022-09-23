#include<stdio.h>
#include<stdlib.h>
int main(){
	// Reading Files
	char line[255];
	FILE * fpointer = fopen("employees.txt", "r");
	
	fgets(line, 255, fpointer);
	printf("%s", line);
	
	
	fclose(fpointer);
	return 0;
}
