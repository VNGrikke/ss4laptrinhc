#include<stdio.h>
int main(){
	int a,b,c,soconlai;
	printf("nhap vao 3 so: ");
	scanf("%d %d %d",&a,&b,&c);
	int max = ( a > b && a > c )?a: (( b > c )?b:c);
	int min = ( a < b && a < c )?a: (( b < c )?b:c);
	soconlai = (a+b+c) - (max+min); 
	printf("sap xep giam dan: %d %d %d",max,soconlai,min);
}
