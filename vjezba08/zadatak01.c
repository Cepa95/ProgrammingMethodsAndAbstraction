#include <stdio.h>
#define a 1
#define b 5
#define max 8
#define temp(a, b) ((a) > (b)? a : b)
#define temp1(a, b) ((a) < (b)? a : b)
#define maximum(max, x) ((max) > (x) ? max : x)
#define minimum(max, y) ((max) < (y) ? max : y)
#define type int

void max_min(int* maksimalno, int* minimalno)
{
#if defined(temp)
	type x = temp(a, b);
	*maksimalno = maximum(max, x);
	type y = temp1(a, b);
	*minimalno = minimum(max, y);

#else
	printf("nije definiran");

#endif
}

int main(void)
{
	type maksimalno, minimalno;
	max_min(&maksimalno, &minimalno);
	printf("Najveci broj od tri unesena je: %d, a najmanji je: %d", maksimalno, minimalno);

	return 0;
}