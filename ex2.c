/*
Descrição: Ordena dois vetores em um só
Entrada: Elementos dos vetores V,W e suas dimensoes
Saída: O vetor total
*/

#include <stdio.h>

void vetor_resultante(int v[], int w[], int t1, int t2)
{
    int final[200];
    int j = t1;
    int aux;

    for (int i = 0; i < t1; i++)
    {
        final[i] = v[i];
    }

    for (int i = 0; i < t2; i++)
    {
        final[j] = w[i];
        j++;
    }

    for (int i = 0; i < t1+t2; ++i)
    {
        for (int j = i + 1; j < t1+t2; ++j)
        {
            if (final[i] > final[j])
            {
                aux = final[i];
                final[i] = final[j];
                final[j] = aux;
            }
        }
    }

    printf("O vetor final será: ");
    for (int i = 0; i < t1 + t2; i++)
    {
        printf("%d ", final[i]);
    }
}

int main()
{

    int v[100], w[100];

    int tam1, tam2;

    printf("Digite o tamanho dos dois vetores: ");
    scanf("%d %d", &tam1, &tam2);

    for (int i = 0; i < tam1; i++)
    {
        int numero;
        printf("Digite os numero na posicão %d de V: ", i + 1);
        scanf("%d", &numero);
        v[i] = numero;
    }

    for (int i = 0; i < tam2; i++)
    {
        int numero;
        printf("Digite os numero na posicão %d de W: ", i + 1);
        scanf("%d", &numero);
        w[i] = numero;
    }

    vetor_resultante(v, w, tam1, tam2);
    return 0;
}