#include <stdio.h>
#include <stdlib.h>

/*1 Estrutura de Repetição While*/
/*loops while, executam uma ação até que uma condição seja atendida e eles sejam instruídos a parar.*/

int main ()
{
 int contador = 1;

 while ( contador <= 10) { /*O loop da função while sera repetido 10 vezes*/
  printf("%d\n", contador);
  contador++;
 }

return 0;
}