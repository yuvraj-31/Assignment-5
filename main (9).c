
#include <stdio.h>

int main()
{
    int n,i=1;
    printf("Enter the value of N\n");
    scanf("%d",&n);
    printf("the cubes of first %d natural numbers are:\n",n);
    while(i<=n)
    {   
          printf("%d\n",i*i*i);
          i++;
    }

    return 0;
}
