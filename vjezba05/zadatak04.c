#include <stdio.h>

int funkcija(int n, int k)
{

    return (n | (1 << k));

}

void setiran(int n, int k)
{
    if (n & (1 << (k)))
        printf("Broj je setiran\n");
    else
        printf("Broj nije setiran\n");
}

int main()
{
    int n = 200, k = 2, a;

    a = funkcija(n, k);
    printf("%d\n", a);
    setiran(a, k);
    return 0;
}