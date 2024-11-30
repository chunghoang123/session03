#include<stdio.h>
int main(){
	int num,a,b,c,d,sum;
	int dao;
	printf("moi nhap so nguyen co 4 chu so: ");
	scanf("%d",&num);
	
	a=num/1000;
	b=num/100%10;
	c=num/10%10;
	d=num%10;
	dao = d*1000+c*100+b*10+a;
	printf("so nghich dao cua so da nhap: %d",dao);
	
	return 0;
} 
