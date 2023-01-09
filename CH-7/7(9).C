#include<stdio.h>
#include<conio.h>

main()
{
	int i,fact=1,num;
	clrscr();

	printf("enter number :-");
	scanf("%d",&num);

	i=1;

	while(i<=num)
	{
		printf("%d\n",i);
		fact=fact*i;
		i++;
	}
		printf("factorial of %d is :-%d",num,fact);

	getch();
}