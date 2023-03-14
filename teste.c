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


// segundo teste
    int peso=0;            //se imc<18 abaixo do peso. Entre 18 e 25 sarado. Entre 26 e 30 acima. > que 30 obeso.
    float imc=0,altura=0;
    printf("Vamos calcular seu IMC (Indice de Massa Corporea)? Então...\n\nDigite seu peso: ");
    scanf("%d",&peso);
    printf("Muito bem, agora qual sua altura? ");
    scanf("%f",&altura);
    imc=peso/(altura*altura);
    if (imc<18) printf("Seu IMC é %f ,Você esta abaixo do peso.\n\n",imc);
    else if (imc<=25) printf("Seu IMC é %f ,Parabens, Você esta sarado.\n\n",imc);
    else if (imc<=30) printf("Seu IMC é %f ,Atencao. Você esta acima do peso.\n\n",imc);
    else if (imc>30)  printf("Seu IMC é %f ,Você é OBESO cara, larga a Pizza e X-burguer\n\n",imc);
 


}