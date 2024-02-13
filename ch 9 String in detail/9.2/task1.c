#include<stdio.h>
main()
{
	char pass[30];
	int i,capital=0,symbol=0,num=0,symbol2=0,symbol3=0,len;
	
	printf("Enter your Password=");
	gets(pass);
	
	len=strlen(pass);
	for(i=0;i<len;i++)
	{
		if(pass[i]>=65 && pass[i]<=90)
		{
			capital=1;
		}
		else if(pass[i]>=48 && pass[i]<=57)
		{
			num=1;
		}
		else if(pass[i]>=33 && pass[i]<=47)
		{
			symbol=1;
		}
		else if(pass[i]>=123 && pass[i]<=126)
		{
			symbol2=1;
		}
		else if(pass[i]>=91 && pass[i]<=96)
		{
			symbol3=1;
		}
	}
	
	if(capital==1 && num==1 && (symbol==1 ||symbol2==1 || symbol3==1) && len>=6)
	{
		printf("Your password is strong...");
	}
	else
	{
		printf("Your password is not strong...");
	}
}
