#include<stdio.h>
#include<conio.h>


main()
{
	int i,fact,num;
	clrscr();

	printf("Enter the number:- ");
	scanf("%d",&num);



	fact=1;
	i=1;
	do
	{

		 printf("%d\n",i);

		 fact=fact*i;
	       i++;

	}
	while(i<=num);
       printf("factroial of %d is :- %d",num,fact);
	getch();

}