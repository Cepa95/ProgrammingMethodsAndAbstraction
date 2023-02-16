#include<stdio.h>

int is_prime(int n) {
    int i;
    for (i = 2; i <= n - 1; i += 1)
        if (n % i == 0)
            return 0;
    return 1;
}

int prosti_broj(int n) {
    while (1) {
        n = n + 1;
        if (is_prime(n) == 1) {
            return n;
            break;
        }
        if (is_prime(n) == 0) {
            continue;
        }
    }
}

int main() {

    int n;
    printf("Unesite neki n broj:\n");
    scanf("%d", &n);
    printf("Najmanji prosti broj veci od %d je: %d", n, prosti_broj(n));

    return 0;
}
