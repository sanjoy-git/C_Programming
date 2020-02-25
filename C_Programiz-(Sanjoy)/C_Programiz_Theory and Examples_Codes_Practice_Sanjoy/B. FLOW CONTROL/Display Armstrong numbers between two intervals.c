/// Display Armstrong numbers between two intervals

/// C Program to Display Armstrong Number Between Two Intervals

/// Armstrong Numbers Between Two Integers

//#include <math.h>
//#include <stdio.h>
//int main() {
//    int low, high, i, temp1, temp2, rem, n = 0;
//    float result = 0.0;
//    printf("Enter two numbers(intervals): ");
//    scanf("%d %d", &low, &high);
//    printf("Armstrong numbers between %d and %d are: ", low, high);
//    for (i = low + 1; i < high; ++i) {
//        temp2 = i;
//        temp1 = i;
//        // number of digits calculation
//        while (temp1 != 0) {
//            temp1 /= 10;
//            ++n;
//        }
//        // result contains sum of nth power of its digits
//        while (temp2 != 0) {
//            rem = temp2 % 10;
//            result += pow(rem, n);
//            temp2 /= 10;
//        }
//        // check if i is equal to the sum of nth power of its digits
//        if ((int)result == i) {
//            printf("%d ", i);
//        }
//        // resetting the values
//        n = 0;
//        result = 0;
//    }
//    return 0;
//}

/// Practice...

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int low, high, i, temp1, temp2, remainder, n = 0, result = 0;
//    printf("Enter two numbers(intervals): ");
//    scanf("%d %d", &low, &high);
//    printf("Armstrong numbers between %d an %d are: ", low, high);
//    for(i = low + 1; i < high; ++i)
//    {
//        temp2 = i;
//        temp1 = i;
//        // number of digits calculation
//        while (temp1 != 0)
//        {
//            temp1 /= 10;
//            ++n;
//        }
//        // result contains sum of nth power of its digits
//        while (temp2 != 0)
//        {
//            remainder = temp2 % 10;
//            result += pow(remainder, n);
//            temp2 /= 10;
//        }
//        // checks if number i is equal to the sum of nth power of its digits
//        if (result == i) {
//            printf("%d ", i);
//        }
//        // resetting the values to check Armstrong number for next iteration
//        n = 0;
//        result = 0;
//    }
//    return 0;
//}



#include<stdio.h>
//#include<math.h>

int main()
{
    long long int num1,num2,num,result=0,remainder,temp;
    int count,next=0;

    printf("Enter the number: ");
    scanf("%lli",&num1);
    printf("From \nEnter the number: ");
    scanf("%lli",&num2);

    if(num1>num2)
    {
        num1=num1-num2;
        num2=num1+num2;
        num1=num2-num1;
    }
    printf("%d from %d Armstrong number is :  ",num1,num2);

    for(num=num1; num<=num2; num++)
    {
        temp=num;
        count=0;
        while(temp!=0)
        {
            temp=temp/10;
            ++count;
        }
        temp=num;

        while(temp!=0)
        {
            remainder=temp%10;

            int k=2,j=remainder;
            while(k<=count && count>1)
            {
                j=j*remainder;
                ++k;
            }
            result=result+j;

            //result+=pow(remainder,count);
            //result+=remainder*remainder*remainder;

            temp=temp/10;
        }

        if(result==num && next==1)
        {
            printf(" , %lli",num);
        }
        else if(result==num && next==0)
        {
            printf("%lli",num);
            next=1;
        }
        result=0;
    }

    return 0;
}
