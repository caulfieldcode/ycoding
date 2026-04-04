#include <stdio.h>
#include <math.h>
//girilen sayının karekökü bir tam sayımı onu yazar
int main() {
    
    int number,square,square1; //int almak burda kritik ondalık sayıları eklememeli 
    
    printf("enter your number:");
    scanf("%d",&number);
    
    square= sqrt(number)*sqrt(number);
    square1= sqrt(number);
    
    if (square==number) {
        printf("squareroot is a integer and this is your squareroot: %d",square1);
    }
    else {
        printf("squareroot is not integer");
    }
    return 0;
}
