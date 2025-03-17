#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main() {
    char input[MAX_LEN];
    int decimal = 0;
    
    scanf("%s", input);
    
    for (int i = 0; input[i] != '\0'; i++) {
        decimal = (decimal << 1) | (input[i] - '0');
    }
    
    printf("%X\n", decimal);

    return 0;
}