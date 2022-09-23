#include<stdio.h>
#include<stdlib.h>
int main(){
	
	/*int age;
	printf("Enter your age : ");
	scanf("%d",&age);
	printf("\nYou are %d years old !!!", age);*/
	char name[20];
	printf("Enter your name : ");
	//scanf("%s", name); Chi in ra den dau cach dau tien
	fgets(name, 20, stdin);
	printf("Your name is %s xnxx", name);
	
	return 0;
}
