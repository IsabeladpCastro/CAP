/******************************************************************************
Autor: Isabela de Paula Castro RA:824145
Data de criação: 29/04/2024
Data de Modificação: 29/04/2024
Objetivo: Descobrir o maior valor dentre os 7 números digitados pelo usuario


*******************************************************************************/
#include <stdio.h>


int main()
{
        int n1, n2, n3, n4, n5, n6, n7, menor, maior;
        //Entrada de Dados


        printf("Digite o primeiro número: ");
        scanf("%d", &n1);
        printf("Digite o segundo número: ");
        scanf("%d", &n2);
        printf("Digite o terceiro número: ");
        scanf("%d", &n3);
        printf("Digite o quarto número: ");
        scanf("%d", &n4);
        printf("Digite o quinto número: ");
        scanf("%d", &n5);
        printf("Digite o sexto número: ");
        scanf("%d", &n6);
        printf("Digite o setimo número: ");
        scanf("%d", &n7);
    
        //Cálculo do Maior e Menor número


        maior = n1;
        if(n2 > maior){
            maior = n2;
        }
        if(n3 > maior){
            maior = n3;
        }
        if(n4 > maior){
            maior = n4;
        }
        if(n5 > maior){
            maior = n5;
        }
        if(n6 > maior){
            maior = n6;
        }
        if(n7 > maior){
            maior = n7;
        }
    
        menor = n1;
        if(menor > n2){
            menor = n2;
        }
        if(menor > n3){
            menor = n3;
        }
        if(menor > n4){
            maior = n4;
        }
        if(menor > n5){
            menor = n4;
        }
        if(menor > n6){
            maior = n5;
        }
        if(menor > n7){
            menor = n7;
        }
    
    
        //Impressão dos cálculos/resultados


        printf("O maior valor entre os 7 números digitados é %d\n", maior);
        printf("O menor valor entre os 7 números digitados é %d", menor);
}