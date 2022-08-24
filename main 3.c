
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of N\n");
    scanf("%d",&n);
    printf("the first %d natural numbers in reverse order are:\n",n);
    do
    {
        printf("%d\n",n);
        n--;
    }while(n>=1);

    return 0;
}
