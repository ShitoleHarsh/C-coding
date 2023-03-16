#include<stdio.h>
#include<conio.h>

	void swap(int *p1,int*p2);//only for pointer declaration
	void swap(int *p1,int*p2)
	{
		int temp;
		temp=*p1;// used for dereferncing
		*p1=*p2;
		*p2=temp;
	}
void main()
{
	int x=100,y=200;
	printf("values before swapping x=%d and y=%d",x,y);
	swap(&x,&y);
	printf(" \n values after swapping x=%d and y=%d",x,y);
	getch();

}