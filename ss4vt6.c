#include<stdio.h>
int main(){
	int a,b,c,soconlai;
	printf("nhap vao 3 so: ");
	scanf("%d %d %d",&a,&b,&c);
	int max = ( a > b && a > c )?a: (( b > c )?b:c);
	int min = ( a < b && a < c )?a: (( b < c )?b:c);
	if((max>a) && (min<a)){
		int soconlai = a;
	}else if((max>b) && (min<b)){
		int soconlai = b;
	}else if((max>c) && (min<c)){
		int soconlai = c;
	} 
	printf("sap xep giam dan: %d %d %d",max,soconlai,min);
}
