#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float *coeficientes;
    float soma, media;

    printf("Informe a quantidade de coeficientes: ");
    scanf("%d", &n);

    coeficientes = (float *) malloc(n * sizeof(float));

    for (int i = 0; i < n; i++)
    {
        printf("Entre com o %dº coeficiente: ", i + 1);
        scanf("%f", &coeficientes[i]);
    }

    soma = 0;
    for (int i = 0; i < n; i++)
       soma += coeficientes[i];

    media = soma / n;
    printf("Media: %.1f", media);
    
    return 0;
}