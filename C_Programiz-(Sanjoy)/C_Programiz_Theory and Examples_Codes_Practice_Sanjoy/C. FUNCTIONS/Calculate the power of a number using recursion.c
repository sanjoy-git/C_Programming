/// Calculate the power of a number using recursion

///C program to calculate the power using recursion

/// Program to calculate power using recursion

//#include <stdio.h>
//int power(int n1, int n2);
//int main()
//{
//    int base, a, result;
//    printf("Enter base number: ");
//    scanf("%d", &base);
//    printf("Enter power number(positive integer): ");
//    scanf("%d", &a);
//    result = power(base, a);
//    printf("%d^%d = %d", base, a, result);
//    return 0;
//}
//int power(int base, int a)
//{
//    if (a != 0)
//        return (base * power(base, a - 1));
//    else
//        return 1;
//}


/// Practice...

#include<stdio.h>

int power(int base,int e);

int main()
{
    int base,e,result;

    printf("Enter the base number : ");
    scanf("%d",&base);

    printf("Enter the power number : ");
    scanf("%d",&e);

    result = power(base,e);
    printf("%d^%d = %d",base,e,result);

    return 0;
}

int power(int base,int e)
{
    if(e!=0)
    {
        return (base*power(base,e-1));
    }
    else
    {
        return 1;
    }

//    int temp=base;
//    while(e>1){
//        temp=temp*base;
//        --e;
//    }
//    return temp;


}



