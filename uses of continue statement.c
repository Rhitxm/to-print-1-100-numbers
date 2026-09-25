//skips to the iteration
//to print numbers from 1-5 except 3
#include <stdio.h>

int main() {
    for(int i=1; i<=5; i++){
        if(i==3){
            continue;
        }
    printf("%d\n", i);
    }
    return 0;
}
// print all numbers from 1-10 except 6
