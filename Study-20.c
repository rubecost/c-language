#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define NUM_L 5
#define NUM_C 4

/*Matrizes - Declaração e Inicialização*/

int main ()
{
int linha, coluna;
float notas[NUM_L][NUM_C] = {{ 8.5, 9.5, 7.8, 2.4 },
                             { 5.8, 5.2, 9.1, 4.7 },
                             { 7.2, 4.7, 3.1, 1.8 },
                             { 8.8, 9.7, 7.3, 4.4 },
                             { 7.7, 8.8, 9.9, 6.1 }};

                             
printf("Exibindo o conteudo da matriz declarada e iniciada\n\n");
for(linha = 0; linha < NUM_L; linha++) {
    for(coluna = 0; coluna < NUM_C; coluna++) {
        printf("%5.1f", notas[linha][coluna]);
    }
    printf("\n");
}   
printf("\nValor do elemento na 2 linha, e 3 coluna: %4.2f\n\n", notas [1][2]); 
                     
return 0;
}
