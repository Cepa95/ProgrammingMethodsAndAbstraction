#include <stdio.h>

void funkcija(int m, int n)
{
	int a, b;
	a = (m % 2 == 0) ? m / 2 : m;
	printf("%d\n", a);

	b = n * 3 + 1;
	printf("%d", b);
}

int main(void)
{
	int m, n;
	printf("Unesite dva prirodna broja:\n");
	scanf("%d %d", &m, &n);
	funkcija(m, n);
	return 0;
}