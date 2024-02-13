#include<stdio.h>
#include<string.h>
main()
{
	char correctemail[]="veerapatadia@gmail.com";
	char correctpassword[]="123456789";
	
	char enteredemail[30];
	char enteredpassword[30];
	
	printf("Enter your email=");
	scanf("%s",enteredemail);
	printf("Enter your password=");
	scanf("%s",enteredpassword);
	
	if(strcmp(enteredemail,correctemail)==0 && strcmp(enteredpassword,correctpassword)==0)
	{
		printf("Login successfully...");
	}
	else
	{
		printf("Incorrect password...");
	}
}
