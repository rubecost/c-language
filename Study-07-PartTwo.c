#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int x = 450;
    float f = 250.12345;
    char s [] = "Boson treinamentos";
    
printf("Precisao em inteiros:\n");
printf("%10.5d\n", x);
printf("%15.12d\n", x);
printf("\n\nPrecisao em ponto-flutuantes:\n");
printf("%8.2f\n", f);
printf("\n\nPrecisao em literais\n");
printf("%10.5s\n", s);
    return 0;
}
