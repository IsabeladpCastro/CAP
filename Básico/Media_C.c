/******************************************************************************
Autor: Isabela de Paula Castro
Data de Criação: 08/04/2024
Data de Modificação: 17/04/2024
Objetivo: Calcular a media de CAP
*******************************************************************************/
#include <stdio.h>

int main()
{
    //Declarações
    double Prova1;
    double Prova2;
    double Prova3;
    
    double atv1;
    double atv2;
    double atv3;
    double atv4;
    double atv5;
    double atv6;
    double atv7;
    double atv8;
    double atv9;
    double atv10;
    
    double media;
    
    //Entradas de dados do usuario
    printf("Digite a nota da prova 1:");
    scanf("%lf", &Prova1);
    printf("Digite a nota da prova 2:");
    scanf("%lf", &Prova2);
    printf("Digite a nota da prova 3:");
    scanf("%lf", &Prova3);
    
    printf("Digite a nota da atividade 1:");
    scanf("%lf", &atv1);
    printf("Digite a nota da atividade 2:");
    scanf("%lf", &atv2);
    printf("Digite a nota da atividade 3:");
    scanf("%lf", &atv3);
    printf("Digite a nota da atividade 4:");
    scanf("%lf", &atv4);
    printf("Digite a nota da atividade 5:");
    scanf("%lf", &atv5);
    printf("Digite a nota da atividade 6:");
    scanf("%lf", &atv6);
    printf("Digite a nota da atividade 7:");
    scanf("%lf", &atv7);
    printf("Digite a nota da atividade 8:");
    scanf("%lf", &atv8);
    printf("Digite a nota da atividade 9:");
    scanf("%lf", &atv9);
    printf("Digite a nota da atividade 10:");
    scanf("%lf", &atv10);
    
    //Calcular média da Materia CAP
    media=(Prova1*0.25)+(Prova2*0.25)+(Prova3*0.3)+(((atv1+atv2+atv3+atv4+atv5+atv6+atv7+atv8+atv9+atv10)/10)*0.2);
    
    //Resultado
    printf("Sua media é %lf", media);
    return 0;
}