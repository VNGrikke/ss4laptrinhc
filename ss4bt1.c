#include<stdio.h>
int main(){
	int number;
	printf("nhap so:",number);
	scanf("%d",&number);
	if(number%3==0 && number%5==0){
		printf("%d chia het cho 3 va 5",number);
	}else{
		printf("%d ko chia het cho 3 va 5",number);
	}
}
