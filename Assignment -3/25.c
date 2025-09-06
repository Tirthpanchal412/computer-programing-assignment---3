#include <stdio.h>
int main() {
    int n,rev=0,temp;
    scanf("%d",&n);
    temp=(n<0)?-n:n;
    int orig=temp;
    while(temp!=0){ rev=rev*10+temp%10; temp/=10; }
    if(rev==orig) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}