#include<stdio.h>
#include<conio.h>
void add();// declaration of function
void add()  //definaion of function
{
	int a,b,res;
	printf("enter the two nos");
	scanf("%d%d",&a,&b);
	res=a+b;
	printf("res is %d ",res);
}
	void main()
	{
		printf("msg 1\n");
		printf("msg 2\n");
		add();// 1st fun call

		printf("msg3\n");
		printf("msg4\n");
		add();// 2nd fun call
		getch();
	}
	
	
	
	
	
	