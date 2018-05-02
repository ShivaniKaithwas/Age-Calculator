#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
   int a,b,c,d,e,dd1,mm1,yy1,dd2,mm2,yy2,age;
   clrscr();
   printf("Enter today's date in format dd_mm_yy\n");
   scanf("%d_%d_%d",&dd1,&mm1,&yy1);
   printf("today's date is :%d_%d_%d\n",dd1,mm1,yy1);
   printf("Enter your date of birth in format dd_mm_yyyy\n");
   scanf("%d_%d_%d",&dd2,&mm2,&yy2);
   a=yy1-yy2;
   b=mm1-mm2;
   if(b<0)
   {
     a=a-1;
     b=mm2-mm1;
     b=12-b;
   }
   else
   {
   d=abs(-b);
   }
   c=dd1-dd2;
   if(c<0)
   {
     c=dd2-dd1;
     c=31-c;
   }
   else
   {
   e=abs(c);
   }
   printf("Your year is: %d\n",a);
   printf("Your month is: %d\n",b);
   printf("Your day is: %d\n",c);
   printf("you are,,, this much years,months & days old:%d %d %d",a,b,c);
   getch();
}