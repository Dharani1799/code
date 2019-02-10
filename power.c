#include<stdio.h>
void main()
{
int n,k,p;
scanf("%d%d",&n,&k);
p=1;
while(k)
{
p=p*n;
k--;
}
printf("%d",p);
getch();
}
