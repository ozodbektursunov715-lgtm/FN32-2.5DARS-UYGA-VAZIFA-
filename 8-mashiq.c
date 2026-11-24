#include <stdio.h>

int main() {
    int jad[3][3];
    int sum, maxSum, maxQator;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d qatorning %d-elementini kiriting: ", i + 1, j + 1);
            scanf("%d", &jad[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += jad[i][j];
        }
        printf("%d-qator yig'indisi: %d\n", i + 1, sum);

        if (i == 0 || sum > maxSum) {
            maxSum = sum;
            maxQator = i + 1;
        }
    }

    printf("Eng katta yig'indi %d-qatorda: %d\n", maxQator, maxSum);

    return 0;
}