#include<stdio.h>
#include<conio.h>

main()
{
   int a,b,c;
   clrscr();
   printf("Enter the value of a :- ");
   scanf("%d",& a);
   printf("Enter th value of b :- ");
   scanf("%d",& b);

   a=a+b;
   b=a-b;
   a=a-b;
   printf("a=%d\n",a);
   printf("b=%d\n",b);
    getch();
 }

