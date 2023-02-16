#include <stdio.h>

void suma_produkt(int n, int* ps, int* pp)
{
	int ostatak = 0;
	*ps = 0;
	*pp = 1;
	while (n != 0)
	{
		ostatak = n % 10;
		*ps += ostatak;
		*pp *= ostatak;
		n /= 10;
	}
}

int main(void)
{
	int n = 1234;
	int ps, pp;
	suma_produkt(n, &ps, &pp);
	printf("%d %d", ps, pp);
	return 0;
}