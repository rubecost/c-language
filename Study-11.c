#include <stdio.h>
#include <stdlib.h>

/*Aula Desvio condicional simples com if se for verdadeiro*/

int main ()
{
 
float n1, n2;
float media;

printf("Digite a primeira nota \n:");
scanf("%f", &n1);
printf("Digite a segunda nota: \n");
scanf("%f", &n2);
media = (n1 + n2) / 2.0; 

if (media >= 7.0) { /*Se a média for maior ou igual a 7,0, mostre a mensagem Aluno aprovado! se não mostre nada*/
printf("Aluno aprovado!\n\n");
}
return 0;
}
