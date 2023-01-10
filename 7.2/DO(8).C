#include<stdio.h>
#include<conio.h>


main()
{
	int i,n,sum;
	clrscr();

	printf("Enter the number:- ");
	scanf("%d",&n);



	sum=0;
	i=1;
	do
	{

		 printf("%d\n",i);

		 sum=sum+i;
	       i++;

	}
	while(i<=n);
       printf("sum:- %d",sum);
	getch();

}