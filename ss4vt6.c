#include<stdio.h>
int main(){
	int a,b,c;
	printf("nhap vao 3 so: ",a,b,c);
	int max = ( a > b && a > c )?a: (( b > c )?b:c);
	printf("max:%d",max);
	int min = ( a < b && a < c )?a: (( b < c )?b:c);
	printf("\nmin:%d",min); 
