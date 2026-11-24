#include <stdio.h>

int main() {
    int jad[3][4];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d qatorning %d-elementini kiriting: ", i + 1, j + 1);
            scanf("%d", &jad[i][j]);
        }
    }

    printf("\nTeskari tartibda:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 3; j >= 0; j--) {
            printf("%d\t", jad[i][j]);
        }
        printf("\n");
    }

    return 0;
}