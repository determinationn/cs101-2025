#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *inputFile = fopen("main.c", "r");
    FILE *outputFile = fopen("main.txt", "w");
    
    if (!inputFile || !outputFile) {
        return 1;
    }
    
    char line[256];
    int lineNumber = 0;
    int foundLine = -1;
    
    while (fgets(line, sizeof(line), inputFile)) {
        lineNumber++;
        if (strstr(line, "int main()")) {
            foundLine = lineNumber;
            break;
        }
    }
    
    if (foundLine != -1) {
        fprintf(outputFile, "%d\n", foundLine);
    }
    
    fclose(inputFile);
    fclose(outputFile);
    
    return 0;
}
