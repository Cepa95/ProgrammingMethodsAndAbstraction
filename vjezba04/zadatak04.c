#include <stdio.h>
int check(int n) {
	if (n % 2 == 0) {
		return n / 2;
	}
	else
		return 3 * n + 1;
}


int main() {
	int nesto, n, temp;
	printf("Unesite neki broj:\n");
	scanf("%d", &n);
	while (n != 1) {
		nesto = check(n);
		temp = nesto;
		n = nesto;
		printf("%d\n", nesto);
	}
	return 0;
}