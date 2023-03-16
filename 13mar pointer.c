#include<stdio.h>
#include<conio.h>
void main()
{
	int x=10;
	int *p;
	p=&x;
	printf("value of x is %d",x);
	printf("address of x is %d",&x);
	printf("\n value of pointer p is %d",p);
	printf("\n address of pointer is %d ",&p);
	printf("\n value of x by using ptr %d",*p);
	getch();




}