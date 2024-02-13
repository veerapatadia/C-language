#include<stdio.h>
#include<conio.h>
main()
{
	int n,a[10],i,j;
	clrscr();

	printf("Enter the array size=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter array element a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("the squares are=%d\n",a[i]*a[i]);
	}

	getch();
}