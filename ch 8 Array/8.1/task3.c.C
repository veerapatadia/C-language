#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,a[100],b[100],c[100];
	clrscr();

	printf("Enter the array element=");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("Enter array elements v[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("\n");

	for(i=1;i<=n;i++)
	{
		printf("Enter array elements v[%d]=",i);
		scanf("%d",&b[i]);
	}
	printf("\n");

	for(i=1;i<=n;i++)
	{
		c[i]=a[i]+b[i];
	}

	for(i=1;i<=n;i++)
	{
		printf("c is=%d\n",c[i]);
	}
	printf("\n");

	getch();
}
