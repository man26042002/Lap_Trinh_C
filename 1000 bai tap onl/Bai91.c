#include<stdio.h>
int main(){
	printf("\nCac so nguyen duong le < 100 la :\n");
	for(int i = 1; i <= 100; i++){
		if(i % 2 == 1){
			printf("%d\t",i);
		}
	}
	return 0;
}
