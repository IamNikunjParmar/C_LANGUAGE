#include<stdio.h>
#include<conio.h>

main()
{
	int i,num;
	clrscr();

	printf("enter number to print table :-");
	scanf("%d",&num);

	i =1;

	while(i<=10)
	{
		printf("%d * %d = %d\n",num,i,(num*i));
		i++;
	}

	getch();
}