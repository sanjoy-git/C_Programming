/// C Program to Add Two Integers

//#include <stdio.h>
//int main()
//{
//    int firstNumber, secondNumber, sumOfTwoNumbers;
//
//    printf("Enter two integers: ");
//    // Two integers entered by user is stored using scanf() function
//    scanf("%d %d", &firstNumber, &secondNumber);
//    // sum of two numbers in stored in variable sumOfTwoNumbers
//    sumOfTwoNumbers = firstNumber + secondNumber;
//    // Displays sum
//    printf("%d + %d = %d", firstNumber, secondNumber, sumOfTwoNumbers);
//    return 0;
//}


/// Practice...

#include<stdio.h>

int main(){
  int num1,num2,sum;

  printf("Enter the number1: ");
  scanf("%d",&num1);
  printf("Enter the number2: ");
  scanf("%d",&num2);

  sum=num1+num2;

  printf("sum : %d",sum);

  return 0;
}
