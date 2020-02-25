/// Convert a binary number to decimal and vice-versa

/// C Program to Convert Binary Number to Decimal and vice-versa

/// Program to convert binary to decimal


//#include <math.h>
//#include <stdio.h>
//
//int convert(long long n);
//int main() {
//    long long n;
//    printf("Enter a binary number: ");
//    scanf("%lld", &n);
//    printf("%lld in binary = %d in decimal", n, convert(n));
//    return 0;
//}
//int convert(long long n) {
//    int dec = 0, i = 0, rem;
//    while (n != 0) {
//        rem = n % 10;
//        n /= 10;
//        dec += rem * pow(2, i);
//        ++i;
//    }
//    return dec;
//}


/// Practice ...


//#include<stdio.h>
//
//int convert(long long num);
//
//int main()
//{
//long long num;
//printf("Enter a binary number : ");
//scanf("%lld",&num);
//
//printf("%lld in binary : %d in decimal",num,convert(num));
//
//return 0;
//}
//
//int convert(long long num)
//{
//    int rem,i=0,dec=0;
//
//    while(num!=0){
//        rem=num%10;
//        dec=dec+(rem*pow(2,i));`          // rem*2^i
//        ++i;
//        num=num/10;
//    }
//    return dec;
//}


/// Program to convert decimal to binary

//#include <math.h>
//#include <stdio.h>
//long long convert(int n);
//int main() {
//    int n;
//    printf("Enter a decimal number: ");
//    scanf("%d", &n);
//    printf("%d in decimal = %lld in binary", n, convert(n));
//    return 0;
//}
//long long convert(int n) {
//    long long bin = 0;
//    int rem, i = 1, step = 1;
//    while (n != 0) {
//        rem = n % 2;
//        printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", step++, n, rem, n / 2);
//        n /= 2;
//        bin += rem * i;
//        i *= 10;
//    }
//    return bin;
//}


/// Practice...

//#include<stdio.h>
//long long convert(int num);
//
//int main()
//{
//    int number;
//    printf("Enter a decimal number : ");
//    scanf("%d",&number);
//    printf("%d in decimal : %lld in binary",number,convert(number));
//}
//
//long long convert(int num)
//{
//    long long bin=0;
//    int rem,i=1,step=1;
//
//    while(num!=0)
//    {
//        rem=num%2;
//
//        printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", step++, num, rem, num / 2);
//
//        bin+=rem*i;
//        i=i*10;
//        num=num/2;
//    }
//    return bin;
//}

#include<stdio.h>

int main()
{
    int num,rem,res=0;
    scanf("%d",&num);

    int temp=num,i=1;

    while(temp!=0)
    {
        rem=temp%10;
        //res=res+rem*i;
        //i=i*10;
        res=res*10+rem;
        temp=temp/10;
        printf("dec = rem: %d res: %d num : %d\n",rem,res,temp);
    }
    printf("%d\n\n",res);

    res=0,temp=num;
    i=1;
    while(temp!=0)
    {
        rem=temp%2;

        res=res+rem*i;
        i=i*10;
        //res=res*10+rem;

        temp=temp/2;
        printf("binari = rem: %d res: %d num : %d\n",rem,res,temp);
    }
    printf("%d",res);

    return 0;
}
