#include<stdio.h>
#include<conio.h>

main()
{
	int  choice,english,gujarati,hindi;
	clrscr();

	printf("press 1 for english\n");
	printf("press 2 for hindi\n");
	printf("press 3 for gujarati\n");

	printf("enter your choice=");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
		printf("you choose english\n");

			printf("press 1 for Internet Recharge\n");
			printf("press 2 for Top-up Recharge\n");
			printf("press 3 for Special Recharge\n");

			printf("enter your choice=");
			scanf("%d",&english);

			switch(english)
			{
				case 1:
				printf("you have successfully done Internet Recharge\n");
				break;

				case 2:
				printf("you have successfully done Top-up Recharge\n");
				break;

				case 3:
				printf("you have successfully done Special Recharge\n");
				break;

				default:
				printf("Invalid Choice");
				break;

			}

		break;

		case 2:
		printf("you choose hindi\n");

			printf("Internet Recharge ke liye 1 dabaiye\n");
			printf("Top-up Recharge ke liye 2 dabaiye\n");
			printf("Special Recharge le liye 3 dabaiye\n");

			printf("enter your choice=");
			scanf("%d",&hindi);

			switch(hindi)
			{
				case 1:
				printf("apne safaltapurvak Internet Recharge kar liya he\n");
				break;

				case 2:
				printf("apne safaltapurval Top-up Recharge kar liya he\n");
				break;

				case 3:
				printf("apne safaltapurvak Special Recharge kar liya he\n");
				break;

				default:
				printf("Invalid Choice");
				break;

			}

		break;

		case 3:
		printf("you choose gujarati\n");
			printf("Internet Recharge mate 1 dabavo\n");
			printf("Top-up Recharge mate 2 dabavo\n");
			printf("Special Recharge mate 3 dabavo\n");

			printf("enter your choice=");
			scanf("%d",&gujarati);

			switch(gujarati)

			{
				case 1:
				printf("tame safaltapurvak Internet Recharge karyu chhe\n");
				break;

				case 2:
				printf("tame safaltapurvak Top-up Recharge karyu chhe\n");
				break;

				case 3:
				printf("tame safaltapurvak Special Recharge karyu chhe\n");
				break;

				default:
				printf("Invalid Choice");
				break;

			}

		break;

		default:
		printf("Invalid Choice");
		break;

	  }

	  getch();
	  return 0;
}



