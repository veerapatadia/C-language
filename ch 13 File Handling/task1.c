#include<stdio.h>
main()
{
	char ch;
	FILE *ptr,*ptr2;
	
	ptr=fopen("dummy1.txt","r");
	ptr2=fopen("dummy2.txt","w");
	
	ch=fgetc(ptr);
	while(ch!=EOF)
	{
		fputc(ch,ptr2);
		ch=fgetc(ptr);
	}
	
	fclose(ptr);
	fclose(ptr2);
	
}
