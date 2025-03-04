#include <stdio.h>
#include <string.h>

int main() {
    char input[] = "Hello";
    int len = strlen(input);
    
    for (int i = 0; i < len / 2; i++) {
        char temp = input[i];
        input[i] = input[len - 1 - i];
        input[len - 1 - i] = temp;
    }
    
    printf("%s\n", input);
    
    return 0;
}
