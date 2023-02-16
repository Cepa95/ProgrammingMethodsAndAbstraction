#include <stdio.h>

int main(void) {
	int m, n, i, j;
	m = 7;
	n = 5;
	for (i = 1; i <= m; i = i + 1) {

		for (j = 1; j <= n; j = j + 1) {
			if ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0))
				printf(" *");
			else
				printf("  ");
		}
		printf("\n");
	}

	return 0;
}
