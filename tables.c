//to print tables of a given number
#include <stdio.h>

int main() {
   int n;
    printf("input the number here:\n");
    scanf("%d", &n);
    int i;
    for (i=0; i<= 10; i++){
        printf("%d\n", n*i);
    }
}
