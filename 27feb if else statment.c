

#include<stdio.h>
#include<conio.h>
void main()
{
   int x,y,z;
   printf("enter value of traingle");
   scanf("%d%d%d" ,&x,&y,&z);
   if((x+y+z)==180)
	   printf("trangle is formed");
   else
	   printf("traingle is not formed");
   getch();
}	   