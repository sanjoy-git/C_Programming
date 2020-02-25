/// Check whether a number is a palindrome or not

/// C Program to Check Whether a Number is Palindrome or Not

///Program to Check Palindrome


//#include <stdio.h>
//int main() {
//    int n, reversedN = 0, remainder, originalN;
//    printf("Enter an integer: ");
//    scanf("%d", &n);
//    originalN = n;
//    // reversed integer is stored in reversedN
//    while (n != 0) {
//        remainder = n % 10;
//        reversedN = reversedN * 10 + remainder;
//        n /= 10;
//    }
//    // palindrome if orignalN and reversedN are equal
//    if (originalN == reversedN)
//        printf("%d is a palindrome.", originalN);
//    else
//        printf("%d is not a palindrome.", originalN);
//    return 0;
//}


/// Practice...


//#include <stdio.h>
//int main()
//{
//    int n, reversedInteger = 0, remainder, originalInteger;
//    printf("Enter an integer: ");
//    scanf("%d", &n);
//    originalInteger = n;
//    // reversed integer is stored in variable
//    while( n!=0 )
//    {
//        remainder = n%10;
//        reversedInteger = reversedInteger*10 + remainder;
//        n /= 10;
//    }
//    // palindrome if orignalInteger and reversedInteger are equal
//    if (originalInteger == reversedInteger)
//        printf("%d is a palindrome.", originalInteger);
//    else
//        printf("%d is not a palindrome.", originalInteger);
//
//    return 0;
//}

#include<stdio.h>

int main(){
    int num,reversedint=0,remainder,originalint;
    printf("Enter an integer: ");
    scanf("%d",&num);
    originalint=num;

    while(num!=0){
        remainder=num%10;
        reversedint=reversedint*10+remainder;
        num=num/10;
    }
    if(reversedint==originalint){
        printf("%d is a palindrome number.",originalint);
    }
    else{
        printf("%d is not a palindrome number.",originalint);
    }
    return 0;

}
