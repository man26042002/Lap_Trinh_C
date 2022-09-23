#include<stdio.h>
int main(){
	char s[50];	int dem = 0;
	printf("\nNhap chuoi : ");
	gets(s);
	// dem chuoi	
	while(s[dem] != '\0'){
		dem++;
	} 
	printf("\nChuoi vua nhap co do dai la : %d",dem);
	printf("\n-----------------------\n");
	// Dem so ki tu trung
	char c;
	printf("\nNhap vao mot ky tu :  ");	scanf("%c",&c);	
	int dem2 = 0, dem3 = 0;
	while(s[dem2] != '\0'){
		if(s[dem2] == c){
			dem3++;
		}
		dem2++;
	}
	printf("\nSo ki tu giong ki tu vua nhap la :  %d",dem3);
	return 0;
}
