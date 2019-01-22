#include<stdio.h>
void main()
{
char a;
clrscr();
scanf("%c",&a);
if((a>=97 &&a<=122)||(a>=65&&a<=90))
{
printf("alphapet");
}
else
{
printf("no");
}
getch();
}
