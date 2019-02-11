#include <stdio.h>

int main()
{
int a[100]={2,1,3}; 
int i,j,n=3,t;
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
		}
	}
}

n=(n+1)/2-1;
printf("%d",a[n]);

}
