/// Check whether an integer is prime or Not

/// C Program to Check Whether a Number is Prime or Not

/// Program to Check Prime Number

//#include <stdio.h>
//int main() {
//    int n, i, flag = 0;
//    printf("Enter a positive integer: ");
//    scanf("%d", &n);
//    for (i = 2; i < n / 2; ++i) {
//        // condition for non-prime
//        if (n % i == 0) {
//            flag = 1;
//            break;
//        }
//    }
//    if (n == 1) {
//        printf("1 is neither prime nor composite.");
//    }
//    else {
//        if (flag == 0)
//            printf("%d is a prime number.", n);
//        else
//            printf("%d is not a prime number.", n);
//    }
//    return 0;
//}

/// Practice ...

//#include <stdio.h>
//int main()
//{
//    int n, i, flag = 0;
//    printf("Enter a positive integer: ");
//    scanf("%d", &n);
//    for(i = 2; i <= n/2; ++i)
//    {
//        // condition for nonprime number
//        if(n%i == 0)
//        {
//            flag = 1;
//            break;
//        }
//    }
//    if (n == 1)
//    {
//      printf("1 is neither a prime nor a composite number.");
//    }
//    else
//    {
//        if (flag == 0)
//          printf("%d is a prime number.", n);
//        else
//          printf("%d is not a prime number.", n);
//    }
//
//    return 0;
//}




#include<stdio.h>

int main()
{
    int n,i,flag=0;
    printf("Enter a positive number: ");
    scanf("%d",&n);

    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }

    if(i==1)
    {
        printf("1 is neither a prime nor a composite number.");
    }
    else
    {
        (flag==1)? printf("%d is not a prime number.",n) : printf("%d is a prime number.",n);
    }

    return 0;
}


//#include<stdio.h>
//
//int main()
//{
//    int num;
//    scanf("%d",&num);
//
//    if(num==1)
//    {
//        printf("%d is neither prime nor composite.",num);
//    }
//    else if(num==2||num==3||num==5||num==7)
//    {
//        printf("%d is a prime number.",num);
//    }
//    else if(num%2!=0 && num%3!=0 && num%5!=0 && num%7!=0)
//    {
//        printf("%d is a prime number.",num);
//    }
//    else
//    {
//        printf("%d is a not prime",num);
//    }
//
//    return 0;
//}
