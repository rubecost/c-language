#include <stdio.h>
#include <stdlib.h>
#include <math.h>
   
int main ()
{
 
int x, y, z, w;
printf("Digite um numero: ");
scanf("%d", &x);
printf("Digite o valor a somar: ");
scanf("%d", &y);

z = x + y;
w = pow(x,3); /*O método pow eleva o número ao cubo. Você tem que adicionar a biblioteca math.h à função*/

printf("\nA soma de %d com %d equivale a %d \n", x, y, z);
printf("\n%d elevado ao cubo: %d\n", x, w);
    return 0;
}
