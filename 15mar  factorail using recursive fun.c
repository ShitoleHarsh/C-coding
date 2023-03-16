#include<stdio.h>
#include<conio.h>
	int factorial(int n);
	int factorial (int n)
	{
		int i,fact=1;
		for(i=1;i<=n;i++)
		{
			fact=fact*i;
		}
		return fact;
	
	}

void main()
{
	int n,ans;
	printf("enter any no.");
	scanf("%d",&n);
	ans=factorial(n);
	printf("factorial is %d",ans);
	getch();

}