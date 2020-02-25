/// Find the sum of natural numbers using recursion

/// C Program to Find the Sum of Natural Numbers using Recursion

/// Example: Sum of Natural Numbers Using Recursion

//#include <stdio.h>
//int addNumbers(int n);
//int main()
//{
//    int num;
//    printf("Enter a positive integer: ");
//    scanf("%d", &num);
//    printf("Sum = %d",addNumbers(num));
//    return 0;
//}
//int addNumbers(int n)
//{
//    if(n != 0)
//        return n + addNumbers(n-1);
//    else
//        return n;
//}


/// Practice...

#include<stdio.h>
int recFunction(int n);

int main(){
    int num,sum;
    printf("Enter a number : ");
    scanf("%d",&num);
    sum=recFunction(num);
    printf("sum : %d",sum);

    return 0;
}

int recFunction(int n){
    int s;
    if(n!=0){
        s=n+recFunction(n-1);
        return s;
    }
}
