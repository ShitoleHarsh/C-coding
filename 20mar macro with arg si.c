#include<stdio.h>
#include<conio.h>
#define SI(p,n,r) printf("simple intrest is %f ",(float)(p*n*r)/100);
void main()
{
	int p,n,r;
	printf("enter the p,n,r");
	scanf("%d%d%d",&p,&n,&r);
	SI(p,n,r);
	getch();

}