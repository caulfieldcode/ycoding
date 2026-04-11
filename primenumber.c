#include <stdio.h>

int main() {
// asal sayı bulan program
int n;

printf("enter your number:");
scanf("%d",&n);

int sayı=n/2;

while(2<=sayı) {
    if(n%sayı==0)  {
        printf("asal değil ");
     return 0;
    }
    sayı--;
    }
    
    printf("asaldır");

return 0;
}
