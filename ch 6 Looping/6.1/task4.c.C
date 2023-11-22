#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	clrscr();

	printf("enter the first number=");
	scanf("%d",&a);
	printf("enter the second number=");
	scanf("%d",&b);

	while(a<=b)
	{
		if(a%4==0)
		printf("%d ",a);
		a++;
	}
	getch();
	return 0;
}
