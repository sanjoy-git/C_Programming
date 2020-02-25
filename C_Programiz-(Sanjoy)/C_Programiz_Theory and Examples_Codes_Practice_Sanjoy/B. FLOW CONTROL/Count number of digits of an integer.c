/// Count number of digits of an integer

/// C Program to Count Number of Digits in an Integer

/// Program to Count the Number of Digits

//#include <stdio.h>
//int main() {
//    long long n;
//    int count = 0;
//    printf("Enter an integer: ");
//    scanf("%lld", &n);
//    while (n != 0) {
//        n /= 10;     // n = n/10
//        ++count;
//    }
//    printf("Number of digits: %d", count);
//}

///Practice...

#include<stdio.h>

int main()
{
    int n,count=0,i;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(i=1; i<=n; i=i*10)
    {
        count=count+1;

    }
    printf("digit : %d",count);

}
