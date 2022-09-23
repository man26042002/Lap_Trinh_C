#include<stdio.h>
int main(){
	int a, b;
	printf("\nNhap a :  ");	scanf("%d",&a);
	printf("\nNhap b :  ");	scanf("%d",&b);
	printf("\n------------------\n");
	int  min = (a < b) ? a : b;
	printf("\nUoc chung lon nhat la :\n");
	for(int i = min; i >= 1; i--){
		if((a % i == 0) && (b % i == 0)){
			printf("%d",i);	break;
		}
	} 
	return 0;
}
