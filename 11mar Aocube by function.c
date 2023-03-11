#include<stdio.h>
#include<conio.h>

int Aocube(int l);
int Aocube(int l)
{
	return(l*l*l);
}
void main()
{
	int l;
	int ans;
	printf("enter the value of l");
	scanf("%d",&l);
	ans= Aocube(l);
	printf("area of cube is %d",ans);
	getch();
}