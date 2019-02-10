#include<stdio.h>
void main()
{
int a,t=0,r,n;
scanf("%d",&a);
n=a;
while(a)
{
r=a%10;
t=t*10+r;
a=a/10;
}
if(n==t)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
