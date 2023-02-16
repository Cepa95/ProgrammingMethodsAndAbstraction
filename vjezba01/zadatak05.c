#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, y, x;
	printf("Upisi raspon vrijednosti od manje prema vecoj:\n");
	printf("Manji broj:");
	scanf_s("%d", &a);
	printf("Veci broj:");
	scanf_s("%d", &b);

	if (a < b) {
		y = a + rand() % (b - a + 1);
		printf("prvi pseudoslucajni broj je: %d\n", y);

		x = a + rand() % (b - a + 1);
		printf("drugi pseudoslucajni broj je: %d\n", x);
		if (y > x)
			printf("Veci broj od pseudoslucajnih brojeva je: %d", y);
		if (x > y)
			printf("Veci broj od pseudoslucajnih brojeva je: %d", x);
		if (x == y)
			printf("Pseudoslucajni brojevi su isti.");
	}
	else
		printf("Upisite pravilni raspon vrijednosti od manje prema vecoj vrijednosti.");

	return 0;
}
