#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 10 /*Constante*/

/*Ordenando Arrays com algoritmo Bubblesort*/

int main ()
{
int numeros[TAM];
int i, aux, contador;

printf("Entre com dez numeros para preencher o array, e precione enter apos digitar cada um:\n");
for(i = 0; i < TAM; i++) { 
    scanf("%d", &numeros[i]);
}
printf("Ordem atual dos itens do array:\n");
for (i = 0; i < TAM; i++) { 
    printf("%4d", numeros[i]);
}
/*Algoritimo de ordenação Bubblesort*/
for(contador = 1; contador < TAM; contador++) { 
   for(i = 0; i < TAM - 1; i++) { 
      if ( numeros[i] > numeros[i + 1]) 
 
      {
        aux = numeros[i];
        numeros[i] = numeros[i + 1]; 
        numeros[i + 1] = aux; 
      }
    }
}
  printf("\nElementos do array em ordem crescente:\n");
  for (i = 0; i < TAM; i++) {
    printf("%4d", numeros[i]);
  }
  printf("\n");
  return 0;
}
