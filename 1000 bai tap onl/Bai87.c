#include<stdio.h>
int main(){
	int i = 0, s = 0;
	while(s < 10000){
		s += ++i;
	}
	printf("\nn lon nhat thoa man 1 + 2 + ... + n < 10000 :  %d",i);
	return 0;
}
