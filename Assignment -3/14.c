#include <stdio.h>
int main() {
    double x, sum = 0;
    for (int i = 0; i < 10; i++) { scanf("%lf", &x); sum += x; }
    printf("%.2f %.2f", sum, sum/10.0);
    return 0;
}