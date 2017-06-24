#include<stdio.h>
 
int main()
{
   int i, first = 0, second = 1, next;
 
   for (i = 0; i < 20; i++) {
     next = first + second;
     first = second;
     second = next;

     printf("%d\n",next);
   }
 
   return 0;
}
