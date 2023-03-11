#include<stdio.h>
#include<conio.h>
float Aocir(int r);
float Aocir(int r)
{
	return(3.14*r*r);
}
void main()
{
	int r;
	float ans;
	printf("enter the radius");
	scanf("%d",&r);
	ans=Aocir(r);//actual parameter
	printf("area of circle is %f",ans);
	getch();
}