#include <stdio.h>

int main() {
    int jad[4][4];
    int max, min;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d qatorning %d-elementini kiriting: ", i + 1, j + 1);
            scanf("%d", &jad[i][j]);
        }
    }

    max = jad[0][0];
    min = jad[0][0];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (jad[i][j] > max) {
                max = jad[i][j];
            }
            if (jad[i][j] < min) {
                min = jad[i][j];
            }
        }
    }

    printf("Eng katta: %d\n", max);
    printf("Eng kichik: %d\n", min);
    printf("Farqi: %d\n", max - min);

    return 0;
}