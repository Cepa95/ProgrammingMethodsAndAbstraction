#include <stdio.h>

int countn(int n) {
	int a1 = 10, d = 5;

	while (n != 1) {
		a1 += d;
		n -= 1;
	}
	return a1;
}

int main() {
	int n, result;
	printf("Unestite n-ti clan niza:\n");
	scanf("%d", &n);
	result = countn(n);
	printf("%d. clan iz toga niza je %d", n, result);

	return 0;
}