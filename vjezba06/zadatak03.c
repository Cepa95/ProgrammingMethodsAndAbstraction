#include <stdio.h>

void unos(int a[], int n)
{
	int i;
	for (i = 0; i < n; i += 1)
		scanf("%d", &a[i]);
}


void ispis(int a[], int n)
{
	int j;
	for (j = 0; j < n; j += 1)
	{
		printf("%d\t", a[j]);
	}
	printf("\n");
}


float prosjek_niza(int a[], int n)
{
	float s = 0;
	int i;
	for (i = 0; i < n; i += 1)
	{
		s += a[i];
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