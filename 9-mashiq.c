#include <stdio.h>

int main() {
    int jad[4][4];
    int son, soni = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d qatorning %d-elementini kiriting: ", i + 1, j + 1);
            scanf("%d", &jad[i][j]);
        }
    }

    printf("Qidiriladigan sonni kiriting: ");
    scanf("%d", &son);

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (jad[i][j] == son) {
                soni++;
            }
        }
    }

    printf("%d soni massivda %d marta uchraydi.\n", son, soni);

    return 0;
}