#include <stdio.h>

int main() {
    int jad[4][3];
    int min;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d qatorning %d-elementini kiriting: ", i + 1, j + 1);
            scanf("%d", &jad[i][j]);
        }
        printf("\n");
    }

    for (int j = 0; j < 3; j++) {
        min = jad[0][j];
        for (int i = 1; i < 4; i++) {
            if (jad[i][j] < min) {
                min = jad[i][j];
            }
        }
        printf("%d-ustundagi eng kichik son: %d\n", j + 1, min);
    }

    return 0;
}