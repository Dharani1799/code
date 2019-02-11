#include<stdio.h>
void main()
{
    int a,b;
    scanf("%d",&a);
    if(a>=60)
    {
        b=a/60;
        
        a=a%60;
    
    printf("%d %d",b,a);
    }
    else

    printf("0 %d",a);
    
}
