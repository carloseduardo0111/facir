#include <stdio.h>

void main()
{
    char texto[50];
    int i=0;

    printf("Digite seu nome?\n");
    gets(texto);

    for(i=0; i<4; i++){
        printf("%s\n", texto[i]);
    }

}
