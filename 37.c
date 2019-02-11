#include <stdio.h>
 
void main()
{
   int x, y, t;
 
  
   scanf("%d%d", &x, &y);
 
   printf("Before Swapping\nx = %d\ny = %d\n",x,y);
 
   t = x;
   x = y;
   y = t;
 
   printf("After Swapping\nx = %d\ny = %d\n",x,y);
 
}
