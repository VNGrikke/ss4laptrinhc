#include<stdio.h>
int main(){
	float a,b;
	printf("nhap vao so dien dau thang va cuoi thang:",a,b);
	scanf("%f %f",&a,&b);
	float soDien = b-a;
	if(soDien<50&&soDien>=0){
		float tienDien = soDien*10000;
		printf("tien dien thang nay: %.3f VND",tienDien);
	}else if(soDien<100){
		float tienDien = soDien*15000;
		printf("tien dien thang nay: %.3f VND",tienDien);
	}else if(soDien<150){
		float tienDien = soDien*20000;
		printf("tien dien thang nay: %.3f VND",tienDien);
	}else if(soDien<200){
		float tienDien = soDien*25000;
		printf("tien dien thang nay: %.3f VND",tienDien);
	}else if(soDien>300){
		float tienDien = soDien*30000;
		printf("tien dien thang nay: %.3f VND",tienDien);
	} 
}
