#include <stdio.h>

void ordenar(int v[], int t1)
{
    int aux;
    for (int i = 0; i < t1; ++i)
    {
        for (int j = i + 1; j < t1; ++j)
        {
            if (v[i] > v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    printf("O vetor final será: ");
    for (int i = 0; i < t1; i++)
    {
        printf("%d ", v[i]);
    }
}

int main(){

    int v[100];
    int tam1;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam1);

    for (int i = 0; i < tam1; i++)
    {
        int numero;
        printf("Digite os numero na posicão %d de V: ", i + 1);
        scanf("%d", &numero);
        v[i] = numero;
    }

    ordenar(v, tam1);
    return 0;
}