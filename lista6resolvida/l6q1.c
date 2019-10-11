/*1-Faça um programa para ler uma string e imprimir*/
#include <stdio.h>

int main()
{
    char nome[15];

    printf("Qual seu nome?\n");
    scanf("%s",&nome);

    printf("Meu nome é: %s ", nome);
    return 0;
}
