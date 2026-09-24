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
// doing the same thing using for loop
#include <stdio.h>

int main() {
    int n;
    printf("enter number:");
    scanf("%d", &n);
    int i;
    for(i=0; i<=n; i++){
        printf("%d\n", i);
    }
   
    return 0;
}
