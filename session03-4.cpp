#include<stdio.h>
int main(){
	// khai bao bien
	float toan, van, anh, tong, trungBinh;
	// nhap gia tri tu ban phim
	printf("moi nhap diem toan: ");
	scanf("%f", &toan);
	printf("moi nhap diem van: ");
	scanf("%f", &van);
	printf("moi nhap diem anh: ");
	scanf("%f", &anh);
	// tinh tong
	tong = toan + van + anh;
	printf("tong diem la: %.2f\n", tong);
	// tinh gia tri trung binh
	trungBinh = tong/3;
	printf("gia tri trung binh la: %.2f", trungBinh);
	
	return 0;
}
