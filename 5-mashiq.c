#include <stdio.h>

int main() {
    int jad[4][4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d qatorning %d-elementini kiriting: ", i + 1, j + 1);
            scanf("%d", &jad[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (jad[i][j] == 0) {
                jad[i][j] = 1;
            }
        }
    }

    printf("\nYangi massiv:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", jad[i][j]);
        }
        printf("\n");
    }

    return 0;
}