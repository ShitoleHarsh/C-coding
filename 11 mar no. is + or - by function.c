#include<stdio.h>
#include<conio.h>

	int check(int a);
	int check(int a)
{
	if(a>0)
		return 1;
	else
		return 0;
}
void main()
{
	int x,res;
	printf("enter the value");
	scanf("%d",&x);
	res= check(x);
	if(res==1)
		printf("the no is positive");
	else
		printf("the no is negative");
	getch();
}