/// C Program to Swap Two Numbers

/// Example 1: Program to Swap Numbers Using Temporary Variable

//#include <stdio.h>
//int main()
//{
//      double firstNumber, secondNumber, temporaryVariable;
//      printf("Enter first number: ");
//      scanf("%lf", &firstNumber);
//      printf("Enter second number: ");
//      scanf("%lf",&secondNumber);
//      // Value of firstNumber is assigned to temporaryVariable
//      temporaryVariable = firstNumber;
//      // Value of secondNumber is assigned to firstNumber
//      firstNumber = secondNumber;
//      // Value of temporaryVariable (which contains the initial value of firstNumber) is assigned to secondNumber
//      secondNumber = temporaryVariable;
//      printf("\nAfter swapping, firstNumber = %.2lf\n", firstNumber);
//      printf("After swapping, secondNumber = %.2lf", secondNumber);
//      return 0;
//}

/// Practice...

//#include<stdio.h>
//
//int main(){
//    int num1,num2,num3,temp;
//
//    num1 = 10;
//    num2 = 8;
//    num3 = 3;
//
//    //swapping
//    temp = num1;
//    num1 = num2;
//    num2 = num3;
//    num3 = temp;
//
//    //after swapping
//    printf("number1 : %d\n",num1);
//    printf("number2 : %d\n",num2);
//    printf("number3 : %d",num3);
//}


/// Example 2: Program to Swap Number Without Using Temporary Variables

//#include <stdio.h>
//int main()
//{
//    double firstNumber, secondNumber;
//    printf("Enter first number: ");
//    scanf("%lf", &firstNumber);
//    printf("Enter second number: ");
//    scanf("%lf",&secondNumber);
//    // Swapping process
//    firstNumber = firstNumber - secondNumber;
//    secondNumber = firstNumber + secondNumber;
//    firstNumber = secondNumber - firstNumber;
//    printf("\nAfter swapping, firstNumber = %.2lf\n", firstNumber);
//    printf("After swapping, secondNumber = %.2lf", secondNumber);
//    return 0;
//}


/// Practice...

#include<stdio.h>

int main(){
    int num1=-10,num2=-8;
    //swapping
    num1=num1-num2;
    num2=num1+num2;
    num1=num2-num1;

    //after swapping
    printf("num1 : %d \nnum2 : %d",num1,num2);

    return 0;
}
