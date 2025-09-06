#include <stdio.h>
int main() {
    int n; double x, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) { scanf("%lf", &x); sum += x; }
    printf("%.2f %.2f", sum, sum/n);
    return 0;
}