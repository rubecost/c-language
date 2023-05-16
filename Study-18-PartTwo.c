#include <stdio.h>
#include <stdlib.h>

/*Array unidimensional"Vetor"- Declaração e atribuição*/

int main ()
{
float notas[4];
int i;

for (i = 0; i < 4; i++) {
    printf("Entre com a %d nota do aluno:\n", i+1);
    scanf("%f", &notas[i]); 
}

/*Mostrando na tela as notas armazenadas pelo array*/
for (i = 0; i < 4; i++) {
    printf("Nota %d = %4.2f\n", i + 1, notas[i]);
}

return 0;
}
