#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n==0) return 0;
    int m=(n<0)?-n:n;
    for(int i=1;i<=m;i++) if(m%i==0) printf("%d ",i);
    return 0;
}