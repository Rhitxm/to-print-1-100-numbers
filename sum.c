//print the sum of first n natural numbers
#include <stdio.h>

int main() {
  int n;
    printf("enter your number:\n");
    scanf("%d", &n);
    int sum=0;
    int i;
    for (int i=1; i<=n; i++){
        sum=sum+i;
    }
    printf("%d\n", sum);
    return 0;
        
    
}
    
