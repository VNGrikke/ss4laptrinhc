#include<stdio.h>
int main(){
	int month,year;
	printf("nhap thang va nam",month,year);
	scanf{"%d %d",&month,&year};
	
	switch (month){
		case 1: case 3: case 5: case 7: case 8: case 10:case 12: 
			printf("co 31 ngay");
			break;
			
		case 2:
			if((year%4==0)&&(year%100!=0)){
				printf("co 29 ngay");
			}else{
				printf(" co 28 ngay");
			} 
			break;
		case 4: case 6: case 9: case 11: 
			printf("co 31 ngay");
			break;
		default:
      printf("thang khong phu hop!!!");	
	}
}
