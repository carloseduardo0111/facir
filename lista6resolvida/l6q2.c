#include <stdio.h>



void main(){
      int i;
      char texto[100];

      printf("Insira uma palavra ou frase:");
      gets(texto);
      i=0;
      while(texto[i] != '\0'){
      i++;
      }
      printf("O numero de caracteres foi %d.",i);
    }
