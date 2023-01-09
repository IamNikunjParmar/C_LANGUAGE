#include<stdio.h>
#include<conio.h>

main()
{
	int i;
	clrscr();

	i =2000;

	while(i<=3000)
	{
		if(i%4==0)
		{
			printf("%d\n",i);
		}
		i++;
	}


	getch();
}