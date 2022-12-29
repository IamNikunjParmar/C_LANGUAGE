#include<stdio.h>
#include<conio.h>

main()
{
    int x,y,z,sum;
    clrscr();
    printf("Enter the value of x :- ");
    scanf("%d", &x);
    printf("Enter the value of y :- ");
    scanf("%d", &y);

    printf("Enter the value of z :- ");
    scanf("%d", &z);

    sum =(x*x*x)+(3*x*x*y)+(3*x*y*y)+(y*y*y);

    printf("sum is = %d", sum);




    getch();


}