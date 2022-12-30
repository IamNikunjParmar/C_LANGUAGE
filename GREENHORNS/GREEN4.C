#include<stdio.h>
#include<conio.h>

main()
{  int bs,hra,da,ta,gs;
   clrscr();
   printf("enter the value of bs :-  ");
   scanf("%d",&bs);

   hra=bs*10/100;
   da=bs*5/100;
   ta=bs*8/100;

   gs= bs+hra+da+ta;

   printf("hra=%d\n",hra);
   printf("da=%d\n",da);
   printf("ta=%d\n",ta);
   printf("gs=%d\n",gs);









   getch();
}

