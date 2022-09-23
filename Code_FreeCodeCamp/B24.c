#include<stdio.h>
#include<stdlib.h>
int main(){
	// Writing Files
	FILE * fpointer = fopen("employees.txt", "w");
	fprintf(fpointer, "Jim, Saleman\nPam, Manager");
	fclose(fpointer);
	return 0;
}
