#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int max = 5;
    int m = max;
    int n = 0;
    float *coeficientes;
    float soma, media;
    coeficientes = (float *) malloc(m * sizeof(float));

    float valor;
    do
    {
        printf("Entre com o %dº coeficiente: ", n + 1);
        scanf("%f", &valor);

        if (valor >= 0) 
        {   
            if (m >= n)
            {
                m += max;
                coeficientes = (float *) realloc(coeficientes, m * sizeof(float));
            }
            coeficientes[n] = valor;
            n++;
        }
    }while (valor >= 0);

    soma = 0;
    for (int i = 0; i < n; i++)
       soma += coeficientes[i];

    media = soma / n;
    printf("Media: %.1f", media);
    
    return 0;
}