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
//printing reverse tables for a given number
#include <stdio.h>

int main() {
    int n;
    printf("enter your number:\n");
    scanf("%d", &n);
    for(int i=10; i>=1; i--){
      printf("%d\n", n*i);
  }
    return 0;
}
