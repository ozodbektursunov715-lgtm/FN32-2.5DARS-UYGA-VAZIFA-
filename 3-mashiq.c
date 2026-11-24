#include <stdio.h>

int main() {
    int jad[4][4];
    int bey=0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d qatorning %d-elementini kiriting: ", i + 1, j + 1);
            scanf("%d", &jad[i][j]);
        }
        printf("\n");
    }
        printf("5 ga bo'linadigan sonlar\n");
    for (int j = 0; j < 4; j++) {
        
        for (int i = 1; i < 4; i++) {
            if (jad[i][j]%5==0) {
                printf("%d \n",jad[i][j]);
                
                bey++;
            }
        }
       
    } 
    printf("Kiritgan sonlaringiz ichidagi 5ga bo'linadigan sonlar: %d ta",bey);

    return 0;
}