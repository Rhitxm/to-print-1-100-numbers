//taking input from user until user enters an odd number
//using do while loop
#include <stdio.h>

int main() {
    int n;
    do{
        printf("enter a number:\n");
        scanf("%d", &n);
        if (n%2!=0){
            break;
        }
    }while(1);
    printf("thank you!");
    return 0;
}
// print all the odd numbers from 0 to 50
#include <stdio.h>

int main() {
    for( int i=5; i<=50; i++){
        if(i%2!=0){
            printf("%d\n", i);
        }
    }
    return 0;
}
