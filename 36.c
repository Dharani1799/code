#include <stdio.h>
#include<string.h>
void main()
{
   char s[100];
   int l,cnt=0,c,i;
   scanf("%s",s);
   l=strlen(s);
   c=(int)s;
   for(i=0;i<l;i++)
   {
       if(c[i]>=32 && c[i]<=64)
       {
       cnt++;
       printf("%d",cnt);
       }
       else
       printf("%d",cnt);
   }

}
