#include <stdio.h>
#include <string.h>

int main() {
    char input[] = "10001111";
    int decimal = 0;
    
    for (int i = 0; input[i] != '\0'; i++) {
        decimal = (decimal << 1) | (input[i] - '0');
    }
    
    printf("%X\n", decimal);
    
    return 0;
}