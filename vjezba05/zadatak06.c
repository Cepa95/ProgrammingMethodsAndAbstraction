#include <stdio.h>

int vodece_nule(unsigned n)
{
    unsigned tridva = sizeof(unsigned) * 8, pomak, brojac = 0, i;
    pomak = 1 << (tridva - 1);
    for (i = 0; i < tridva; i += 1)
    {
        if ((n << i) & pomak)
        {
            break;
        }
        brojac += 1;
    }
    return brojac;
}

int main()
{
    unsigned n = 200, rezultat;
    rezultat = vodece_nule(n);
    printf("broj vodecih nula u broju %d je %d.", n, rezultat);
    return 0;
}