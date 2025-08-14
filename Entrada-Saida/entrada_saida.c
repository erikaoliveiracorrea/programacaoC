#include <stdio.h>

int main (){
    
    int idade = 25;
    float altura = 1.75;
    char opcao = 'S';
    char nome[20] = "Erika";

/* printf("A idade do %s é: %d\n" , nome, idade);
    printf("A nome é: %s \n" , nome);
    printf("A idade é: %i\n" , idade);
    printf("A altura é: %.2f\n" , altura);
    printf("A opção é: %c\n" , opcao);  */

    printf("Digite sua idade: ");
    scanf("%d", &idade); // ele espera digitar( IMPRIMI )
    printf("Sua idade é: %d \n", idade);
    
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Sua altura é: %.2f\n", altura);

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Seu nome é: %s\n", nome);

    printf("Digite a opção: ");
    scanf(" %c", &opcao);
    printf("Sua opção é: %c\n", opcao);

} 

/*
%d: Imprime um inteiro no formato decimal.
 
%i: Equivalente a %d.
 
%f: Imprime um número de ponto flutuante no formato padrão.
 
%e: Imprime um número de ponto flutuante na notação científica.
 
%c: Imprime um único caractere.
 
%s: Imprime uma cadeia (string) de caracteres.


*/ 