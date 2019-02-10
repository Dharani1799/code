#include<stdio.h>
int main()
{
int n,a,d,sum=0,i;
scanf("%d%d%d",&n,&d,&a);
for(i=0;i<n;i++)
{
sum=sum+(a+i*d);
}
printf("%d",sum);
return 0;
}
