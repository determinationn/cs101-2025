#include <stdio.h>

int main()
{
    int n = 7;
    int count = 0;
    while(n)
    {
        if(n&1)
        {
            count++;
        }
        n >>= 1;
    }
    printf("%d\n", count);
    return 0;
}