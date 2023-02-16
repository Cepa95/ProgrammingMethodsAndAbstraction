#include <stdio.h>
#include <stdlib.h>

void funkcija(int prvi_niz[], int drugi_niz[], int treci_niz[], int* duljina, int a, int b)
{
    int size;
    int* mal;

    int i, j, it, iz, iw;

    printf("Unesite duljinu niza:\n");
    scanf("%d", &size);
    mal = (int*)malloc((a + b + size + 1) * sizeof(int));
    for (i = 0; i < a; i += 1)
    {
        mal[i] = prvi_niz[i];
    }

    for (j = 0; j < size; j += 1)
    {
        scanf("%d", &drugi_niz[j]);
    }
    int brojac = -1;
    for (it = a; it < (a + size); it += 1)
    {
        brojac += 1;
        mal[it] = drugi_niz[brojac];
    }

    int brojac1 = -1;
    for (iz = (a + size); iz < (b + size + a); iz += 1)
    {
        brojac1 += 1;
        mal[iz] = treci_niz[brojac1];
    }
    for (iw = 0; iw < (b + size + a); iw += 1)
    {
        printf("%d\t", mal[iw]);
    }
    *duljina = size + a + b;
    free(mal);

}

int main(void)
{
    int prvi_niz[] = { 1,2,3 };
    int a = sizeof prvi_niz / sizeof prvi_niz[0];
    int drugi_niz[1024];
    int treci_niz[] = { 4,5,6 };
    int b = sizeof treci_niz / sizeof treci_niz[0];
    int duljina;
    funkcija(prvi_niz, drugi_niz, treci_niz, &duljina, a, b);
    printf("\nDuljina ovog niza iznosi: %d", duljina);
    return 0;
}