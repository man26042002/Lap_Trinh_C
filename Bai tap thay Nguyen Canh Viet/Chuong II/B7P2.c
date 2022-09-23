#include<stdio.h>
int main(){
	int n1, n2, n;
	
	printf("\nNhap gioi han dau n1 :  ");	scanf("%d",&n1);
	printf("\nNhap gioi han cuoi n2 :  ");	scanf("%d",&n2);
	
	printf("\n----------------------\n");
	printf("\nCac so nguyen to trong [n1; n2] la :\n\n");
	for(n = n1; n <= n2; n++){
		int check = 1;
		for(int i = 2; i < n; i++){
			if(n % i == 0){
				check++;
			}
		}
		if(check == 1 && n >= n1){
			printf("%d\t",n);
		}
	}
	return 0;
}
