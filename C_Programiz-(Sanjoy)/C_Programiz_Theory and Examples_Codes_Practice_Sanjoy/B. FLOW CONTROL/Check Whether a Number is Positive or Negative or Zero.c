///  Check Whether a Number is Positive or Negative or Zero.

/// C Program to Check Whether a Number is Positive or Negative

/// Check Positive or Negative Using if...else

//#include <stdio.h>
//int main() {
//    double num;
//    printf("Enter a number: ");
//    scanf("%lf", &num);
//    if (num <= 0.0) {
//        if (num == 0.0)
//            printf("You entered 0.");
//        else
//            printf("You entered a negative number.");
//    } else
//        printf("You entered a positive number.");
//    return 0;
//}


/// Check Positive or Negative Using Nested if...else

//#include <stdio.h>
//int main() {
//    double num;
//    printf("Enter a number: ");
//    scanf("%lf", &num);
//    if (num < 0.0)
//        printf("You entered a negative number.");
//    else if (num > 0.0)
//        printf("You entered a positive number.");
//    else
//        printf("You entered 0.");
//    return 0;
//}


/// Practice...

#include<stdio.h>

void main()
{

    double num;
    printf("Enter the number: ");
    scanf("%lf",&num);

    if(num>0.0)
    {
        printf("%.3lf is a positive.",num);
    }
    else if(num<0.0)
    {
        printf("%.3lf is a negative.",num);
    }
    else{
        printf("%lf is a 0.",num);
    }
    return 0;
}
