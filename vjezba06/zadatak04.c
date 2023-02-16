#include <stdio.h>

int suma(int a[], int n)
{
	int i, sum = 0;
	for (i = 1; i <= n; i += 2)
	{
		sum += a[i];
	}
	return sum;
}

int main(void)
{
	int a[] = { 4, 7, 8, 2, 3, 5, 1, 5, 6, 11 };
	int n = sizeof(a) / sizeof(a[0]);
	printf("Suma elemenata niza na neparnim mjestima u nizu iznosi: %d\n", suma(a, n));

	return 0;

}