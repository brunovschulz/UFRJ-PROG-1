/*
Descrição: O programa calcula o produto escalar desses vetores
Entrada: Elementos dos vetores V,W e suas dimensoes
Saída: O produto escalar desses vetores
Defesa: 0 > dimensao > 10
*/

#include <stdio.h>

float produto(float v[], float w[], int dimensao)
{
    float soma = 0;

    for (int i = 0; i < dimensao; i++)
    {
        soma += (v[i] * w[i]);
    }
    return soma;
}

int main()
{
    float v[10], w[10];
    int dimensao;

    printf("Digite o número de dimensões: \n");
    scanf("%d", &dimensao);

    if (dimensao < 0 || dimensao > 10)
    {
        puts("Entrada inválida");
        return 0;
    }

    for (int i = 0; i < dimensao; i++)
    {
        float numero;
        printf("Digite os numero na posicão %d de V: ", i + 1);
        scanf("%f", &numero);
        v[i] = numero;
    }

    for (int i = 0; i < dimensao; i++)
    {
        float numero;
        printf("Digite os numero na posicão %d de W: ", i + 1);
        scanf("%f", &numero);
        w[i] = numero;
    }

    printf("O produto escalar será: %f", produto(v, w, dimensao));

    return 0;
}