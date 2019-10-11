#include <stdio.h>

void main()
{
    char nome[50];
    int i;
    printf("Digite seu nome?\n");
    gets(nome);

    i=strlen(nome);

    printf("A quantidade de letras e: %d.",i);
}
