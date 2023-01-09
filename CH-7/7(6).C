#include<stdio.h>
#include<conio.h>

main()
{
	int i,n;
	clrscr();

	printf("enter the value of n:-");
	scanf("%d",&n);

	i = n;

	while(i>=1)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
		i--;
	}


	getch();
}