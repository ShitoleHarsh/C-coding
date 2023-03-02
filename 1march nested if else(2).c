#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	int w,x,y,z;
	printf("enter the 4 values of angles");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("enter the 4 values of sides");
	scanf("%d%d%d%d",&w,&x,&y,&z);

	if(a==90 && b==90 && c==90 && d==90)
		{
			if(w==x && x==y && y==z && z==w)
			   {
				   printf("square is formed");
			   }
			else
	    
				printf("square is not formed");
        }
			else
				printf("square is not formed");
	    getch();


}