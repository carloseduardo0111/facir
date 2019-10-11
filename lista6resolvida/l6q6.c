#include <stdio.h>

void main()
{
    char nome[50];
    char sexo[2];
    int idade;
    const char feminino[]="f";

    printf("Qual seu nome?\n");
    gets(nome);

    printf("Qual seu sexo?(Ex: (M)para masculino e (F) para feminino)\n");
    gets(sexo);

    printf("Qual sua idade?\n");
    scanf("%i", &idade);

    if(idade<25 && strcmp(sexo,feminino)==0){
    printf("%s aceitar", nome);
    }else{
    printf("Não aceitar %s", nome);
    }
}
