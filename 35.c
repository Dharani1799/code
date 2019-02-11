#include <stdio.h>
#include<string.h>
void main()
{
   char s[100];
   int l,cnt=0,c,i,flag;
   scanf("%s",s);
   l=strlen(s);
   
   for(i=0;i<l;i++)
   {
       if(s[i]>='0' && s[i]<='9')
       {
       cnt++;
       flag=1;
       }
       else
       flag=0;
   }
   if(flag==1)
      printf("%d",cnt);
   else
      printf("0");

}

