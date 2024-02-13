#include<stdio.h>
main()
{
	FILE *ptr;
	int i;
	
	ptr=fopen("leap.txt","w");
	
	if(ptr==NULL)
	{
		printf("file is created and opened successfully");
	}
	else
	{
		printf("file is not created and opened successfully");
	}
	
	for(i=2000;i<=2024;i++)
	{
		if(i%4==0)
		{
		fprintf(ptr,"%d\n",i);
		}	
	}
	
	
	
	
	
}
