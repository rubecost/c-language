#include <stdio.h>
#include <stdlib.h>

/*3 Estrutura de Repetição While*/

int main ()
{
int contador = 0; /*Ao iniciar o contador em 1 ele executa o loop while a quantidade de vezes definida, ou até uma ação ser satisfeita.
Ao iniciar com zero ele PODE conta quantas vezes a ação do loop while foi executada*/

float valor, media, total, doido;
total = 0;

/*Primeira mensagem fora do loop para o usuario entrar com a ação a primeira vez*/
printf("Digite um valor(Digite -1 para encerrar): "); 
scanf("%f", &valor);

while ( valor != -1) { /*O loop da função while será pausado quando o valor digítado for -1 */
total = total + valor;
contador++;
printf("Digite um valor(Digite -1 para encerrar): "); /*Mensagem loop*/
scanf("%f", &valor);
}
media = total / contador;
printf("Valor medio: %.2f\n", media);
return 0;
}