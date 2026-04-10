#include <stdio.h>

/* switch ile sayının tek ya da çift olduğunu bulma */


int main() {
    
    long int n1;
    int result=0;
    
    printf("enter your number:\n");
    scanf("%ld",&n1);
    
    // 33%2 = 1,,,, 39494%2=0
    
    result=n1%2;
    
    switch(result) {
        
        case 1: printf("your number is odd");
        break;
        
        case 0: printf("your number is even");
        break;
        
        default: printf("Invalid input");
    }
    
    return 0;
}
