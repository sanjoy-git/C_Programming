/// Convert a binary number to octal and vice-versa

/// C Program to Convert Binary Number to Octal and vice-versa

/// Program to Convert Binary to Octal

//#include <math.h>
//#include <stdio.h>
//int convert(long long bin);
//int main() {
//    long long bin;
//    printf("Enter a binary number: ");
//    scanf("%lld", &bin);
//    printf("%lld in binary = %d in octal", bin, convert(bin));
//    return 0;
//}
//int convert(long long bin) {
//    int oct = 0, dec = 0, i = 0;
//    // converting binary to decimal
//    while (bin != 0) {
//        dec += (bin % 10) * pow(2, i);
//        ++i;
//        bin /= 10;
//    }
//    i = 1;
//    // converting to decimal to octal
//    while (dec != 0) {
//        oct += (dec % 8) * i;
//        dec /= 8;
//        i *= 10;
//    }
//    return oct;
//}


/// Practice...

//#include<stdio.h>
//int convert(int num);
//int power(int base,int expo);
//
//int main(){
//    int number;
//
//    printf("Enter the binary number : ");
//    scanf("%d",&number);
//
//    printf("Octal : %d",convert(number));
//
//}
//
//int convert(int num){
//    int rem,dec=0,oct=0,i=0;
//
//    while(num!=0){
//        rem=num%10;
//        dec+=rem*power(2,i);
//        ++i;
//        num=num/10;
//    }
//
//    printf("\ndecimal : %d\n",dec);
//    i=1;
//    while(dec!=0){
//        rem=dec%8;
//        oct=oct+rem*i;
//        i=i*10;
//        dec=dec/8;
//    }
//    return oct;
//}
//
//int power(int base,int expo)
//{
//    int temp=base;
//    while(expo>1)
//    {
//        temp=temp*base;
//        --expo;
//    }
//    if(expo==0){
//        temp=1;
//    }
//    return temp;
//}


//#include<stdio.h>
//
//int power(int base,int expo);
//
//int main()
//{
//    int b,e;
//    scanf("%d%d",&b,&e);
//    printf("%d",power(b,e));
//
//}
//
//int power(int base,int expo)
//{
//    int temp=base;
//    while(expo>1)
//    {
//        temp=temp*base;
//        --expo;
//    }
//    if(expo==0){
//        temp=1;
//    }
//    return temp;
//}



/// Program to Convert Octal to Binary

//#include <math.h>
//#include <stdio.h>
//long long convert(int oct);
//int main() {
//    int oct;
//    printf("Enter an octal number: ");
//    scanf("%d", &oct);
//    printf("%d in octal = %lld in binary", oct, convert(oct));
//    return 0;
//}
//long long convert(int oct) {
//    int dec = 0, i = 0;
//    long long bin = 0;
//    // converting octal to decimal
//    while (oct != 0) {
//        dec += (oct % 10) * pow(8, i);
//        ++i;
//        oct /= 10;
//    }
//    i = 1;
//   // converting decimal to binary
//    while (dec != 0) {
//        bin += (dec % 2) * i;
//        dec /= 2;
//        i *= 10;
//    }
//    return bin;
//}



/// Practice...

#include<stdio.h>
int convert(int num);
int power(int base,int expo);

int main(){
    int number;

    printf("Enter the Octal number : ");
    scanf("%d",&number);

    printf("Binary : %d",convert(number));

}

int convert(int num){
    int rem,dec=0,bin=0,i=0;

    while(num!=0){
        rem=num%10;
        dec+=rem*power(8,i);
        ++i;
        num=num/10;
    }

    printf("\ndecimal : %d\n\n",dec);
    i=1;
    while(dec!=0){
        rem=dec%2;
        bin=bin+rem*i;
        i=i*10;
        dec=dec/2;
    }
    return bin;
}

int power(int base,int expo)
{
    int temp=base;
    while(expo>1)
    {
        temp=temp*base;
        --expo;
    }
    if(expo==0){
        temp=1;
    }
    return temp;
}
