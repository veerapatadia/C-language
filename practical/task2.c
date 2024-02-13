#include<stdio.h>
main()
{
	int cube,a[10][10],n,m,i,j;
	
	printf("Enter the row=");
	scanf("%d",&n);
	printf("Enter the column=");
	scanf("%d",&m);
	
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter the elements=");
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cube=a[i][j]*a[i][j]*a[i][j];
			printf("cube is=%d\n",cube);			
		}
	}
	
}
