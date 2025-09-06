#include <stdio.h>
int main() {
    char name[100];
    int n;
    scanf("%s", name);
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        printf("%s\n", name);
    return 0;
}