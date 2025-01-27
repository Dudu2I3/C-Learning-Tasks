#include <stdio.h>

int max(int a, int b);

int main() {
    int x, y;
    if ((scanf("%d %d", &x, &y) == 2) && getchar() == '\n')
        printf("%d\n", max(x, y));
    else
        printf("n/a\n");
    return 0;
}

int max(int a, int b) {
    if (b > a) return b;
    return a;
}