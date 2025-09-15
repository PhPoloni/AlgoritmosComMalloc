#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[102];
    int ra;
    float p1;
    float p2;
} Aluno;

int main() {
    int num, i;
    Aluno *alunos;

    scanf("%d", &num);

    alunos = (Aluno*) malloc(num * sizeof(Aluno));
    if (alunos == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    for (i = 0; i < num; i++) {
        scanf(" %[^\n]s", alunos[i].nome);
        scanf("%d", &alunos[i].ra);
        scanf("%f", &alunos[i].p1);
        scanf("%f", &alunos[i].p2);
    }

    for (i = 0; i < num; i++) {
        float media = (alunos[i].p1 + alunos[i].p2) / 2;
        printf("%d\t%s\t%.2f\n", alunos[i].ra, alunos[i].nome, media);
    }

    return 0;
}