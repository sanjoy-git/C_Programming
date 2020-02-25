/// C Program to Multiply two Floating Point Numbers

///Program to Multiply Two Numbers

//#include <stdio.h>
//int main()
//{
//    double firstNumber, secondNumber, product;
//    printf("Enter two numbers: ");
//    // Stores two floating point numbers in variable firstNumber and secondNumber respectively
//    scanf("%lf %lf", &firstNumber, &secondNumber);
//
//    // Performs multiplication and stores the result in variable productOfTwoNumbers
//    product = firstNumber * secondNumber;
//    // Result up to 2 decimal point is displayed using %.2lf
//    printf("Product = %.2lf", product);
//
//    return 0;
//}

/// Practice...

#include<stdio.h>

int main(){
  double num1,num2,sum;

  printf("Enter the number1: ");
  scanf("%lf",&num1);
  printf("Enter the number2: ");
  scanf("%lf",&num2);

  sum=num1*num2;

  printf("sum : %.3lf",sum);

  return 0;
}
