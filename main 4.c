
#include <stdio.h>

int main()
{
    int n,i=1;
    printf("Enter the value of N\n");
    scanf("%d",&n);
    printf("the first %d odd natural numbers are:\n",n);
    while(i<=n)
    {   if((i%2)!=0)
        {
          printf("%d\n",i);
        }
        i++;
    }

    return 0;
}
