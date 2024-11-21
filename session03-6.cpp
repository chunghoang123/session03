#include<stdio.h>
int main(){
	// khai bao bien
	int canhDay, cao;
	float dienTich;
	// nhap gia tri tu ban phim
	
	printf("moi nhap chieu dai canh day ");
	scanf("%d", &canhDay);
	printf("moi nhap chieu cao ");
	scanf("%d", &cao);
	// tinh dien tich tam giac
	dienTich = 0.5 * canhDay * cao;
	printf("dien tich tam giac la: %.2f", dienTich);
	
	return 0;
}
