#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	n='a';
	clrscr();

	do
	{
		printf("%c ",n);
		n=n+4;
	}while(n<='z');

	getch();
}