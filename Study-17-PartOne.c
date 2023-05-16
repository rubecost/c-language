#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escopo das Variáveis - Funções*/

void escrevaValor (); 

int numero = 15; /*Variável global pode ser chamada de qualquer lugar do programa*/

int main ()
{
    printf("O Numero e: %d", numero);
    escrevaValor (); 
    
return 0;
}

void escrevaValor () { 
    int doblo = numero * 2;
    printf("\nE o doblo e: %d\n", doblo);
}



