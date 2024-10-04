#include<stdio.h>
#include<conio.h>

main()
{
	int hra=10;
	int da=5;
	int ta=8;
	int salary;
	clrscr();

	printf("enter the value of salary:");
	scanf("%d",&salary);


	salary=salary + (salary*hra/100) + (salary*hra/100) + (salary*da/100) + (salary*ta/100);
	printf("%d,salary");

	getch();








}