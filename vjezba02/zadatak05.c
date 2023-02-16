#include <stdio.h>

int main(void) {
	int a, b, n, zbroj = 0, umanji;
	printf("Unesite interval i n-broj:\n");
	scanf_s("%d %d %d", &a, &b, &n);
	umanji = a;
	for (a; a <= b; a = a + n) {
		zbroj = zbroj + a;
	}
	printf("%d", zbroj - umanji);
	return 0;
}

