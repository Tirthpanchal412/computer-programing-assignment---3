#include <stdio.h>
int main() {
    int n,rev=0;
    scanf("%d",&n);
    int temp=(n<0)?-n:n;
    while(temp!=0){ rev=rev*10+temp%10; temp/=10; }
    if(n<0) rev=-rev;
    printf("%d",rev);
    return 0;
}