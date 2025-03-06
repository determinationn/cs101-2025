#include <stdio.h>

int main()
{
    unsigned char i = 200;
    unsigned char j = 220;
    unsigned char k = 0;
    // k=(i+j);
    // k/=2;
    k = ((j - i) / 2) + i;
    printf("(%d+%d)/2 = %d\n", i, j, k);
    return 0;
}