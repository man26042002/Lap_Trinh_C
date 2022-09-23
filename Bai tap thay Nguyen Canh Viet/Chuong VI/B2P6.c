#include<stdio.h>
#include<string.h>
int main(){
	char s1[30], s2[15];
	printf("\nNhap chuoi thu nhat :  ");	gets(s1);
	printf("\nNhap chuoi thu hai :  ");	gets(s2);
	int n1 = strlen(s1), n2 = strlen(s2);
	int j = 0, i;
	for(i = n1; i < n1+n2; i++){
		s1[i] = s2[j];
		j++;
	}
	s1[i] = '\0';
	printf("\nChuoi sau khi noi la :  %s",s1);
	printf("\n---------------------\n");
	strupr(s1);
	printf("\nChuoi sau khi viet hoa la :  %s",s1);
	return 0;
}
