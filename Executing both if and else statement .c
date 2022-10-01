#include <stdio.h>

int main()
{
   int a=1,b=5;
   if(a<b)
   {printf("A");
    printf("B");
    goto last;}
    else
    { last:
      printf("C");
      printf("D");}

    return 0;
}
