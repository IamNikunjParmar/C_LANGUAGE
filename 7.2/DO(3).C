#include<stdio.h>
#include<conio.h>

main()
{
	int i,n;
	clrscr();

	printf("Enter the number:- ");
	scanf("%d",&n);


	i=1;
	do
	{
		printf("%d\n",i);
		i++;
	}
	while(i<=n);

	getch();

}