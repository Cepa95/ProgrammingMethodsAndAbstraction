#include <stdio.h>

int check(int n) {
	if (n % 2 == 0) {
		return n / 2;
	}
	else
		return 3 * n + 1;
}

int main() {
	int nesto, n;
	printf("Unesite neki broj:\n");
	scanf("%d", &n);
	nesto = check(n);
	printf("%d", nesto);

	return 0;
}