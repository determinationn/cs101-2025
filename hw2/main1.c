#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    FILE *fp = fopen("lotto.txt", "w");
    if (fp == NULL) {
        perror("lotto.txt");
        return 1;
    }

    int N;
    scanf("%d", &N);
    
    srand(1);

    fprintf(fp, "========= lotto649 =========\n");

    for (int i = 1; i <= 5; i++) {
        fprintf(fp, "[%d]: ", i);
        if (i <= N) {
            int used[70] = {0};
            int count = 0;
            while (count < 7) {
                int r = rand() % 69 + 1; 
                if (used[r] == 0) {
                    used[r] = 1;
                    fprintf(fp, "%02d", r); 
                    count++;
                    if (count < 7) {
                        fprintf(fp, " ");
                    }
                }
            }
            fprintf(fp, "\n");
        } else {
            fprintf(fp, "__ __ __ __ __ __ __\n");
        }
    }

    fprintf(fp, "========= csie@CGU =========\n");

    fclose(fp);
    return 0;
}
