#include<stdio.h>
#include<conio.h>
void main()
{
	int x=100,y=200;
	printf("before swapping x=%d and y=%d",x,y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("\n after swapping x=%d and y=%d",x,y);
	getch();
}