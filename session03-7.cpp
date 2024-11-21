#include<stdio.h>
int main(){
	// khai bao bien
	int number;
	int sum;
	int num1, num2, num3, num4;
	// nhap du lieu tu ban phim
	printf("moi nhap so nguyen co 4 chu so ");
	scanf("%d", &number);
	//tac cac so
	num1 = number/1000;
	num2 = number/100%10;
	num3 = number/10%10;
	num4 = number%10;
	// tinh tong
	sum = num1+num2+num3+num4;
	//in tong cac chu so
	printf("tong cac so co trong so da nhap la: %d",sum);	 
	return 0;
}
