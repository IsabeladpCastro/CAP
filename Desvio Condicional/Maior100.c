/*************************************************************************************
Autor: Isabela de Paula Castro (824145)
Data de criação: 29/04/2024
Data de modificaçõa: 29/04/2024
Objetivo: Encontrar o maior número entre 100 números, utilizand o laço de repetição
*************************************************************************************/
#include <stdio.h>


int main()
{
        // Declaração de Variáveis
        const int n = 100;
        int numero[n];
    
        // Entrada de Dados
        for(int i = 0; i < n; i++) {
            printf("Digite um numero: ");
            scanf("%d", &numero[i]);
        }
    
        // Laço de repetição para descobrir o maior valor
        int maior = numero[0];
    
        for(int i = 1; i < n; i++) {
            if(numero[i] > maior) {
                maior = numero[i];
            }
        }
    
        // Impressão do Resultado
        printf("O maior numero do vetor é %d\n", maior);


        return 0;
}