#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Ponteiros - Introdução - indireção simples*/

int main ()
{

int *x, valor, y;
valor = 35;
x = &valor; 
y = *x;

printf("Endereco da variavel comum valor: %p\n", &valor); 
printf("lendo o conteudo do ponteiro x: %p\n", x);
printf("Endereco da variavel ponteiro x: %p\n", &x);
printf("Conteudo da variavel apontada por x: %d\n", *x);
printf("Conteudo variavel comum Y: %d\n", y);
printf("Endereco da variavel Y: %p\n", &y);
                     
return 0;
}
