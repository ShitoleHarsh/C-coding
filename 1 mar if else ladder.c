#include<stdio.h>
#include<conio.h>
void main()
{
	float marks;
	float per;
		printf("enter the marks");
		scanf("%f",&marks);
		per=((marks/500)*100);
		printf("percent is %f \n",per);
		if(per>=75.00)
			printf("grade is A");
		else if(per>=60.00)
			printf("grade is B ");
		else if(per>=40.00)
			printf("grade is c");
		else
			printf("grade is F");
		getch();
}	











