#include <stdio.h>
#include <stdlib.h>

/*Aula Desvio Condicional Aninhado com if para verdadeiro, e else para falso, até satisfazer a condição */

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
printf("Aluno aprovado!\n");
}
                     
else { 

if (media >= 5.0) { /*Se a média for maior ou igual a 5.0 mostre a mensagem Aluno em recuperação! */
printf("Aluno em recuperacao!\n");
}
else { /*Se a média for menor que 5.0 mostre a mensagem Aluno reprovado! */
printf ("Aluno reprovado!\n"); 
}
return 0;
}
}