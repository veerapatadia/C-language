#include<stdio.h>
main()
{
	int i,v[10],*ptr[10],n;
	
	printf("Enter size of array=");
	scanf("%d",&n);
	
	printf("enter arrays element=\n");
	for(i=0;i<n;i++)
	{
		printf("v[%d]=",i);
		scanf("%d",&v[i]);
		
		ptr[i]=&v[i];
	}
	for(i=0;i<n;i++)
	{
		if(v[i]%2!=0)
		{
			printf("odd=%d\n",*ptr[i]);
		}
	}
	
}
