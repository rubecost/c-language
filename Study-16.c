#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escopo das Variáveis - Funções*/

void escrevaNome (); /*Função protótipo*/
int main ()
{
     escrevaNome (); /*Chamando função para dentro do 'int main' */
     escrevaNome ();
     escrevaNome ();

return 0;
}

void escrevaNome () /*Função protótipo pronta*/
{
    printf("Bem vindo a Boson Treinamento em tecnologia\n");
    return 0;
}