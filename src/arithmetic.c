#include <stdio.h>

int sum(int a, int b);
int mul(int a, int b);
int sub(int a, int b);

int main() {
    int x, y;
    if ((scanf("%d %d", &x, &y) == 2) && getchar() == '\n') {
        printf("%d %d %d ", sum(x, y), sub(x, y), mul(x, y));
        if (y == 0)
            printf("n/a\n");
        else
            printf("%d\n", x / y);
    } else
        printf("n/a\n");
    return 0;
}

int sum(int a, int b) { return a + b; }

int mul(int a, int b) { return a * b; }

int sub(int a, int b) { return a - b; }