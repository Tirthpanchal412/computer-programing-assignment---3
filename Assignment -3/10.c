#include <stdio.h>
int main() {
    int n;
    unsigned long long fact = 1;
    scanf("%d", &n);
    if (n < 0) return 0;
    for (int i = 2; i <= n; i++) fact *= i;
    printf("%llu", fact);
    return 0;
}