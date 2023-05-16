#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Ponteiros - Introdução - Indireção Múltipla*/

int main ()
{

    int a = 40;
    int *pont1;
    int **pont2; 

    pont1 = &a;/*O pont1 está apontando para o a */
    pont2 = &pont1;/*O pont2 está apontando para o pont1*/

    printf("Endereco da variavel comum a e: %p\n", &a); 
    printf("O endereco do pont1 e: %p\n", &pont1);
    printf("O endereco do pont2 e: %p\n", &pont2);
    printf("O endereco apontado por pont1 e: %p\n", pont1);
    printf("O endereco apontado por pont2 e: %p\n", pont2);
    printf("E o Conteudo armazenado em a, apontado por pont1 e: %d\n", *pont1);  
    printf("E o Conteudo armazenado em a, apontado por pont2 e: %d\n", **pont2); 

     return 0;
}
