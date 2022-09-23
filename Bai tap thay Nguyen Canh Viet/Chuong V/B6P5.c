#include<stdio.h>
int main(){
	int a[3][4] = { {1,3,5,7}, {2,4,6,8}, {9,8,7,6} };
	printf("\nDia chi cua cac phan tu tren la :\n\n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 4; j++){
			printf("%d\t",&a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
