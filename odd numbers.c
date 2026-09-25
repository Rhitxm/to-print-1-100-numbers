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
//program to print odd numbers in a range
#include <stdio.h>
int main(){
    int n;
    printf("enter your first number:\n");
    scanf("%d", &n);
    int m;
    printf("enter your last number:\n");
    scanf("%d", &m);
    int  i;
    for(int i=n; i<=m; i++){
       if(i%2!=0){
           printf("%d\n", i);
       }
    }
    return 0;
}
