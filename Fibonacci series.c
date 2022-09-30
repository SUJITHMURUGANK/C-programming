#include <stdio.h>

int main()
{
    int pre,cur,next,i,n;
    pre=cur=1;
    i=1;
    
    printf("enter the value ");
    scanf("%d",&n);
    printf("%d %d ",pre,cur);
    while(i<=n)
    { next=pre+cur;
     printf("%d ",next);
    
     pre=cur;
     cur=next;
         i++;
    }
    return 0;
}
