#include <stdio.h>
#include <string.h>
//kitap siparişi ve indirim programı
int main()
{
   
int bookprice, orderquantity, question;
float discountrate,sum;

printf(" are you have a discountrate?(yes:1,no:0):");
scanf("%d", &question);

if (question==1) {
    printf("enter your book price and quantity:");
    scanf("%d %d", &bookprice, &orderquantity);
    
    printf("enter your discountrate:");
    scanf("%f", &discountrate);
    
    sum= (bookprice*orderquantity)-(bookprice*orderquantity)*(discountrate/100);
    printf("this is your sum of shop price: %.2f", sum);
}

else {
    printf("enter your book price and quantity:");
    scanf("%d %d", &bookprice, &orderquantity);
    
    sum= bookprice*orderquantity;
    
    printf("this is your sum of shop price: %.2f", sum);
}

return 0;

}
