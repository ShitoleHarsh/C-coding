#include<stdio.h>
#include<conio.h>
void main()
{
   int x,y,z;
   printf("enter value of issoscales traingle");
   scanf("%d%d%d" ,&x,&y,&z);
   if(x==y||y==z||z==x)
	   printf("issoscals trangle is formed");
   else
	   printf("issoscales traingle is not formed");
   getch();
}	   