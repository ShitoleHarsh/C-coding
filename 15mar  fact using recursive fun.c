#include<stdio.h>
#include<conio.h>
	int factorial(int n);
	int factorial(int n)
	{
		int fact=1;
		if(n==1 || n==0)
			return 1;
		else
			fact=n*factorial(n-1);
			return fact;
	
	}
void main()
{
	int n,ans;
	printf("enter the any values");
	scanf("%d",&n);
	ans=factorial(n);
	printf("factorial is %d",ans);
	getch();

}