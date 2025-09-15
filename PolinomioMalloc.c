#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	int grau;
	scanf("%d", &grau);
	
	float* coeficientes = (float*)malloc((grau + 1) * sizeof(float));
    if (coeficientes == NULL) {
        printf("Erro na alocacao de memoria\n");
        return 1;
    }
    
    for (int i = 0; i <= grau; i++) {
        scanf("%f", &coeficientes[i]);
    }
	
	float x;
	scanf("%f", &x);
	
	float resultado = 0.0;
    for (int i = 0; i <= grau; i++) {
        resultado += coeficientes[i] * pow(x, i);
    }
    
    printf("%.2f\n", resultado);
	
	return 0;
}