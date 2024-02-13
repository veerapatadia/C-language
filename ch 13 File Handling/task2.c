#include<stdio.h>
main()
{
	FILE *ptr;
	int i;
	
	ptr=fopen("demo.txt","w");
	
	if(ptr==NULL)
	{
		printf("file can't be created & opened");
	}
	else
	{
		printf("file is created & opened successfully");
	}
	
	for(i=0;i<50;i++)
	{
		if(i%3==0 && i%5==0)
		{
			fprintf(ptr,"%d\n",i);
		}
	}
}
