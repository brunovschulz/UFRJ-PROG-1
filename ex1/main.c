/*
autor: Bruno e Martelo
descrição: Realiza as operações polinomiais determinadas no programa.
entrada: Valor do menu, e posteriores polinômios e outros.
saída: resultado da operação escolhida.
defesa: Na opção 3, o polinômio deve ser quadrático.
*/
#include <stdio.h>
#include "polinomio.h"
#include <math.h>

int main(){
    polinomio p1, p2, p3;
    solucao s;
    int x;
    float soma;
    int escolha;

    while(1){
        printf("\nEscolha uma das opções abaixo: \n\n");
        printf("1-Somar dois polinômios. \n");
        printf("2-Derivar um polinômio. \n");
        printf("3-Raíz de um polinômio quadrático. \n");
        printf("4-Valor de um polinômio dado sua incógnita x. \n");
        printf("Caso queira sair, digite qualquer outro número.\n");
        scanf("%d", &escolha);

        switch (escolha){
            case 1:
                printf("Escrevas os coeficientes do polinômio 1:\n");
                scanf("%f %f %f %f", &p1.c3, &p1.c2, &p1.c1, &p1.c0);
                printf("Escrevas os coeficientes do polinômio 2:\n");
                scanf("%f %f %f %f", &p2.c3, &p2.c2, &p2.c1, &p2.c0);
                p3 = somarPoli(p1, p2);
                printf("A soma é (%.2fx³) + (%.2fx²) + (%.2fx) + (%.2f) \n", p3.c3, p3.c2, p3.c1, p3.c0);
                break;

            case 2:
                printf("Escrevas os coeficientes do polinômio:\n");
                scanf("%f %f %f %f", &p1.c3, &p1.c2, &p1.c1, &p1.c0);
                p2 = derivadaPoli(p1);
                printf("Sua equação derivada é: (%.2fx²) + (%.2fx) + (%.2f) \n", p2.c2, p2.c1, p2.c0);
                break;
            
            case 3:
                printf("Escrevas os coeficientes do polinômio:\n");
                scanf("%f %f %f %f", &p1.c3, &p1.c2, &p1.c1, &p1.c0);

                if(p1.c3 != 0 || p1.c2 == 0){
                    printf("Sua equação não é quadrática.\n");
                    break;
                }

                s = raizesPoli(p1);

                printf("Suas raízes são: %.2f %.2f \n", s.x1, s.x2);
                break;

            case 4:
                printf("Escrevas os coeficientes do polinômio:\n");
                scanf("%f %f %f %f", &p1.c3, &p1.c2, &p1.c1, &p1.c0);
                printf("Escreva o valor de x: \n");
                scanf("%d", &x);

                soma = valorPoli(p1, x);

                printf("O resultado é: %.2f\n", soma);
                break;
            
            default:
                printf("Até logo!\n");
                return 0;
        }
    }
    return 0;
}