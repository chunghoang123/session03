#include<stdio.h> 
int main(){
	// khai bao bien
	int celsius;
	float fahrenheit;
	// nhap du lieu tu ban phim
	printf("moi nhap do C: ");
	scanf("%d", &celsius);
	// chuyen do C sang do F
	fahrenheit = (float)celsius * 9/5 +32;
	printf(" chuyen do C sang do F bang: %.2f", fahrenheit);
	// ket thuc
	
	
	
	return 0;
	
}
