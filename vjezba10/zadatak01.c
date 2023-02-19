#include <stdio.h>

int rekurzija(int n, int m, int suma)
{
    if (n == 0)
    {
        return suma;
    }
    if (n % m == 0)
    {
        suma += n;
        return  rekurzija(n - 1, m, suma);
    }
    if (n % suma != 0)
    {
        return  rekurzija(n - 1, m, suma);
    }
}


int main(void) {

    int n = 20, m = 5, suma = 0;
    printf("%d", rekurzija(n, m, suma));
    return 0;
}