#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<conio.h>
#include <stdbool.h>

int decisao;//variavel para uso no comando do switch no menu principal

void main(){
//definicao de menu como principal janela do programa
menuprincipal();
}

void menuprincipal(){
    //Cabecario da calculadora
    printf("===========================================\n");
    printf("      Calculadora projeto PIN 'FACIR'");
    printf("\n===========================================\n");
    printf("------------- Menu Principal --------------\n\t[0] - Fechar Calculadora\n\t[1] - Somar\n\t[2] - Subtrair\n\t[3] - Dividir\n\t[4] - Multiplicar\n\t[5] - Mutiplicar ao Quadrado\n\t[6] - Mutiplicar ao Cubo\n\t[7] - Raiz Quadrada\n\t[8] - Raiz Cubica\n\t[9] - Equacao Do Primeiro Grau\n\t[10] - Equacao Do Segundo Grau\n\t[11] - Media Ponderada\n\t[12] - Tabuada\n\t[99] - Limpar Tela\n");

    printf("\nDigite a opcao desejada: ");//decisao de escolha do menu da calculadora
    scanf("%d", &decisao);//variavel de armazenamento da decisao do usuario

//comando de decisao de escolha da variavel
    switch(decisao){

//caso o usuario digite o valor '0', ele vai execultar a funçao de saida e o break serve para que o programa pare e nao precise realizar o teste nas funcoes seguintes
        case 0:
        exit(0);
        break;

        case 1:
        somar();
        break;

        case 2:
        subtrair();
        break;

        case 3:
        dividir();
        break;

        case 4:
        multiplicar();
        break;

        case 5:
        multiplicardobrado();
        break;

        case 6:
        multiplicarcubo();
        break;

        case 7:
        raizquadrada();
        break;

        case 8:
        raizcubica();
        break;

        case 9:
        equacaoprimeirograu();
        break;
        case 10:
        equacaosegundograu();
        break;

        case 11:
        mediaponderada();
        break;

        case 12:
        tabuadamultiplicacao();
        break;

        case 99:
        limpartela();
        break;
    }
}
//janela da opcao da soma
void somar(){

float somar1, somar2, resultadosoma;//o tipo e as variaveis utilizadas no programa

    printf("\nCaso precise digitar um numero com virgula, Substituir a virgula por PONTO.");//exibe ao usuario a forma correta de usar a virgula

    printf("\nDigite um numero: ");
    scanf("%f", &somar1); //recebe o valor e armazena na variável

    printf("\nDigite um numero: ");
    scanf("%f", &somar2); //recebe o valor e armazena na variável

setbuf(stdin,NULL);//comando para limpar o buffer do programa

    resultadosoma=somar1+somar2; //faz o calculo da soma e atribui o valor do calculo a variavel resultadosoma

    printf("\nResultado da soma: %.2f\n\n", resultadosoma); //exibe resultado da soma ao usuario

menuprincipal();//comando de chamada do bloco de menu
}
//janela da opcao subtrair
void subtrair(){

float subtrair1, subtrair2, resultadosubtracao;//o tipo e variaveis usadas no sistema

    printf("\nCaso precise digitar um numero com virgula, Substituir a virgula por PONTO.");
    printf("\nDigite um numero: ");
    scanf("%f", &subtrair1); //recebe o valor e armazena na variável

    printf("\nDigite um numero: ");
    scanf("%f", &subtrair2); //recebe o valor e armazena na variável

setbuf(stdin,NULL);//comando para limpar o buffer do programa

    resultadosubtracao=subtrair1-subtrair2;//calculo da subtracao, atribuindo o valor a variavel de resultado

printf("\nResultado da subtracao: %.2f\n\n", resultadosubtracao);//exibe resultado ao usuario

menuprincipal();//chamada do menu principal
}
//janela de opcao de dividir
void dividir(){

float dividir1, dividir2, resultadodivisao;//o tipo e variaveis utilizadas

    printf("\nDigite um numero: ");
    scanf("%f", &dividir1); //recebe o valor e armazena na variável

    printf("\nDigite um numero: ");
    scanf("%f", &dividir2); //recebe o valor e armazena na variável

setbuf(stdin,NULL);//comando para limpar o buffer do programa

    resultadodivisao=dividir1/dividir2;//execução do calculo e variavel recebe

    printf("\nResultado da divisao: %.2f\n\n", resultadodivisao);//exibe resultado ao usuario

menuprincipal();//chamada do menu principal
}
//janela da opcao de multiplicacao
void multiplicar(){

float multiplicar1, multiplicar2, resultadomultiplicacao;//o tipo e as variaveis utilizadas

    printf("\nCaso precise digitar um numero com virgula, Substituir a virgula por PONTO.");
    printf("\nDigite um numero: ");
    scanf("%f", &multiplicar1); //recebe o valor e armazena na variável

    printf("\nDigite um numero: ");
    scanf("%f", &multiplicar2); //recebe o valor e armazena na variável

setbuf(stdin,NULL);//comando para limpar o buffer do programa

    resultadomultiplicacao=multiplicar1*multiplicar2;//executa o calculo e atribui o valor a variavel resultado

    printf("\nResultado da multiplicacao: %.2f\n\n", resultadomultiplicacao);//exibe resultado ao usuario

menuprincipal();//comando para chamar o menu principal
}
//janela da opçao de mutiplicar ao dobro
void multiplicardobrado(){

float multiplicardobro, resultadomultiplicacaodobro;//o tipo e as variaveis usadas

    printf("\nDigite um numero: ");
    scanf("%f", &multiplicardobro); //recebe o valor da variavel e armazena na variável

setbuf(stdin,NULL);//comando para limpar o buffer do programa

    resultadomultiplicacaodobro=pow(multiplicardobro,2);//calculo utilizando o comando da potenciação
    printf("\nResultado da multiplicacao ao quadrado: %.2f\n\n", resultadomultiplicacaodobro);//exibe resultado ao usuario

menuprincipal();//chama do bloco do menu principal
}
//janela de multiplicar ao cubo
void multiplicarcubo(){

int multiplicarcubocubo, resultadomultiplicacaocubo;//o tipo e variaveis utilizadas

    printf("\nDigite um numero: ");
    scanf("%d", &multiplicarcubocubo); //recebe o valor da variavel e armazena na variável

setbuf(stdin,NULL);//comando para limpar o buffer do programa

    resultadomultiplicacaocubo=pow(multiplicarcubocubo,3);//calculo utilizando o comando da potenciação

    printf("\nResultado da multiplicacao ao cubo: %d\n\n", resultadomultiplicacaocubo);//exibe resultado ao usuario

menuprincipal();//comando para chamar menu principal
}
//janela da raiz quadrada
void raizquadrada(){

float raizquadrada1, resultadoraizquadrada;//tipo e variaveis usadas

    printf("\nDigite um numero: ");
    scanf("%f",&raizquadrada1);//recebe o valor da variavel e armazena na variável

setbuf(stdin,NULL); //limpar a sujeira do armazenamento

    resultadoraizquadrada =sqrt(raizquadrada1);//função para resultar a raiz quadrada e salvar na variavel resultadoraizquadrada

    printf("\nA raiz quadrada de %.2f e: %.2f", raizquadrada1, resultadoraizquadrada); //exibir resultado na tela
    printf("\n");

menuprincipal();//comando do menu principal
}
//janela de opcao da raiz cubica
void raizcubica(){

float raizcubica1, resultadoraizcubica;//o tipo e variaveis usadas

    printf("\nDigite um numero: ");
    scanf("%f",&raizcubica1);//recebe e armazena o valor digitado pelo usuario

setbuf(stdin,NULL);//comando para limpar o buffer do programa

    resultadoraizcubica=pow(raizcubica1,1.0/3.0);//realiza o calculo da raiz e atribui o valor a variavel
    /* Pesquisando na internet encontrei essa solução escrita em uns do comentario da pagina.
    pelo que eu entendi, a potenciação ela recebe o valor da variavel multiplicando por 1 e após isso, ela divide o numero
    ate encontrar na multiplicaçao tres algarismos que multiplicados entre si, de o valor digitado na variavel.
    */

    printf("\nA raiz cubica de %.2f e: %.2f\n",raizcubica1, resultadoraizcubica);//exibe resultado ao usuario

menuprincipal();//comando do menu principal
}
//janela de opcao equacao 1
void equacaoprimeirograu(){

float equacaoprimeiro1, equacaoprimeiro2, equacaoprimeiro3, resultadoequacaoprimeirograu;

    printf("\nExemplo Equacao primeiro grau: Ax+b=0 ou Ax-b=0");//exibe o exemplo ao usuario
    printf("\nDigite valor de A: ");
    scanf("%f", &equacaoprimeiro1); //recebe o valor e armazena na variável

    printf("\nDigite valor de B: ");
    scanf("%f", &equacaoprimeiro2);//recebe o valor e armazena na variável

    printf("\nDigite valor de C: ");
    scanf("%f", &equacaoprimeiro3);//recebe o valor e armazena na variável

    resultadoequacaoprimeirograu = (equacaoprimeiro3-equacaoprimeiro2)/equacaoprimeiro1; //calculo matematico para encontrar resultado

    printf("\nResultado de X e: %.2f",resultadoequacaoprimeirograu); //exibe resultado na tela
    printf("\n");

setbuf(stdin,NULL);//comando para limpar o buffer do programa

menuprincipal();//comando para o menu principal
}
//janela equacao 2
void equacaosegundograu(){

//o tipo e variaveis utilizadas
int equacaosegundo1, equacaosegundo2, equacaosegundo3, quadrado;
float delta, raiz, x1, x2;

    printf("\nExemplo Equacao segundo grau: Ax+bx+c=0 ou Ax-bx-c=0");//explicdando modelo ao usuario

    printf("\n\nDigite o valor de 'A': ");
    scanf("%i",&equacaosegundo1);//recebe o valor e armazena na variável
    printf("\nDigite o valor de 'B': ");
    scanf("%i",&equacaosegundo2);//recebe o valor e armazena na variável
    printf("\nDigite o valor de 'C': ");
    scanf("%i",&equacaosegundo3);//recebe o valor e armazena na variável

    quadrado=pow(equacaosegundo2,2);//calcula a potenciação do valor de B
    delta=quadrado-4*equacaosegundo1*equacaosegundo3;//calculo do valor de delta
    printf("\nValor de DELTA: %.2f", delta);//exibe resultado de delta na tela ao usuario

setbuf(stdin,NULL);//comando para limpar o buffer do programa

    if(delta>=0){
        raiz=sqrt(delta);//formula para calcular raiz quadrada
            printf("\n\nRaiz de DELTA: %.2f", raiz);//exibe raiz de delta

        x1=(-(equacaosegundo2)+raiz)/(2*equacaosegundo1);//calculo de x linha
            printf("\n\nX': %.2f", x1);//exibe resultado de x linha

        x2=(-(equacaosegundo2)-raiz)/(2*equacaosegundo1);//calculo de x duas linha
            printf("\n\nX'': %.2f", x2);//exibe resultado de x duas linha
        printf("\n");
    }else{
        // caso valor de delta for negativo, exibe mensagem ao usuario
        printf("\n\nValor de delta negativo, nao foi possivel calcular valor de 'X'.\n");

setbuf(stdin,NULL);//comando para limpar o buffer do programa

menuprincipal();//comando para menu principal
}
setbuf(stdin,NULL);//comando para limpar o buffer do programa

menuprincipal();//comando para abrir o menu principal
}
//janela opcao media ponderada
void mediaponderada(){

//o tipo e as variaveis utilizadas
float mediaponderada1, mediaponderada2, mediaponderada3, pesomediaponderada1, pesomediaponderada2, pesomediaponderada3, mediaponderadaponderada;

    printf("\nDigite a primeira nota: ");
    scanf("%f", &mediaponderada1);//solicita valor e armazena na variavel
    printf("Digite o peso da nota 1: ");
    scanf("%f",&pesomediaponderada1);//solicita valor e armazena na variavel
setbuf(stdin,NULL);//comando para limpar o buffer do programa

    printf("\nDigite a segunda nota: ");
    scanf("%f", &mediaponderada2);//solicita valor e armazena na variavel
    printf("Digite o peso da nota 2: ");
    scanf("%f",&pesomediaponderada2);//solicita valor e armazena na variavel
setbuf(stdin,NULL);//comando para limpar o buffer do programa

    printf("\nDigite a terceira nota: ");
    scanf("%f", &mediaponderada3);//solicita valor e armazena na variavel
    printf("Digite o peso da nota 3: ");
    scanf("%f",&pesomediaponderada3);//solicita valor e armazena na variavel
setbuf(stdin,NULL);//comando para limpar o buffer do programa

    //calculo para realizacao da media ponderada
    mediaponderadaponderada=((mediaponderada1*pesomediaponderada1)+(mediaponderada2*pesomediaponderada2)+(mediaponderada3*pesomediaponderada3))/(pesomediaponderada1+pesomediaponderada2+pesomediaponderada3);

    printf("\nMedia ponderada e: %.2f", mediaponderadaponderada);//exibe resultado ao usuario
    printf("\n");

menuprincipal();//comando para chamar o menu
}
//jana de opcao da tabuada
void tabuadamultiplicacao(){

int tabuada, tabulacaotabuada;//tipo e variaveis usadas

    printf("\nLembrando que so sera multiplicado de 1 a 10 ex:1x1 ate 1x10\n");

    printf("\nDigite a tabuada desejada: ");
    scanf("%i", &tabuada);//recebe e armezena valor na variavel
    printf("\n");
//comando de repeticao para calculo da tabuada
        for(tabulacaotabuada = 1; tabulacaotabuada<=10; tabulacaotabuada++){
            printf("%i x %i = %i\n", tabuada, tabulacaotabuada, tabuada * tabulacaotabuada);//exibe resultado ao usuario
            }
setbuf(stdin,NULL);//comando para limpar o buffer do programa

menuprincipal();//chamar menu principal
}
void limpartela(){

system("cls");//comando para limpar a tela do sistema no Windows
menuprincipal();//chamar menu principal
}
