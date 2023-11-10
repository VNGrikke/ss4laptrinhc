#include<stdio.h>
int main(){
	int a,b,c;
	printf("nhap vao 3 canh cua tam giac:",a,b,c);
	scanf("%d %d %d",&a,&b,&c);
	if(a==b&&b==c&&a==c){
		printf("day la tam giac deu");
	}else if((a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a)&&(a==b||b==c||a==c)){
		printf("day la tam giac vuong can");
	}else if(a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a){
		printf("day la tam giac vuong");
	}else if(a==b||b==c||a==c){
		printf("day la tam giac can");
	}else if(a+b>c&&a+c>b&&b+c>a){
		printf("day la tam giac thuong");
	}
}
