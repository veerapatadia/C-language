#include<stdio.h>
#include<conio.h>
main()
{
	int a[10],n,i,j,temp;
	clrscr();

	printf("Enter the size of array=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter the array elements a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		 }
	}
	printf("ascending order is=");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	getch();
}
