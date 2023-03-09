#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int i=1,n;
	do
	{
		printf("\n enter a number");
		scanf("%d",&n);
		if(n==2)
		{
			exit(0);
		}
		i++;
	 } while(i<=10);// limit for no. of cycles
	getch();
}

