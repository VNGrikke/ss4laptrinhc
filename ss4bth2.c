#include<stdio.h>
float main(){
	float html,css,javascript;
	printf("nhap diem 3 mon: ",html,css,javascript);
	scanf("%f %f %f",&html,&css,&javascript);
	float avgMark = (html + css + javascript)/3;
	printf("trung binh mon: %f \n",avgMark);
	if(avgMark>0 &&avgMark<5){
		printf("yeu");
	}else if(avgMark<7){
		printf("trung binh");
	}else if(avgMark<8){
		printf("kha");
	}else if(avgMark<9){
		printf("gioi");
	}else if(avgMark<10){
		printf("xuat xac");
	}
}
