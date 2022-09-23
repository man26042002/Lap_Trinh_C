#include<stdio.h>
int main(){
	int month, year, check = 1;
	printf("Nhap thang : ");	scanf("%d",&month);
	printf("\nNhap nam : ");	scanf("%d",&year);
	if((year % 400 == 0)||(year % 4 == 0 && year % 100 != 0)){
		check++;
	}
	switch(month){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("\nThang co 31 ngay !!!");
		case 4: case 6: case 9: case 11:
			printf("\nThang co 30 ngay !!!");
		case 2:
		if(check == 1){
			printf("\nThang co 28 nagy !!!");
		}else{
			printf("\nThang co 29 ngay !!!");
		}
	}
	return 0;
}
