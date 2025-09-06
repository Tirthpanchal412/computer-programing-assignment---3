#include <stdio.h>
#include <float.h>
int main() {
    double x, max = -DBL_MAX, min = DBL_MAX;
    for (int i = 0; i < 100; i++) {
        scanf("%lf", &x);
        if (x > max) max = x;
        if (x < min) min = x;
    }
    printf("%.2f %.2f", max, min);
    return 0;
}