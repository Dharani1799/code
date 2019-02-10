#include<stdio.h>
void main()
{
int n,i,flag;
clrscr();
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
flag=1;
}
if(flag==1)
{
printf("no");
}
else
{
printf("yes");
}
getch();
}
