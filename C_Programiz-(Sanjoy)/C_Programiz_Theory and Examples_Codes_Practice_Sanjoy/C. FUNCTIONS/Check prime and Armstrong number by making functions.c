/// Check prime and Armstrong number by making functions
/// C Program to Check Prime or Armstrong Number Using User-defined Function
/// Example: Check Prime and Armstrong Number

//#include <stdio.h>
//#include <math.h>
//int checkPrimeNumber(int n);
//int checkArmstrongNumber(int n);
//
//int main()
//{
//    int n, flag;
//    printf("Enter a positive integer: ");
//    scanf("%d", &n);
//    // Check prime number
//    flag = checkPrimeNumber(n);
//    if (flag == 1)
//        printf("%d is a prime number.\n", n);
//    else
//        printf("%d is not a prime number.\n", n);
//    // Check Armstrong number
//    flag = checkArmstrongNumber(n);
//    if (flag == 1)
//        printf("%d is an Armstrong number.", n);
//    else
//        printf("%d is not an Armstrong number.",n);
//    return 0;
//}
//int checkPrimeNumber(int n)
//{
//    int i, flag = 1;
//    for(i=2; i<=n/2; ++i)
//    {
//    // condition for non-prime number
//        if(n%i == 0)
//        {
//            flag = 0;
//            break;
//        }
//    }
//    return flag;
//}
//int checkArmstrongNumber(int number)
//{
//    int originalNumber, remainder, result = 0, n = 0, flag;
//    originalNumber = number;
//    while (originalNumber != 0)
//    {
//        originalNumber /= 10;
//        ++n;
//    }
//    originalNumber = number;
//    while (originalNumber != 0)
//    {
//        remainder = originalNumber%10;
//        result += pow(remainder, n);
//        originalNumber /= 10;
//    }
//    // condition for Armstrong number
//    if(result == number)
//        flag = 1;
//    else
//        flag = 0;
//    return flag;
//}


///// Practice...

//#include<stdio.h>
//#include<math.h>
//
//int check_PrimeNumber();
//int check_ArmstrongNumber();
//
//int check_PrimeNumber(int num);
//int power(int base,int expo);
//
//int main()
//{
//    int number,flag;
//
//    printf("Enter a number : ");
//    scanf("%d",&number);
//
//    flag=check_PrimeNumber(number);
//    (flag==1)? printf("%d is prime number.\n",number):printf("%d is not a prime number.\n",number);
//
//    flag=check_ArmstrongNumber(number);
//    (flag==1)? printf("%d is an Armstrong number.",number):printf("%d is not an Armstrong number.",number);
//
//}
//
//int check_PrimeNumber(int num)
//{
//    int i,flag = 1;
//    for(i=2; i<=num/2; ++i)
//    {
//        if(num%i==0)
//        {
//            flag=0;
//            break;
//        }
//    }
//    return flag;
//}
//
//int check_ArmstrongNumber(int num)
//{
//    int i,flag=0,temp,rem,result=0,count=0;
//
//    temp=num;
//    while(temp!=0)
//    {
//        ++count;
//        temp/=10;
//    }
//
//    temp=num;
//    while(temp!=0)
//    {
//        rem=temp%10;
////        result+=pow(rem,count);
//        result+=power(rem,count);
//        temp/=10;
//    }
//
//
//    if(num==result)
//    {
//        flag=1;
//    }
//    //printf("\n %d\n",result);
//
//    return flag;
//}
//
//int power(int base,int expo)
//{
//    int i,res=1;
//    for(i=1;i<=expo;i++)
//    {
//        res*=base;
//    }
//    //printf("\n %d \n",res);
//    return res;
//}



#include<stdio.h>
#include<math.h>



int check_PrimeNumber(int num);
int check_ArmstrongNumber(int num);
int power(int base,int expo);

int main()
{
    //int i=1,j=1;
    //while(j<=6)
    //{
        int number,flag,flag1;

        printf("Enter a number : ");
        scanf("%d",&number);
        //number=i;

        flag=check_PrimeNumber(number);
        (flag==1)? printf("%d is prime number.\n",number):printf("%d is not a prime number.\n",number);

        flag1=check_ArmstrongNumber(number);
        (flag1==1)? printf("%d is an Armstrong number.",number):printf("%d is not an Armstrong number.",number);

//        if(flag==1 && flag1==1)	//Prime number and Armstrong number same
//        {
//            printf("%d , ",number);
//            ++j;
//        }
//        ++i;
//    }
    return 0;
}

int check_PrimeNumber(int num)		///prime number check function
{
    int i,flag = 1;
    for(i=2; i<=num/2; ++i)
    {
        if(num%i==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}

int check_ArmstrongNumber(int num)		//Armstrong number check function
{
    int i,flag=0,temp,rem,result=0,count=0;

    temp=num;
    while(temp!=0)
    {
        ++count;
        temp/=10;
    }

    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
//        result+=pow(rem,count);
        result+=power(rem,count);
        temp/=10;
    }


    if(num==result)
    {
        flag=1;
    }
    //printf("\n %d\n",result);

    return flag;
}

int power(int base,int expo)		//power function
{
    int i,res=1;
    for(i=1; i<=expo; i++)
    {
        res*=base;
    }
    //printf("\n %d \n",res);
    return res;
}
