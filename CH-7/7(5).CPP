#include<stdio.h>
#include<conio.h>

main()
{
	int i,num;
	clrscr();

	printf("enter number :-");
	scanf("%d",&num);

	i=1;

	while(i<=num)
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
		}
		i++;

	}


	getch();
}





