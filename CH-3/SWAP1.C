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
   printf("Enter th value of c :- ");
   scanf("%d",& c);
   a=b;
   b=c;
   c=a;
   printf("a=%d\n",a);
   printf("b=%d\n",b);
    getch();



}