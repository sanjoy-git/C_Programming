/// Check whether a number can be expressed as the sum of two prime numbers

/// C Program to Check Whether a Number can be Expressed as Sum of Two Prime Numbers

/// Example: Integer as a Sum of Two Prime Numbers

//#include <stdio.h>
//int checkPrime(int n);
//int main()
//{
//    int n, i, flag = 0;
//    printf("Enter a positive integer: ");
//    scanf("%d", &n);
//    for(i = 2; i <= n/2; ++i)
//    {
//        // condition for i to be a prime number
//        if (checkPrime(i) == 1)
//        {
//            // condition for n-i to be a prime number
//            if (checkPrime(n-i) == 1)
//            {
//                // n = primeNumber1 + primeNumber2
//                printf("%d = %d + %d\n", n, i, n - i);
//                flag = 1;
//            }
//        }
//    }
//    if (flag == 0)
//        printf("%d cannot be expressed as the sum of two prime numbers.", n);
//    return 0;
//}
//// Function to check prime number
//int checkPrime(int n)
//{
//    int i, isPrime = 1;
//    for(i = 2; i <= n/2; ++i)
//    {
//        if(n % i == 0)
//        {
//            isPrime = 0;
//            break;
//        }
//    }
//    return isPrime;
//}



/// Practice...

#include<stdio.h>

int inputF(int num);
int outputF(int num);
void flagResult(int flag,int number);
int primeNchecker(int n);

int main()
{
    int number,number2,flag=0;

    number= inputF(number);
    flag=outputF(number);
    flagResult(flag,number);

    return 0;
}

int inputF(int num){                // input function
    printf("Enter a number : ");
    scanf("%d",&num);
    return num;
}

void flagResult(int flag,int number){           // flag check
        if(flag==0)
    {
        printf("%d cannot be expressed as the sum of two prime number.",number);
    }
}

int outputF(int num)         //int as a sum of two prime number.
{
    int i,flag=0;
    for(i=2; i<=num/2; i++)
    {
        if(primeNchecker(i)==1)
        {
            if(primeNchecker(num-i)==1)
            {
                printf("%d = %d + %d\n",num,i,num-i);
                flag=1;
            }
        }
    }
    return flag;
}

int primeNchecker(int n)            //check prime number.
{
    int i,isprime=1;

    for(i=2; i<n/2; i++)
    {
        if(n%i==0)
        {
            isprime=0;
            break;
        }
    }
    return isprime;
}



