#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float v1[10];

    int i;
    float verific = 0; 
    for (i = 0; i < 10; i++) {
        printf("Escreva o valor %d: \n", i + 1);
        scanf("%f", &v1[i]); 
        if (i == 0 || v1[i] > verific) { 
            verific = v1[i];
        }
    }

    printf("O maior valor é %.2f\n", verific); 

    system("pause");
    return 0;
}
