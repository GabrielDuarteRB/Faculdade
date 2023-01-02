#include <stdio.h>

int main ()
{

    char string[100];
    int tamanho;

    printf ("Digite uma string: ");
    scanf ("%s", &string);

    for (tamanho = 0; tamanho < 100 && string[tamanho] != '\0'; tamanho++);

    printf ("Tamanho da string: %d", tamanho);

    getchar ();
    getchar ();

    return 0;
}