#include <stdio.h>
#include <string.h>

int main() {
    char input[] = "A4B1C3f3";
    
    for (int i = 0; input[i] != '\0'; i += 2) {
        char ch = input[i];
        int count = input[i + 1] - '0';
        
        for (int j = 0; j < count; j++) {
            printf("%c", ch);
        }
    }
    printf("\n");
    
    return 0;
}