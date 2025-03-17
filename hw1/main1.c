#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main() {
    char input[MAX_LEN];
    int count;
    
    scanf("%s", input);
    
    for (int i = 0; input[i] != '\0'; i++) {
        count = 1;
        while (input[i] == input[i + 1]) {
            count++;
            i++;
            if (count == 9) break;
        }
        printf("%c%d", input[i], count);
    }

    printf("\n");
    
    return 0;
}