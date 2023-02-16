#include <stdio.h>

void unos(int a[], int n)
{
	int i;
	printf("Upisite brojeve koji ce se nalaziti u nizu:\n");
	for (i = 0; i < n; i += 1)
		scanf("%d", &a[i]);
}

void provjera(int a[], int n1, int n2)
{
	int j;
	printf("\nBrojevi unutar zeljenog parametra su:");
	for (j = n1 + 1; j < n2; j += 1)
	{
		printf(" %d\t", a[j]);
	}
	printf("\n");
}

void suma_produkt(int a[], int n1, int n2, int* ps, int* pp)
{
	int i, * broj;
	*ps = 0;
	*pp = 1;

	for (i = n1 + 1; i < n2; i += 1)
	{
		*ps += a[i];
		*pp *= a[i];
	}
}

int main(void)
{
	int n1, n2;
	int ps, pp;
	int n = 10, a[10];
	unos(a, n);
	printf("Unesite dva broja koja su manja od broja clanova niza:\n");
	scanf("%d %d%", &n1, &n2);
	provjera(a, n1, n2);
	suma_produkt(a, n1, n2, &ps, &pp);
	printf("\nSuma i produkt elemenata izmedu dva upisana broja su: %d, %d", ps, pp);
	return 0;
}