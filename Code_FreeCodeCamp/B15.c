#include<stdio.h>
#include<stdlib.h>
int main(){
	// Building a better calculator
	double num1, num2;
	char op;
	// Nhap va xuat gia tri ket qua
	printf("Enter a number : "); scanf("%lf", &num1);
	printf("Enter an operator : "); scanf(" %c", &op);
	printf("Enter a number : "); scanf("%lf", &num2);
	// In ngan cach dong
	printf("\n--------------------------\n");
	// xu li dieu kien : cac phep +,-,*,/
	if(op == '+'){
		printf("Result is : %f", num1+num2);
	}else if(op == '-'){
		printf("Result is : %f", num1-num2);
	}else if (op == '/' && num2 != 0){
		printf("Result is : %f", num1/num2);
	}else{
		printf("Invalid Operator or something wrong !!!");
	}
	
	return 0;
}
