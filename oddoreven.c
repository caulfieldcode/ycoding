#include <stdio.h>
//the number of given is odd or even
int main() {
    
    int number,total;
    
    printf("enter your number:");
    scanf("%d", &number);
    
    total= number%2;
    if (total==0) {
        printf("your number is %d and it is even",number);
    }
    
    else {
        printf("your number is %d and it is odd",number);
    }
    return 0;
}
 
