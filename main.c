#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    char nome;
    int idade;
    int nascimento;
    int maioridade;



    printf("Ola, qual seu nome??\n");
    scanf("%s", nome);
    printf("Qual sua idade?\n");
    scanf("%d", &idade);
    printf("Qual seu ano de nascimento?\n");
    scanf("%d", &nascimento);

    maioridade = idade - nascimento;
    
    return 0;
}
