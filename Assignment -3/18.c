#include <stdio.h>
int main() {
    int boys=0, girls=0; char c;
    for(int i=0;i<50;i++){
        scanf(" %c",&c);
        if(c=='M' || c=='m') boys++;
        else if(c=='F' || c=='f') girls++;
    }
    printf("%d %d", boys, girls);
    return 0;
}