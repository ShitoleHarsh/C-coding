#include<stdio.h>
#include<conio.h>
void SI();//function declaration
void SI()// function define
{
float p,n,r,si;
printf("enter the p,n,r");
scanf("%f%f%f",&p,&n,&r);
si=(p*n*r)/100;
printf("simple intrest is %f",si);
}
	void main()
	{
	SI();
	SI();
	SI();
	getch();
	}