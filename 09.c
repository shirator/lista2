#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtdMaterias;
    printf("Entre com a quantidade de materias: ");
    scanf("%d", &qtdMaterias);

    float **notas = (float **) malloc(qtdMaterias * sizeof(float *));
    float *medias = (float *) malloc(qtdMaterias * sizeof(float));
    int *qtdNotas = (int *) malloc(qtdMaterias * sizeof(int));

    for (int i = 0; i < qtdMaterias; i++)
    {
        printf("Entre com a quatidade de notas da materia %d: ", i + 1);
        scanf("%d", &qtdNotas[i]);
    }

    for (int i = 0; i < qtdMaterias; i++)
    {
        notas[i] = (float *) malloc(qtdNotas[i] * sizeof(float));
    }

    for (int i = 0; i < qtdMaterias; i++)
    {
        for (int j = 0; j < qtdNotas[i]; j++)
        {
            printf("Entre com a nota %d da disciplina %d: \n", j + 1, i + 1);
            notas[i][j] = rand() % 10;
            printf("%.1f\n", notas[i][j]);
        }
    }

    for (int i = 0; i < qtdMaterias; i++)
    {
        medias[i] = 0;
        for (int j = 0; j < qtdNotas[i]; j++)
        {
            medias[i] = medias[i] + notas[i][j];
        }
        medias[i] = medias[i] / qtdNotas[i];
        printf("Disciplina %d: %.1f\n", i + 1, medias[i]);
    }

    return 0;
}