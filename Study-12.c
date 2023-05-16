#include <stdio.h>
#include <stdlib.h>

/*Aula Desvio Condicional Composto com if para verdadeiro, e else para falso */

int main ()
{
 
float n1, n2;
float media;

printf("Digite a primeira nota:\n");
scanf("%f", &n1);
printf("Digite a segunda nota:\n");
scanf("%f", &n2);
media = (n1 + n2) / 2.0; 
                     
if (media >= 7.0) { /*Se a média for maior ou igual a 7.0 mostre a mensagem Aluno aprovado! */
printf("Aluno aprovado!\n\n");
}
                     
else { /*Se a média for menor que 7.0 mostre a mensagem Aluno reprovado! */
printf ("Aluno reprovado!\n\n");
}
return 0;
}
