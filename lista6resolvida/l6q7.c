#include <stdio.h>

void main()
{
    char nome1[50];
    char nome2[50];
    int i,x;
    printf("Digite o nome1?\n");
    gets(nome1);

    printf("Digite o nome2\n");
    gets(nome2);

    for(i=0; i<50; i++){
        if(nome1[i] == nome2[i]){
        i;
        }else{
        x;
        }
    }
    if(x){
    printf("Nomes diferentes");
    }
}
