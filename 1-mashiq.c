#include <stdio.h>

int main() {
    int jad[3][4];
    int max;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d qatorning %d-elementini kiriting: ", i + 1, j + 1);
            scanf("%d", &jad[i][j]);
        }
        printf("\n");
    }
   
    printf("\n");
    for (int i = 0; i < 3; i++) {
        max = jad[i][0];
        for (int j = 1; j < 4; j++) {
            if (jad[i][j] > max) {
                max = jad[i][j];
            }
        }
        printf("%d-qatordagi eng katta son: %d\n", i + 1, max);
    }

    return 0;
}