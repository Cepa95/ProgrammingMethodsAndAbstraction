#include <stdio.h>

void unos(int* a, int n)
{
	int* q = a;
	printf("Unos niza:\n");
	for (q = a; q != a + n; ++q)
	{
		scanf("%d", q);
	}

}

void ispis(int* a, int n)
{
	int* q = a;
	printf("\nIspis niza:");
	for (q = a; q != a + n; ++q)
	{
		printf("%d\t", *q);
	}
	printf("\n");
}

float prosjek_niza(int* a, int n)
{
	float s = 0;
	int* q = a;
	while (q != a + n)
	{
		s += *q++;
	}
	return s / n;
}


int main()
{
	int n = 5, a[5];
	unos(a, n);
	ispis(a, n);
	printf("\nProsjek upisanog niza iznosi: %f", prosjek_niza(a, n));
	return 0;
}