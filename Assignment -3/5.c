#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1, c = 0; c < n; i += 2, c++)
        printf("%d\n", i);
    return 0;
}