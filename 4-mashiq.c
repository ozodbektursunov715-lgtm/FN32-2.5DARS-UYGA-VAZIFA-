#include <stdio.h>

int main() {
    int jad[3][4];
    int musbat;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d qatorning %d-elementini kiriting: ", i + 1, j + 1);
            scanf("%d", &jad[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        musbat = 0;
        for (int j = 0; j < 4; j++) {
            if (jad[i][j] > 0) {
                musbat++;
            }
        }
        printf("%d-qatorda musbat sonlar: %d ta\n", i + 1, musbat);
    }

    return 0;
}