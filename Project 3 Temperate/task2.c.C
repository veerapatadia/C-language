#include<stdio.h>
#include<conio.h>

main()
{
	int n,number=0;
	clrscr();

	printf("enter the number=");
	scanf("%d",&n);

	while(n>0)
	{
		n=n/10;
		number++;
	}
	printf("the number of digits are=%d",number);

	getch();
}
