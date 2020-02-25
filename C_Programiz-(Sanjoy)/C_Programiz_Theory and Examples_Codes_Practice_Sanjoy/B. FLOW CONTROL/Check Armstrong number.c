/// Check Armstrong number

/// C Program to Check Armstrong Number

/// Check Armstrong Number of three digits

//#include <stdio.h>
//int main() {
//    int num, originalNum, remainder, result = 0;
//    printf("Enter a three-digit integer: ");
//    scanf("%d", &num);
//    originalNum = num;
//    while (originalNum != 0) {
//        remainder = originalNum % 10;
//        result += remainder * remainder * remainder;
//        originalNum /= 10;
//    }
//    if (result == num)
//        printf("%d is an Armstrong number.", num);
//    else
//        printf("%d is not an Armstrong number.", num);
//    return 0;
//}


///Check Armstrong Number of n digits

//#include <math.h>
//#include <stdio.h>
//int main() {
//    int num, originalNum, remainder, n = 0;
//    float result = 0.0;
//    // printf("Enter an integer: ");
//    // scanf("%d", &num);
//    num = 153;
//    originalNum = num;
//    while (originalNum != 0) {
//        originalNum /= 10;
//        ++n;
//    }
//    originalNum = num;
//    while (originalNum != 0) {
//        remainder = originalNum % 10;
//        result += pow(remainder, n);
//        originalNum /= 10;
//    }
//    if ((int)result == num)
//        printf("%d is an Armstrong number.", num);
//    else
//        printf("%d is not an Armstrong number.", num);
//    return 0;
//}


/// Practice ...

//#include <stdio.h>
//int main()
//{
//    int number, originalNumber, remainder, result = 0;
//    printf("Enter a three digit integer: ");
//    scanf("%d", &number);
//    originalNumber = number;
//    while (originalNumber != 0)
//    {
//        remainder = originalNumber%10;
//        result += remainder*remainder*remainder;
//        originalNumber /= 10;
//    }
//    if(result == number)
//        printf("%d is an Armstrong number.",number);
//    else
//        printf("%d is not an Armstrong number.",number);
//    return 0;
//}



//#include<stdio.h>
//
//void main()
//{
//    int n,result=0,i,remainder;
//    scanf("%d",&n);
//    int originalN=n;
//    while(n!=0)
//    {
//        remainder=n%10;
//        result=result+(remainder*remainder*remainder);
//        n=n/10;
//    }
//    if(result==originalN){
//        printf("%d number is Armstrong Number.",originalN);
//    }
//    else{
//        printf("%d number not is Armstrong Number.",originalN);
//    }
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int number, originalNumber, remainder, result = 0, n = 0 ;
//    printf("Enter an integer: ");
//    scanf("%d", &number);
//    originalNumber = number;
//
//    while (originalNumber != 0)
//    {
//        originalNumber /= 10;
//        ++n;
//    }
//    originalNumber = number;
//    while (originalNumber != 0)
//    {
//        remainder = originalNumber%10;
//        result += pow(remainder, n);
//        originalNumber /= 10;
//    }
//    if(result == number)
//        printf("%d is an Armstrong number.", number);
//    else
//        printf("%d is not an Armstrong number.", number);
//    return 0;
//}


#include<stdio.h>
//#include<math.h>

int main()
{
    int num,result=0,count=0,remainder;
    scanf("%d",&num);

    int originalN=num;

    while(originalN!=0)
    {
        originalN=originalN/10;
        ++count;
    }
    originalN=num;

    while(originalN!=0)
    {
        remainder=originalN%10;

        int k=2,j=remainder;
        while(k<=count && count>1)
        {
            j=j*remainder;
            ++k;
        }
        result=result+j;

        //result+=pow(remainder,count);
        //result+=remainder*remainder*remainder;

        originalN=originalN/10;
    }
    if(result==num)
    {
        printf("%d is an Armstrongnum number.",num);
    }
    else
    {
        printf("%d is not an Armstrongnum number.",num);

    }

    return 0;
}
