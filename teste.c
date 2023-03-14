#include <stdio.h>

int main()
{
    int anoNasc, anoNasc2, anoAtual, idade, idade2, somaIdade;
    
    
    printf("Vamos somar a idade de duas pessoas, mas primeiro\n");
    printf("digite o ano atual: ");
    scanf("%d",&anoAtual);
    printf("Agora digite o ano de nascimento da pessoa 1: ");
    scanf ("%d",&anoNasc);
    printf("Agora digite o ano de nascimento da pessoa 2: ");
    scanf("%d",&anoNasc2);
    
    idade = anoAtual - anoNasc;
    idade2 = anoAtual - anoNasc2;
    somaIdade = idade + idade2;
    
    printf("A idade da pessoa 1 é: %d \n",idade);
    printf("E da segunda pessoa é: %d \n",idade2);
    printf("A soma das duas idades é %d",somaIdade);
}