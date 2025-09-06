#include <stdio.h>
int main() {
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 1, c = 0; c < n; i += 2, c++) sum += i;
    printf("%d", sum);
    return 0;
}