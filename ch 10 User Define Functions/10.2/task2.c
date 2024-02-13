#include<stdio.h>
int len(char string[])
{
	int len=0;
	while(string[len]!='\0')
	{
		len++;
	}
	return len;
}
int main()
{
	char v[30];
	
	printf("Enter any string=");
    scanf("%s",&v);
    
    int length=len(v);
    printf("Length of string=%d",length);
    return 0;
    
}
