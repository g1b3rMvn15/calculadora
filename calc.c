/* ATIVIDADE FIAP ON - CURSO DEFESA CIBERNETICA CAP-3 C, a linguagem primordial - O futuro se escreve em C
Aluno: Glauber Lopes da Costa Muniz - 1TDCO2021 RM 87682 
PROJETO: CALCULADORA SIMPLES
*/

//BIBLIOTECAS DO SISTEMA

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main()
{
    
    setlocale(LC_ALL, "Portuguese"); //configuracao da acentuacao
    
    /*DECLARACAO DAS VARIAVEIS*/
    int opcao; 
    float numero1;
    float numero2;
    
    /*INICIALIZACAO DAS VARIAIVEIS*/
    opcao=0;
    numero1=0;
    numero2=0;
    
   
   /*ACOES DO SISTEMA*/ 
    do { 
    printf("*******CALCULADORA*********\n"); //MENSAGEM INICIAL
    wprintf(L"1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n\n5 - Sair\n\n"); //MENU DE OPCOES
    scanf("%d", &opcao); //ENTRADA DA OPCAO
    
    if (opcao >0 && opcao < 5) //VALIDACAO DA ENTRADA DA OPCAO
    {
    printf("Digite os valores para serem calculados:\n\n"); // MENSAGEM DA ENTRADA DOS VALORES
    scanf("%f%f", &numero1, &numero2); // ENTRADA DOS VALORES A SEREM CALCULADOS
    }
    
    switch(opcao)
            {
        case 1:
            wprintf(L"Resultado da Soma: %0.2f\n\n", numero1 + numero2); //CALCULA E EXIBE O RESULTADO DA SOMA
            break;
        case 2:
            wprintf(L"Resultado da Subtração: %0.2f\n\n", numero1 - numero2); //CALCULA E EXIBE O RESULTADO DA SUBTRACAO
            break;
        case 3:
            wprintf(L"Resultado da Multiplicação: %0.2f\n\n", numero1 * numero2); //CALCULA E EXIBE O RESULTADO DA MULTIPLICACAO
            break;
        case 4:
            while(numero2 == 0) //VALIDACAO DA ENTRADA PARA EFETUADA A DIVISAO
            {
                wprintf(L"Não existe divisão por zero! \nDigite outro valor: "); //MENSAGEM DE ERRO
                scanf("%f", &numero2); //ENTRADA DE DADOS
            }
            wprintf(L"Resultado da Divisão: %0.2f\n\n", numero1 / numero2); //CALCULA E EXIBE O RESULTADO DA DIVISAO
            break;
        case 5:
            wprintf(L"Obrigado até breve!!!"); //MENSAGEM DE SAIDA
            break;
        default:
            wprintf(L"Opção Inválida!!!\nDigite outra opção: \n;"); // MENSAGEM DE ERRO
            
            }
    
        } while(opcao != 5); // REPETIR ENQUANTO A OPCAO FOR DIFERENTE DE 5
    
}
