#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main() {
    char input[MAX_LEN];

    scanf("%s", input);
    
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
