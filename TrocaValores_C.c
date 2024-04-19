/******************************************************************************
Autor: Isabela de Paula Castro
Data de Criação: 17/04/2024
Data de Modificação: 17/04/2024
Objetivo: Mudar/Inverter os valores das variáveis A e B 
*******************************************************************************/
#include <stdio.h>

int main()
{
    //Declaração de Variaveis
    int A, B, aux;
    
    //Entrada de Dados
    printf("Digite o valor da variavel A:");
    scanf("%d", &A);
    
    printf("Digite o valor da variavel B:");
    scanf("%d", &B);
    
    printf("Valores de A e B: %d, %d\n", A, B);
    
    //Mudança das Variaveis
    aux = A;
    A = B;
    B = aux;
    
    //Resultado
    printf("O valor da variavel invertida de A: %d\n", A);
    printf("O valor da variavel invertida de B: %d", B);

    return 0;
}