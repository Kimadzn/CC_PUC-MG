#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int v1[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v1[i]);
    }

    
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (v1[j] > v1[j + 1]) {
                
                int temp = v1[j];
                v1[j] = v1[j + 1];
                v1[j + 1] = temp;
            }
        }
    }

    
    printf("Valores em ordem crescente:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", v1[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}
