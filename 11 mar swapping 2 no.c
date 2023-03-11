#include<stdio.h>
#include<conio.h>
void main()
{
	int x=100,y=200,temp;
	printf("before swapping x=%d and y=%d",x,y);
	temp=x;
	x=y;
	y=temp;
	printf("/n after swapping x=%d and y=%d",x,y);
	getch();
}