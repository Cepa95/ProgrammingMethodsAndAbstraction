#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

void provjera(int* tocka, int duljina, int trazena_tocka)

{
    int* pointer;

    qsort(tocka, duljina, sizeof(int), compare);
    for (int i = 0; i < duljina; i += 1)
    {
        printf("%d\n", tocka[i]);
    }

    pointer = (int*)bsearch(&trazena_tocka, tocka, duljina, sizeof(int), compare);
    if (pointer != NULL)
    {
        printf("Unesena tocka %d se nalazi u nizu tocaka.\n", *pointer);
    }
    else
    {
        printf("Tocka %d se ne nalazi u nizu tocaka.\n", trazena_tocka);
    }
}

int main(void)

{

    int trazena_tocka = 320;
    int tocka[] = { 11, 52, 123,68, 100, 88, 69, 333, 87, 320, 622, 55, 99, 62, 13, 891, 236, 31, 52, 89, 25 };
    int duljina = sizeof tocka / sizeof tocka[0];

    provjera(tocka, duljina, trazena_tocka, compare);
    return 0;
}