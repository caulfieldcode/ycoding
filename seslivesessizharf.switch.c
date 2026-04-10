#include <stdio.h>

//sesli ve sessiz harf bulma uygulaması
//kulanıcı harf girsin sesli yada sessiz olduğu yazısn ekrana
int main() {
    
    char letter; //bu bir dizi olmadığı için letter[2] yazamayız bu array olur.
    
    printf("enter your letter:\n");
    scanf(" %c",&letter);
    
    // a, e, ı, i, o, ö, u, ü 
    // b, c, ç, d, f, g, ğ, h, j, k, l, m, n, p, r, s, ş, t, v, y, z
    
    switch (letter) { //burdada 'letter' yazmaya gerek yoktur, e harfini girdiğimizde letter=69 olur ve caselerde 69 arar. oda vardır.
        case 'a':
        case 'e': //ascii degeri:69
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': printf(" %c sesli harfdir",letter);
        break;
        
        default: {
        if((('A'<=letter) && (letter<= 'Z')) || ('a'<=letter) && (letter<='z')) { printf(" %c sessiz harfdir",letter);} // if (a<b<c) seklinde yazılamaz ascii degerleri icinde '' kullanmayı unutma. 
        
         /*A ile z arasında özel karakterlerde vardır A=65 Z=90 ,,, a=97 z=122 ,, ^ =94  _ =95 ,,,
        bu yüzden A<letter<z şeklinde yazmadım aralarda özel karakterler var. ama A-Z arasında ve a-z arasında sadece harfler bulunur.
        bu yuzden || ikisinden birinin arasında olması yeterli diye bu işareti kullandım.*/
        
        // char letter; dendiğinde a harfine bastığımızda otomatik olarak a nın ascii değerini saklar yani letter=65 dir, tekrar tırnak kullanmaya gerek yok.
        else { printf("bu bir harf değil");}
        }
    }
    return 0;
        
    }
