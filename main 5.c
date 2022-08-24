
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of N\n");
    scanf("%d",&n);
    printf("the first %d odd natural numbers in reverse order are:\n",n);
    n=n*2;
    while(n>=1)
    {   if((n%2)!=0)
        {
          printf("%d\n",n);
        }
        n--;
    }

    return 0;
}
