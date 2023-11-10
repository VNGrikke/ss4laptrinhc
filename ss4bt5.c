#include<stdio.h>
int main(){
	int day,month,year;
	printf("nhap ngay thang va nam",day,month,year);
	scanf("%d %d %d",&day,&month,&year);
	
		switch(month){
		case 1: case 3: case 5: case 7: case 8: case 10:case 12: 
			if((0<day&&day<32)&&(year>0)){
				printf("ngay %d thang %d nam %d ",day,month,year);
			}else{
				printf("thoi gian ko hop le!!!");
			}
		break;
			
		case 2:
			if((0<day&&day<30)&&((year>0)&&(year%4==0)&&(year%100!=0))){
				printf("ngay %d thang %d nam %d ",day,month,year);
			}else if((0<day&&day<28)&&(year>0)){
				printf("ngay %d thang %d nam %d ",day,month,year);
			}else{
				printf("thoi gian ko hop le!!!");
			}
		break;
		
		case 4: case 6: case 9: case 11: 
			if((0<day&&day<31)&&(year>0)){
				printf("ngay %d thang %d nam %d ",day,month,year);
			}else{
				printf("thoi gian ko hop le!!!");
			}		
		break;
		default:
      printf("time khong phu hop!!!");	
	}
}
	
