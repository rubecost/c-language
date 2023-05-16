#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Estruturas - Definição e Atribuição*/

struct livro /*identificador struct*/
{
    /*As variaveis internas da struct são chamados de membros da estrutura*/
   char nome[30];
   char autor[50];
   int paginas;    
   float preco;
};

struct livro livro1; 

int main ()
{
    printf("Cadastrando Livro!\n");
    printf("\nDigite o nome do Livro:\n");
    gets(livro1.nome); 
    printf("\nDigite o nome do autor do Livro:\n");
    gets(livro1.autor);
    printf("\nDigite o numero de paginas do Livro:\n");
    scanf("%d", &livro1.paginas);
    printf("\nDigite o preco do Livro:\n");
    scanf("%f", &livro1.preco);

    printf("\n O livro \" %s \" possui %d paginas e custa R$ %5.2f\n\n", livro1.nome, livro1.paginas, livro1.preco);
    return 0;
}
