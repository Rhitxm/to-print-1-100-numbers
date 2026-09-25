//stops the code at 2
#include <stdio.h>

int main() {
    for(int i=1; i<=5; i++){
        if(i==3){
            break;
        }
        printf("%d\n", i);
    }
    printf("end\n");
    return 0;
}
//keep taking input from the user until he enters an odd number (use do while loop)
#include <stdio.h>

int main() {
    int n;
    do{
        printf("enter number:\n");
        scanf("%d", &n);

        if (n%2!=0){
            break;
        }
    }while(1);
    printf("thank you!!");
    return 0;
}
//keep taking input from user until user enters a number which is a multiple of 7
#include <stdio.h>

int main() {
    int n;
    do{
        printf("enter number:\n");
        scanf("%d", &n);

        if (n % 7==0){
            break;
        }
    }while(1);
    printf("thank you!!");
    return 0;
}
