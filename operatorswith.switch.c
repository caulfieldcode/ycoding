#include <stdio.h>

/* dört işlem operatörlerinden birini ve iki reel sayıyı 
girdi olarak alan ve girilen operatöre göre işlem sonucunu
bulan programı yazalım */


int main() {
    float n1,n2;
    char operators;
    
    printf(" enter your operator:\n ");
    scanf("%c",&operators);
    
    printf("enter your numbers: \n");
    scanf("%f %f",&n1,&n2);
    
    switch (operators) { // char olduğu için '' kullandık unutulursa çalışmaz.
        case '+': printf("result %.2f", n1+n2);
        break;
        
        case '-': printf("result %.2f", n1-n2);
        break;
        
        case '/': 
        if (n2!=0) {printf("result %.2f", n1/n2);}
        else {printf("The denominator cannot be zero.");}
        break;
        
        case '*': printf("result %.2f", n1*n2);
        break;
        
        default: printf("wrong operators");
    }
    return 0;
}
