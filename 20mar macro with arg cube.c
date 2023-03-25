#include<stdio.h>
#include<conio.h>
#define cube(n) printf("cube of number is %d",(n*n*n))
void main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	cube(n);
	getch();


}