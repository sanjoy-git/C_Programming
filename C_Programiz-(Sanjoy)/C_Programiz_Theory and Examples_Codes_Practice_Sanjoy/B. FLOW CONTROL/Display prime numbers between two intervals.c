/// Display prime numbers between two intervals

/// C Program to Display Prime Numbers Between Two Intervals

/// Display Prime Numbers Between two Intervals

//#include <stdio.h>
//int main() {
//    int low, high, i, flag;
//    printf("Enter two numbers(intervals): ");
//    scanf("%d %d", &low, &high);
//    printf("Prime numbers between %d and %d are: ", low, high);
//    while (low < high) {
//        flag = 0;
//        // if low is a non-prime number, flag will be 1
//        for (i = 2; i <= low / 2; ++i) {
//            if (low % i == 0) {
//                flag = 1;
//                break;
//            }
//        }
//        if (flag == 0)
//            printf("%d ", low);
//        ++low;
//    }
//    return 0;
//}


///Display Prime Numbers when Larger Number is Entered first


//#include <stdio.h>
//int main() {
//    int low, high, i, flag, temp;
//    printf("Enter two numbers(intervals): ");
//    scanf("%d %d", &low, &high);
//    // swap numbers if low is greather than high
//    if (low > high) {
//        temp = low;
//        low = high;
//        high = temp;
//    }
//    printf("Prime numbers between %d and %d are: ", low, high);
//    while (low < high) {
//        flag = 0;
//        for (i = 2; i <= low / 2; ++i) {
//            if (low % i == 0) {
//                flag = 1;
//                break;
//            }
//        }
//        if (flag == 0)
//            printf("%d ", low);
//        ++low;
//    }
//    return 0;
//}


/// Practice...

////#include <stdio.h>
////int main()
////{
////    int low, high, i, flag;
////    printf("Enter two numbers(intervals): ");
////    scanf("%d %d", &low, &high);
////    printf("Prime numbers between %d and %d are: ", low, high);
////    while (low < high)
////    {
////        flag = 0;
////        for(i = 2; i <= low/2; ++i)
////        {
////            if(low % i == 0)
////            {
////                flag = 1;
////                break;
////            }
////        }
////        if (flag == 0)
////            printf("%d ", low);
////        ++low;
////    }
////    return 0;
////}



#include<stdio.h>

int main()
{
    int lowN,highN,i,flag;

    printf("Enter a positive number: ");
    scanf("%d",&lowN);
    printf("From\nEnter a positive number: ");
    scanf("%d",&highN);

    if(lowN>0 && highN>0){
            int temp;
    if(highN<lowN)
    {
        temp=lowN;
        lowN=highN;
        highN=temp;
    }


    flag=0;
    int check=0;
    while(lowN<=highN)
    {

        for(i=2; i<=lowN/2; ++i)
        {
            if(lowN%i==0)
            {
                flag=1;
                break;
            }
        }

        if(lowN==1)
        {
            printf("\n1 is neither a prime nor a composite number.\n");
        }
        else
        {
            if(flag==0)
            {
                printf("\nPrime no is: %d",lowN);
                check=1;
            }
            else if(flag==11)
            {
                printf(" , %d ",lowN);
            }
        }

        if(check==1)
        {
            flag=11;
        }
        else
        {
            flag=0;
        }
        ++lowN;
    }
    printf(".\n");
    }
    else{
        printf("\n Negative number and 0 not supported. Positive number supported. \n");
    }

    return 0;
}



//#include<stdio.h>
//
//int main()
//{
//    int fnum,lnum,num,comma=0;
//
//    scanf("%d",&fnum);
//    scanf("%d",&lnum);
//
//    for(num=fnum; num<=lnum; ++num)
//    {
//        if(num==1 || num==-1)
//        {
//            continue;
//        }
//        else if(num==2||num==3||num==5||num==7 || num==-2||num==-3||num==-5||num==-7)
//        {
//            (comma==1)?printf(" , "):printf(" ",comma=1);
//            printf("%d",num);
//        }
//        else if(num%2!=0 && num%3!=0 && num%5!=0 && num%7!=0)
//        {
//            (comma==1)?printf(" , "):printf(" ",comma=1);
//            printf("%d",num);
//        }
//    }
//    return 0;
//}
