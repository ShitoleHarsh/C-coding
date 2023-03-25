#include<stdio.h>
#include<conio.h>
#define sum1(a,b) (a+b)
#define sum(a,b,c) printf("the addition of three number is %d ",(sum1(a,b)+c)); 

void main()
{
	int a,b,c,ans;
	printf("enter the a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	ans=sum(a,b,c);
	getch();


}