#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,a[50],n;
	clrscr();

	printf("Enter the size of array=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	printf("the negative elements are:");
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("\na[%d]=%d",i,a[i]);
		}
	}

	getch();
}