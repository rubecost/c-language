#include <stdio.h>
#include <stdlib.h>

/*Estrutura de Repetição For com While*/

int main ()
{
int cont;
char cod;
float nota, media, total;
total = 0;
cod = 'C';
while ( cod != 'F') /*Ao digitar o caractere F finaliza o loop while*/
{
for( cont = 1; cont <= 4; cont++) {
  printf("Digite a nota:");
  scanf("%f", &nota);
  total = total + nota;
 }
media = total / 4;
printf("Nota media: %.2f\n\n", media);
total = 0; /*Zerando o valor dado a variável 'total e nota' detro do loop while para calcular outro aluno */
nota = 0;
printf("Deseja calcular a media de mais algum aluno? Presione qualquer tecla para continuar ou F para finalizar\n");
cod = getche(); /*Função getche captura de tecla digítada*/
}
return 0;
}