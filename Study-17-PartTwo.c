#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escopo das Variáveis - Funções*/

void escrevaValor (); 

int main ()
{
    escrevaValor (); 
return 0;
}

void escrevaValor () {   
    int numero = 15;    
    int doblo = numero * 2;
    printf("E o doblo e:%d\n", doblo);
}
