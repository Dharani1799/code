#include<stdio.h>
void main ()
{
int n, a = 0, b = 1, t, c;
scanf("%d",&n);
for ( c = 0 ; c < n ; c++ )
   {
      if ( c <= 1 )
         t= c;
      else
      {
         t = a + b;
         a = b;
         b = t;
      }
      printf("%d\n",t);
   }

}
