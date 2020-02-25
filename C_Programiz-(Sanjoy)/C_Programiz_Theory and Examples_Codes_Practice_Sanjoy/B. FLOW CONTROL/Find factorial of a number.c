/// Find factorial of a number

/// C Program to Find Factorial of a Number

/// Factorial of a Number

//#include <stdio.h>
//int main() {
//    int n, i;
//    unsigned long long fact = 1;
//    printf("Enter an integer: ");
//    scanf("%d", &n);
//    // shows error if the user enters a negative integer
//    if (n < 0)
//        printf("Error! Factorial of a negative number doesn't exist.");
//    else {
//        for (i = 1; i <= n; ++i) {
//            fact *= i;
//        }
//        printf("Factorial of %d = %llu", n, fact);
//    }
//    return 0;
//}

/// Practice...

//#include <stdio.h>
//int main()
//{
//    int n, i;
//    unsigned long long factorial = 1;
//    printf("Enter an integer: ");
//    scanf("%d",&n);
//    // show error if the user enters a negative integer
//    if (n < 0)
//        printf("Error! Factorial of a negative number doesn't exist.");
//    else
//    {
//        for(i=1; i<=n; ++i)
//        {
//            factorial *= i;              // factorial = factorial*i;
//        }
//        printf("Factorial of %d = %llu", n, factorial);
//    }
//    return 0;
//}



#include<stdio.h>

int main(){
    int n,i;
    unsigned long long factorial=1;

    printf("Enter an positive integer number: ");
    scanf("%d",&n);

    if(n<0){
        printf("Error! factorial of a negative number doesn't exits.");
    }
    else{
        for(i=n;i>=1;i--){
            factorial *=i;
        }
        printf("%d! factorial = %llu",n,factorial);
    }
    return 0;
}
