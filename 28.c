#include<stdio.h>
void main()
{
int n,m=0,i,a[10];
m=a[0];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("\n%d%d",a[i],i);
}
}
