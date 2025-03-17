#include <stdio.h>

int main() {
    FILE *inputFile = fopen("main.c", "r");
    FILE *outputFile = fopen("main.txt", "w");
    
    if (!inputFile || !outputFile) {
        return 1;
    }
    
    char ch;
    while ((ch = fgetc(inputFile)) != EOF) {
        fputc(ch, outputFile);
    }
    
    fclose(inputFile);
    fclose(outputFile);
    
    return 0;
}
