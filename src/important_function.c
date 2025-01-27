#include <math.h>
#include <stdio.h>

int main() {
    float x, ans;
    if (scanf("%f", &x) == 1) {
        ans = 7 * pow(10, -3) * pow(x, 4) +
              ((22.8 * pow(x, (1 / 3)) - 1 * pow(10, 3)) * x + 3) / (x * x / 2) - x * pow((10 + x), (2 / x)) -
              1.01;
        printf("%.1f\n", ans);
    } else
        printf("n/a\n");
    return 0;
}