#include <stdio.h>
#include<string.h>
void main()
{
   char s[100];
   int l,c=0,i;
   scanf("%s",s);
   l=strlen(s);
   for(i=0;i<l;i++)
   {
       if(s[i]==' ')
       {
       c++;
       printf("%d",c);
       }
       else
       {
       printf("%d",c);
       }
   }
}
