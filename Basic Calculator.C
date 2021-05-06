
#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,ans;
	int e=0;
	int ch;

	clrscr();

	do
	{

		printf("\n Enter the first number:: ");
		scanf("%d",&a);

		printf("\n Enter the second number:: ");
		scanf("%d",&b);

		do
		{
			printf("\n Operations. \n 1. Addition. \n 2. Subtraction. \n 3. Multiplication. \n 4. Division. \n 5. Exit.");

			printf("\n Enter the choice of operation:: ");
			scanf("%d",&ch);


			switch(ch)

			{
				case 1 :
					ans=a+b;
					printf("\n\n Addition = %d \n\n",ans);

					clrscr();
					printf("\n\t\t\t\t-----------------");
					printf("\n\t\t\t\t| %d + %d       |",a,b);
					printf("\n\t\t\t\t-----------------");
					printf("\n\t\t\t\t| =%d           |",ans);
					printf("\n\t\t\t\t|---------------|");
					printf("\n\t\t\t\t| 9 | 8 | 7 | + |");
					printf("\n\t\t\t\t|---------------|");
					printf("\n\t\t\t\t| 6 | 5 | 4 | - |");
					printf("\n\t\t\t\t|---------------|");
					printf("\n\t\t\t\t| 3 | 2 | 1 | * |");
					printf("\n\t\t\t\t|---------------|");
					printf("\n\t\t\t\t| . | 0 | = | / |");
					printf("\n\t\t\t\t|---------------|");

					break;

				 case 2 :
					 ans=a-b;
					 printf("\n\n Subtraction = %d \n\n",ans);

					clrscr();
					printf("\n\t\t\t\t-----------------");
					printf("\n\t\t\t\t| %d - %d       |",a,b);
					printf("\n\t\t\t\t-----------------");
					printf("\n\t\t\t\t| =%d           |",ans);
					printf("\n\t\t\t\t|---------------|");
					printf("\n\t\t\t\t| 9 | 8 | 7 | + |");
					printf("\n\t\t\t\t|---------------|");
					printf("\n\t\t\t\t| 6 | 5 | 4 | - |");
					printf("\n\t\t\t\t|---------------|");
					printf("\n\t\t\t\t| 3 | 2 | 1 | * |");
					printf("\n\t\t\t\t|---------------|");
					printf("\n\t\t\t\t| . | 0 | = | / |");
					printf("\n\t\t\t\t|---------------|");

					 break;

				 case 3 :
					 ans=a*b;
					 printf("\n\n Multiplication = %d \n\n",ans);

					clrscr();
					printf("\n\t\t\t\t-----------------");
					printf("\n\t\t\t\t| %d * %d       |",a,b);
					printf("\n\t\t\t\t-----------------");
					printf("\n\t\t\t\t| =%d          |",ans);
					printf("\n\t\t\t\t|---------------|");
					printf("\n\t\t\t\t| 9 | 8 | 7 | + |");
					printf("\n\t\t\t\t|---------------|");
					printf("\n\t\t\t\t| 6 | 5 | 4 | - |");
					printf("\n\t\t\t\t|---------------|");
					printf("\n\t\t\t\t| 3 | 2 | 1 | * |");
					printf("\n\t\t\t\t|---------------|");
					printf("\n\t\t\t\t| . | 0 | = | / |");
					printf("\n\t\t\t\t|---------------|");

					 break;

				 case 4 :
					 ans=a/b;
					 printf("\n\n Division = %d \n\n",ans);

					clrscr();
					printf("\n\t\t\t\t-----------------");
					printf("\n\t\t\t\t| %d / %d       |",a,b);
					printf("\n\t\t\t\t-----------------");
					printf("\n\t\t\t\t| =%d            |",ans);
					printf("\n\t\t\t\t|---------------|");
					printf("\n\t\t\t\t| 9 | 8 | 7 | + |");
					printf("\n\t\t\t\t|---------------|");
					printf("\n\t\t\t\t| 6 | 5 | 4 | - |");
					printf("\n\t\t\t\t|---------------|");
					printf("\n\t\t\t\t| 3 | 2 | 1 | * |");
					printf("\n\t\t\t\t|---------------|");
					printf("\n\t\t\t\t| . | 0 | = | / |");
					printf("\n\t\t\t\t|---------------|");

					 break;
				}
/*				printf("\n\t\t\t\t-----------------");
				printf("\n\t\t\t\t| %d + %d       |",a,b);
				printf("\n\t\t\t\t-----------------");
				printf("\n\t\t\t\t| =%d          |",ans);
				printf("\n\t\t\t\t|---------------|");
				printf("\n\t\t\t\t| 9 | 8 | 7 | + |");
				printf("\n\t\t\t\t|---------------|");
				printf("\n\t\t\t\t| 6 | 5 | 4 | - |");
				printf("\n\t\t\t\t|---------------|");
				printf("\n\t\t\t\t| 3 | 2 | 1 | * |");
				printf("\n\t\t\t\t|---------------|");
				printf("\n\t\t\t\t| . | 0 | = | / |");
				printf("\n\t\t\t\t|---------------|");
*/

			}while(ch!=5);

		printf("\n\n\n Press you want to exit. \n[0=YES/1=NO] \n ::");
		scanf("%d",&e);

	}while(e!=0);

	getch();
}