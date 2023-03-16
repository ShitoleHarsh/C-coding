#include<stdio.h>
#include<conio.h>
	void sqrcub(int n1,int n2,int*s,int*c);
	void sqrcub(int n1,int n2,int*s,int*c)
	{
		int square,cube;
		square=n1*n1;
		cube=n2*n2*n2;
		*s=square;// for dereferncing value
		*c=cube;
	
	}

void main()
{
	int n1,n2,sq,cu;
	printf("enter the values");
	scanf("%d%d",&n1,&n2);
	sqrcub(n1,n2,&sq,&cu);
	printf("square is %d",sq);
	printf("\n cube is %d",cu);
	getch();
}

