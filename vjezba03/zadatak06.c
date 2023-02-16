#include <stdio.h>
#include <stdlib.h>

int check(char n) {

    if (isalpha(n)) {

        if (islower(n)) {
            return 1;
        }
        else if (isupper(n)) {
            return 2;
        }
    }
    else if (isdigit(n)) {
        return 3;
    }
    else {
        return 0;
    }
}

int main() {
    char n = 'n';
    int broj;

    while (n != '.') {
        printf("Unesite neki element:\n");
        scanf(" %c", &n);
        if (n == '.') {
            break;
        }
        switch (check(n)) {

        case(1): {
            printf("malo\n");
            break;

        }
        case(2): {
            printf("veliko\n");
            break;

        }
        case(3): {
            broj = n - '0';
            printf("%d\n", broj * broj);
            break;

        }
        case(0): {
            printf("ni slovo ni znamenka\n");
            break;
        }

        }
    }
    return 0;
}