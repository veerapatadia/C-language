#include<stdio.h>
main()
{
	char a[30];
	int i,j,len=0;
	
	printf("Enter the sring=");
	scanf("%s",a);
	
	for(i=0;a[i]!='\0';i++)
	len++;
	
	i=0;
	j=len-1;
	while(i<j)
	{
		if (a[i]!=a[j])	
			break;
			
			i++;
			j--;
	}
	
	if(i>=j)
	{
		printf("String is palindrome...");
	}
	else
	{
		printf("String is not palindrome...");
	}
}
