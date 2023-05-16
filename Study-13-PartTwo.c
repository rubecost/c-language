#include <stdio.h>
#include <stdlib.h>

/*Aula Desvio Condicional Aninhado com if para verdadeiro, else para falso, 
ou else if juntos até satisfazer a condição facilitando a compreesão em programas extensos*/

int main ()
{
 
float n1, n2;
float media;

printf("Digite a primeira nota:\n");
scanf("%f", &n1);
printf("Digite a segunda nota:\n");
scanf("%f", &n2);
media = (n1 + n2) / 2.0; 
                     
if (media >= 7.0) { 
printf("Aluno aprovado!\n");
}
  /*OBS se a condição if anterior for falsa posso adicionar outras condições com else if até
  satisfazer a minha condição ou finalizar com simplesmente else para falso */                   
else if (media >= 5.0) { 
printf("Aluno em recuperacao!\n");
}

else { 
printf ("Aluno reprovado!\n"); 
}
return 0;
}