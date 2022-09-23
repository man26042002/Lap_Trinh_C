#include<stdio.h>
#include<stdlib.h>
int main(){
	// For Loops
	/*int i = 1;
	while(i <= 5){
		printf("%d\n", i);
		i++;
	}
	
	printf("\n--------------------------\n");
	
	int i1;
	for(i1 = 1; i1 <= 5; i1++){
		printf("%d\n", i1);
	}*/
	
	int LuckyNumber[] = {4, 8, 15, 16, 23, 42};
	
	int i;
	for(i = 0; i < 6; i++){
		printf("%d ", LuckyNumber[i]);
	}
	
	return 0;
}
