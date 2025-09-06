#include <stdio.h>
int main() {
    for (int i = 2, c = 0; c < 10; i += 2, c++)
        printf("%d\n", i);
    return 0;
}