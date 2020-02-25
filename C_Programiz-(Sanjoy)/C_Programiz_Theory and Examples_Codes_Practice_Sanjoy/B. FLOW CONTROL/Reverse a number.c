/// Reverse a number

/// C Program to Reverse a Number

//#include <stdio.h>
//int main() {
//    int n, rev = 0, remainder;
//    printf("Enter an integer: ");
//    scanf("%d", &n);
//    while (n != 0) {
//        remainder = n % 10;
//        rev = rev * 10 + remainder;
//        n /= 10;
//    }
//    printf("Reversed number = %d", rev);
//    return 0;
//}

/// Practice...

#include<stdio.h>

int main(){
    int n,reversedN=0,remainder;
    printf("Enter an integer number: ");
    scanf("%d",&n);
    int temp=n;

    while(temp!=0){
        remainder=temp%10;
        reversedN=reversedN*10+remainder;
        temp=temp/10;
    }
    printf("%d is reverse no: %d",n,reversedN);

    return 0;
}
