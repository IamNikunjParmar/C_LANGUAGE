#include<stdio.h>
#include<conio.h>


main()
{
	int i,num;
	clrscr();

	printf("Enter the number:- ");
	scanf("%d",&num);




	i=1;
	do
	{

		  printf("%d * %d = %d\n",num,i,(num*i));
		 i++;



	}
	while(i<=10);

	getch();

}