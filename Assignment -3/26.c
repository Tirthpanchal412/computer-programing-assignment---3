#include <stdio.h>
int main() {
    int n,sum=0,temp,d;
    scanf("%d",&n);
    temp=(n<0)?-n:n;
    int orig=temp;
    while(temp!=0){ d=temp%10; sum+=d*d*d; temp/=10; }
    if(sum==orig) printf("Armstrong");
    else printf("Not Armstrong");
    return 0;
}