// to print numbers from 0-n where user gives us the value of n

#include <stdio.h>

int main() {
    int n;
    printf("enter number:");
    scanf("%d", &n);
    int i=0;
    while(i<=n){
        printf("%d\n", i);
        i++;
    }
   
    return 0;
}
