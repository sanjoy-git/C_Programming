/// Calculate the factorial of a number using recursion

/// C Program to Find Factorial of a Number Using Recursion

/// Example: Factorial of a Number Using Recursion

//#include <stdio.h>
//long int multiplyNumbers(int n);
//int main()
//{
//    int n;
//    printf("Enter a positive integer: ");
//    scanf("%d", &n);
//    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
//    return 0;
//}
//long int multiplyNumbers(int n)
//{
//    if (n >= 1)
//        return n*multiplyNumbers(n-1);
//    else
//        return 1;
//}


#include<stdio.h>
long int fact(int n);

int main(){
    int num=1;
    //printf("Enter a number : ");
    //scanf("%d",&num);

    printf("%d! = %ld",num,fact(num));
}

long int fact(int n){
    if(n<5){
        return n*fact(n+1);
    }
    else{
        return n;
    }
}


