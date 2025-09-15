#include <stdio.h>
#include <stdlib.h>

int main() {
    int linhas, colunas;
    
    scanf("%d %d", &linhas, &colunas);
    
    int **matriz = (int **)malloc(linhas * sizeof(int *));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
    }
    
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    if (linhas == colunas) {
        int simetrica = 1;
        
        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                if (matriz[i][j] != matriz[j][i]) {
                    simetrica = 0;
                    break;
                }
            }
            if (simetrica == 0) {
                break;
            }
        }
        
        if (simetrica) {
            printf("Eh simetrica\n");
        } else {
            printf("Nao eh simetrica\n");
        }
    } else {
        printf("Nao eh simetrica\n");
    }
    
    return 0;
}