#include<stdio.h>
#include<string.h>
int main(){
	char s[30];
	printf("\nMoi ban nhap vao mot chuoi :  ");
	gets(s);
	// Dem so dau cach trong cau
	int n = strlen(s), dem = 0;
	for(int i = 0; i < n; i++){
		if(s[i] == ' '){
			dem++;
		}
	}
	printf("\nSo dau cach trong chuoi la :  %d",dem);
	printf("\n-------------------------\n");
	// Loai bo neu co 2 dau cach lien tiep
	for(int i = 0; i < n-1; i++){
		if(s[i] == ' ' && s[i+1] == ' '){
			strcpy(&s[i], &s[i+1]);
			i--;
		}
		
	}
	printf("\nChuoi sau khi loai bo 2 dau cach lien tiep la : %s",s);
	
	return 0;
}
