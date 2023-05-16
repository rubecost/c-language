#include <stdio.h>
#include <stdlib.h>

/*2 Estrutura de Repetição While*/

int main ()
{
int contador;
float media, nota, total;
total = 0;
contador = 1; /*Ao iniciar o contador em 1 ele executa o loop while a quantidade de vezes definida, ou até uma ação ser satisfeita.
Ao iniciar com zero ele conta quantas vezes a ação do loop while foi executada*/

while ( contador <= 4) { /*O loop da função while sera repetido 4 vezes*/
printf("Digite a nota: ");
scanf("%f", &nota);
total = total + nota;
contador++;
}
media = total / 4;
printf("Nota media: %.2f\n", media);
return 0;
}