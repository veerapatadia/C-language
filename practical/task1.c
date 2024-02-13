#include<stdio.h>
odd(int v, int p);
main()
{
	int v,p,i;
	
	printf("Enter the number=");
	scanf("%d",&v);
	printf("Enter the number=");
	scanf("%d",&p);
	
	odd(v,p);
	
}
 int odd(int v, int p)
{
	int i;
	
	for(i=v;i<=p;i++)
	{
		if(i%2!=0)
		{
			printf("%d\n",i);	
		}	
	}	
}
