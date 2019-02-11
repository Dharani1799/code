#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    int l,cnt=0,i,c;
    gets(s);
    l=strlen(s);
    for(i=0;i<l;i++)
     {
        if(s[i]==' ')
        cnt++;
        
    }
   
    c=l-cnt;
    printf("%d",c);
    
    
}
