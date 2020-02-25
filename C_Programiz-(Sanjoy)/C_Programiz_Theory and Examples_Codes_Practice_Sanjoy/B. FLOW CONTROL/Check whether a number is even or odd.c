/// Check whether a number is even or odd

/// C Program to Check Whether a Number is Even or Odd

/// Program to Check Even or Odd

//#include <stdio.h>
//int main() {
//    int num;
//    printf("Enter an integer: ");
//    scanf("%d", &num);
//    // True if num is perfectly divisible by 2
//    if(num % 2 == 0)
//        printf("%d is even.", num);
//    else
//        printf("%d is odd.", num);
//
//    return 0;
//}


/// Practice...

//#include<stdio.h>
//
//int main(){
//    int number,odd,even;
//    scanf("%d",&number);
//
//    if(number%2==0){
//        printf("Number is even.");
//    }
//    else{
//        printf("Number is odd.");
//    }
//    return 0;
//}


/// Program to Check Odd or Even Using the Ternary Operator


//#include <stdio.h>
//int main() {
//    int num;
//    printf("Enter an integer: ");
//    scanf("%d", &num);
//
//    (num % 2 == 0) ? printf("%d is even.", num) : printf("%d is odd.", num);
//    return 0;
//}

/// Practice...

#include<stdio.h>

int main()
{
    int number,odd,even;
    scanf("%d",&number);

    (number%2==0)? printf("Number is even."):printf("Number is odd.");
    return 0;
}
