#include<stdio.h>
#include<stdlib.h>

int max_2_number(int num1, int num2){
	int result;
	if(num1 > num2){
		result = num1;
	}else{
		result = num2;
	}
	return result;
}

int max_3_number(int num1, int num2, int num3){
	int result;
	
	if(num1 >= num2 && num1 >= num3){
		result = num1;
	}else if(num2 >= num1 && num2 >= num3){
		result = num2;
	}else{
		result = num3;
	}
	return result;
}

int main(){
	// If Statement
	
	if(3 > 2 || 2 > 5){
		printf("True");
	}
	printf("\n---------------------\n");
	printf("Max (70,50) is %d\n", max_2_number(70, 50));
	printf("Max (100,160,30) is %d", max_3_number(100,160,30));
	return 0;
}
