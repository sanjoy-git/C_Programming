/// Find HCF of two numbers

/// C Program to Find GCD of two Numbers

///Example #1: GCD Using for loop and if Statement

//#include <stdio.h>
//int main()
//{
//    int n1, n2, i, gcd;                   // GCD : Greatest Common Divisor
//    printf("Enter two integers: ");
//    scanf("%d %d", &n1, &n2);
//    for(i=1; i <= n1 && i <= n2; ++i)
//    {
//        // Checks if i is factor of both integers
//        if(n1%i==0 && n2%i==0)
//            gcd = i;
//    }
//    printf("G.C.D of %d and %d is %d", n1, n2, gcd);
//    return 0;
//}


/// Example #2: GCD Using while loop and if...else Statement
//
//#include <stdio.h>
//int main()
//{
//    int n1, n2;
//
//    printf("Enter two positive integers: ");
//    scanf("%d %d",&n1,&n2);
//    while(n1!=n2)
//    {
//        if(n1 > n2)
//            n1 -= n2;
//        else
//            n2 -= n1;
//    }
//    printf("GCD = %d",n1);
//    return 0;
//}


/// Example #3: GCD for both positive and negative numbers

//#include <stdio.h>
//int main()
//{
//    int n1, n2;
//    printf("Enter two integers: ");
//    scanf("%d %d",&n1,&n2);
//    // if user enters negative number, sign of the number is changed to positive
//    n1 = ( n1 > 0) ? n1 : -n1;
//    n2 = ( n2 > 0) ? n2 : -n2;
//    while(n1!=n2)
//    {
//        if(n1 > n2)
//            n1 -= n2;
//        else
//            n2 -= n1;
//    }
//    printf("GCD = %d",n1);
//    return 0;
//}


/// Practice...

//#include <stdio.h>
//int main()
//{
//    int n1, n2, i, gcd;
//    printf("Enter two integers: ");
//    scanf("%d %d", &n1, &n2);
//    for(i=1; i <= n1 && i <= n2; ++i)
//    {
//        // Checks if i is factor of both integers
//        if(n1%i==0 && n2%i==0)
//            gcd = i;
//    }
//    printf("G.C.D of %d and %d is %d", n1, n2, gcd);
//    return 0;
//}


//#include<stdio.h>
//
//void main()
//{
//    int n1,n2,n3,gcd,i;
//    printf("Enter the n1: ");
//    scanf("%d",&n1);
//    printf("Enter the n2: ");
//    scanf("%d",&n2);
//    printf("Enter the n3: ");
//    scanf("%d",&n3);
//
//    for(i=1; i<=n1 && i<=n2 && i<=n3; i++)
//    {
//        if(n1%i==0 && n2%i==0 && n3%i==0)
//        {
//            gcd=i;
//        }
//    }
//    printf("%d , %d ,%d GCD: %d",n1,n2,n3,gcd);
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//    int n1,n2;
//    scanf("%d%d",&n1,&n2);
//
//    while(n1!=n2)
//    {
//        if(n1>n2)
//        {
//            n1=n1-n2;
//        }
//        else
//        {
//            n2=n2-n1;
//        }
//    }
//    printf("GCD: %d",n1);
//}


///

//#include <stdio.h>
//int main()
//{
//    int n1, n2;
//    printf("Enter two integers: ");
//    scanf("%d %d",&n1,&n2);
//    // if user enters negative number, sign of the number is changed to positive
//    n1 = ( n1 > 0) ? n1 : -n1;
//    n2 = ( n2 > 0) ? n2 : -n2;
//    while(n1!=n2)
//    {
//        if(n1 > n2)
//            n1 -= n2;
//        else
//            n2 -= n1;
//    }
//    printf("GCD = %d",n1);
//    return 0;
//}

#include<stdio.h>

int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);

    n1=(n1>0)? n1:-n1;
    n2=(n2>0)? n2:-n2;

    while(n1!=n2)
    {
        if(n1>n2)
        {
            n1=n1-n2;
        }
        else
        {
            n2=n2-n1;
        }
    }
    printf("GCD: %d",n1);

    return 0;
}
