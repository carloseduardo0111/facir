#include <stdio.h>

void main()
{
    char texto[50];
    int i=0;

    printf("Digite seu nome?\n");
    gets(texto);

    if(texto[i]=='A' || texto[i]=='a'){
        printf("\nSeu nome e: %s",texto);
    }else{
        printf("\nNao comeca com a letra 'A' ou 'a'.\n");
    }

}
