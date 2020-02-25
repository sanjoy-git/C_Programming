/// Calculate the power of a number

/// C Program to Calculate the Power of a Number

///Power of a Number Using the while Loop

//#include <stdio.h>
//int main() {
//    int base, exp;
//    long long result = 1;
//    printf("Enter a base number: ");
//    scanf("%d", &base);
//    printf("Enter an exponent: ");
//    scanf("%d", &exp);
//    while (exp != 0) {
//        result *= base;
//        --exp;
//    }
//    printf("Answer = %lld", result);
//    return 0;
//}

/// Power Using pow() Function

//#include <math.h>
//#include <stdio.h>
//int main() {
//    double base, exp, result;
//    printf("Enter a base number: ");
//    scanf("%lf", &base);
//    printf("Enter an exponent: ");
//    scanf("%lf", &exp);
//    // calculates the power
//    result = pow(base, exp);
//    printf("%.1lf^%.1lf = %.2lf", base, exp, result);
//    return 0;
//}

/// Practice...

//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//    int base,exponent;
//    long long result;
//    printf("Enter a base number: ");
//    scanf("%d",&base);
//
//    printf("Enter a exponent number: ");
//    scanf("%d",&exponent);
//
//    result=pow(base,exponent);
//
//    printf("%d pow %d=%lld",base,exponent,result);
//
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int base, exponent;
//    long long result = 1;
//    printf("Enter a base number: ");
//    scanf("%d", &base);
//    printf("Enter an exponent: ");
//    scanf("%d", &exponent);
//    while (exponent != 0)
//    {
//        result *= base;
//        --exponent;
//    }
//    printf("Answer = %lld", result);
//    return 0;
//}


#include<stdio.h>

int main()
{
    int base,exponent;
    long long result=1;
    printf("Enter a base number: ");
    scanf("%d",&base);

    printf("Enter a exponent number: ");
    scanf("%d",&exponent);
    int exp = exponent;

    for(;exponent!=0;exponent--)
    {
        result=result*base;
    }
    printf("%d pow %d=%lld",base,exp,result);

    return 0;
}
