
#include <stdio.h>

int main()
{
    int n,i=1;
    printf("Enter the value of N\n");
    scanf("%d",&n);
    printf("the table of %d is:\n",n);
    while(i<=10)
    {   
          printf("%d\n",n*i);
          i++;
    }

    return 0;
}
