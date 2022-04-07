#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Declaclaraciones

    int n = 0;
    int m = 0;
    int w = 0;

    // Solicitud de tamaño de la población inicial

    do
    {
        n = get_int("tamaño de la población inicial: ");
    }
    while (n < 9);

    // Solicitud de tamaño de la población final

    do
    {
        m = get_int("tamaño de la poblacion final: ");
    }
    while (m < n);

    // calcular el número de años que tarda en incrementar la población

    while (n < m)
    {
        n = n + (n / 3) - (n / 4);
        w++;
    }

    // Imprime el número de años
    printf("Years: %i\n ", w);

    return 0;
}