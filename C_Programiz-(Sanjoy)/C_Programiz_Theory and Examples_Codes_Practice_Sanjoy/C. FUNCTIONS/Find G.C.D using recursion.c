/// Find G.C.D using recursion
/// C Program to Find G.C.D Using Recursion
/// Example: GCD of Two Numbers using Recursion


//#include <stdio.h>
//int hcf(int n1, int n2);
//int main()
//{
//   int n1, n2;
//   printf("Enter two positive integers: ");
//   scanf("%d %d", &n1, &n2);
//   printf("G.C.D of %d and %d is %d.", n1, n2, hcf(n1,n2));
//   return 0;
//}
//int hcf(int n1, int n2)
//{
//    if (n2 != 0)
//       return hcf(n2, n1%n2);
//    else
//       return n1;
//}


/// Practice...

#include<stdio.h>
int hcf(int n1,int n2);

int main()
{
    int num1,num2;
    printf("Enter a number1 : ");
    scanf("%d",&num1);
    printf("Enter a number2 : ");
    scanf("%d",&num2);

    printf("%d and %d GCD : %d",num1,num2,hcf(num1,num2));
    return 0;
}

int hcf(int n1,int n2)
{
    if(n2!=0)
    {
        return hcf1(n2,n1%n2);
    }
    else{
        return n1;
    }
}

