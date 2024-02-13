#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	clrscr();

	printf("enter the value of a=");
	scanf("%d",&a);
	printf("enter the value of b=");
	scanf("%d",&b);
	printf("enter the value of c=");
	scanf("%d",&c);

	(a==b && b==c)
		?printf("all are same")
		:(a==c)
			?printf("a and c are same")
			:(a==b)
				?printf("a and b are same")
				:(b==c)
					?printf("b and c are same")
					:(a<b)
						?printf("a is minimum")
						:(a<c)
							?printf("a is minimum")
							:(b<c)
								?printf("b is minimum")
								:printf("c is minimum");
	 getch();
	 return 0;
}



