#include<stdio.h>
#include<conio.h>
void main()
{
	int a=5,b=2;
	float res;
	res =a/b;
	printf("implicit type cast res=%f",res);
	res =(float)a/b;
	printf("explicit type cast res=%f",res);
	
	
	
	getch();
	



}