#include <stdio.h>

int main() {
    FILE *fp;

    int arr_write_int[3] = {0, 1, 2};
    char arr_write_char[3] = {'A', 'B', 'C'};
    float arr_write_float[3] = {1.1, 1.2, 1.3};

    int arr_read_int[3];
    char arr_read_char[3];
    float arr_read_float[3];

    fp = fopen("a.bin", "wb+");

    fwrite(arr_write_int, sizeof(int), 3, fp);
    fwrite(arr_write_char, sizeof(char), 3, fp);
    fwrite(arr_write_float, sizeof(float), 3, fp);

    fseek(fp, 0, SEEK_SET);

    fread(arr_read_int, sizeof(int), 3, fp);
    fread(arr_read_char, sizeof(char), 3, fp);
    fread(arr_read_float, sizeof(float), 3, fp);

    fclose(fp);

    for (int i = 0; i < 3; i++) {
        printf("%d ", arr_read_int[i]);
    }
    printf("\n");

    for (int i = 0; i < 3; i++) {
        printf("%c ", arr_read_char[i]);
    }
    printf("\n");

    for (int i = 0; i < 3; i++) {
        printf("%.6f ", arr_read_float[i]); 
    }
    printf("\n");

    return 0;
}
