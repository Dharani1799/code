#include<stdio.h>
void main()
{
int array[10];
int i, j, n, t;
scanf("%d", &n);
for (i = 0; i < n; i++)
{
scanf("%d", &array[i]);
}
for (i = 0; i < n; i++)
{
for (j = 0; j < (n - i - 1); j++)
{
if (array[j] > array[j + 1])
{
t= array[j];
array[j] = array[j + 1];
array[j + 1] = t;
 }
 }
 }
 for (i = 0; i < n; i++)
 {
printf("%d\n", array[i]);
}
 n= (n+1) / 2 - 1;  
printf("Median = %d ", array[n]);
}
