/// Convert an octal Number to decimal and vice-versa

/// C Program to Convert Octal Number to Decimal and vice-versa

/// Example 1: Program to Convert Decimal to Octal

//#include <stdio.h>
//#include <math.h>
//int convertDecimalToOctal(int decimalNumber);
//int main()
//{
//    int decimalNumber;
//    printf("Enter a decimal number: ");
//    scanf("%d", &decimalNumber);
//    printf("%d in decimal = %d in octal", decimalNumber, convertDecimalToOctal(decimalNumber));
//    return 0;
//}
//int convertDecimalToOctal(int decimalNumber)
//{
//    int octalNumber = 0, i = 1;
//    while (decimalNumber != 0)
//    {
//        octalNumber += (decimalNumber % 8) * i;
//        decimalNumber /= 8;
//        i *= 10;
//    }
//    return octalNumber;
//}

/// Practice...

//#include<stdio.h>
//int converter(int num);
//
//int main()
//{
//    int number;
//    printf("Enter the decimal number : ");
//    scanf("%d",&number);
//
//    printf("octal : %d ",converter(number));
//
//}
//
//int converter(int num)
//{
//    int rem,result=0,i=1;
//    while(num!=0)
//    {
//        rem=num%8;
//        result=result+rem*i;
//        i=i*10;
//        num=num/8;
//    }
//    return result;
//}

/// Example 2: Program to Convert Octal to Decimal

//#include <stdio.h>
//#include <math.h>
//long long convertOctalToDecimal(int octalNumber);
//int main()
//{
//    int octalNumber;
//    printf("Enter an octal number: ");
//    scanf("%d", &octalNumber);
//    printf("%d in octal = %lld in decimal", octalNumber, convertOctalToDecimal(octalNumber));
//    return 0;
//}
//long long convertOctalToDecimal(int octalNumber)
//{
//    int decimalNumber = 0, i = 0;
//    while(octalNumber != 0)
//    {
//        decimalNumber += (octalNumber%10) * pow(8,i);
//        ++i;
//        octalNumber/=10;
//    }
//    i = 1;
//    return decimalNumber;
//}


/// Practice...

#include<stdio.h>
#include<math.h>

int converter(int num);

int main()
{
    int number;
    printf("Enter the Octal number : ");
    scanf("%d",&number);

    printf("decimal : %d ",converter(number));

}

int converter(int num)
{
    int rem,result=0,i=0;
    while(num!=0)
    {
        rem=num%10;
        result=result+(rem*pow(8,i));        // rem*8^i
        ++i;
        num=num/10;
    }
    return result;
}
