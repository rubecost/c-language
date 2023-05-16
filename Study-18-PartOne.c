#include <stdio.h>
#include <stdlib.h>

/*Array unidimensional"Vetor"- Declaração e atribuição*/

int main ()
{

float notas[4] = {7.5,8.0,6.5,3.5};
int i;

for (i = 0; i < 4; i++) {
    printf("Nota %d = %4.2f\n", i + 1, notas[i]);
}

return 0;

}
