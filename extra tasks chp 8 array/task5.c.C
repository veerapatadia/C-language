#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,max=0,smax=0,a[10];
	clrscr();

	printf("Enter the size of array=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter the elements of array a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			smax=max;
			max=a[i];
		}
		else if(a[i]>smax && a[i]<max)
		{
			smax=a[i];
		}
	}
	printf("the second largest number is=%d\n",smax);

	getch();
}