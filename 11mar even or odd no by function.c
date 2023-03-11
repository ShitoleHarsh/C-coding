#include<stdio.h>
#include<conio.h>
 int checkEO(int a);
 int checkEO(int a)
 {
	if(a%2==0)
		return 1;
	else
		return 2;
 
 }


void main()
{
	int x,res;
	printf("enter the value");
	scanf("%d",&x);
	res=checkEO(x);
		if(res==1)
			printf("the number is even");
		else
			printf("the no is odd");
	getch();
}