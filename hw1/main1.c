#include <stdio.h>
#include <string.h>

int main() {
    char input[] = "AABBBCCCCddd";
    int count;
    
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