#include<stdio.h>
#include<conio.h>

main()
{
    int x,y,sum;
    clrscr();
    printf("Enter the value of x :- ");
    scanf("%d", &x);
    printf("Enter the value of y :- ");
    scanf("%d", &y);
    sum =(x*x)-(2*x*y)-(y*y);
    printf("sum is = %d", sum);




    getch();


}