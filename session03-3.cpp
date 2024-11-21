#include<stdio.h>
int main(){
	// khai bao bien
	int banKinh;
	float pi = 3.14, chuVi, dienTich;
	// nhap gia tri tu ban phim
	printf("moi ban nhap ban kinh ");
	scanf("%d", &banKinh);
	// tinh chu vi
	chuVi = 2 * pi * banKinh;
	printf("chu vi hinh tron la: %.2f\n", chuVi);	
	// tinh dien tich
	dienTich = pi * banKinh * banKinh;
	printf("dien tich hinh tron la: %.2f",dienTich);
	
	
	
	
	return 0;
}
