#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main() {
    char input[MAX_LEN];
    
    scanf("%s", input);
    
    int len = strlen(input);
    
    for (int i = 0; i < len / 2; i++) {
        char temp = input[i];
        input[i] = input[len - 1 - i];
        input[len - 1 - i] = temp;
    }
    
    printf("%s\n", input);

    return 0;
}