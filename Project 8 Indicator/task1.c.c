#include<stdio.h>
main()
{
	int i,v=0;
	char string[30],*ptr;
	
	printf("Enter the string=");
	gets(string);
	
	ptr=&string[0];
	
	while(*ptr!='\0')
	{
		v++;
		ptr++;
	}
	printf("Length of string=%d",v);
}
