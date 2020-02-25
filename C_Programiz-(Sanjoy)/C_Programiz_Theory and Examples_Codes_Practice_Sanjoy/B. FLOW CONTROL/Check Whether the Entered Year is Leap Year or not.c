/// Check Whether the Entered Year is Leap Year or not

/// C Program to Check Leap Year

/// Program to Check Leap Year

//#include <stdio.h>
//int main() {
//    int year;
//    printf("Enter a year: ");
//    scanf("%d", &year);
//    if (year % 4 == 0) {
//        if (year % 100 == 0) {
//            // the year is a leap year if it is divisible by 400.
//            if (year % 400 == 0)
//                printf("%d is a leap year.", year);
//            else
//                printf("%d is not a leap year.", year);
//        } else
//            printf("%d is a leap year.", year);
//    } else
//        printf("%d is not a leap year.", year);
//    return 0;
//}


/// Practice...
//
//#include<stdio.h>
//
//void main()
//{
//    int year;
//    printf("Enter the year: ");
//    scanf("%d",&year);
//
//    if(year%4!=0)
//    {
//        printf("%d is a not leap year.",year);
//    }
//    else if(year%100!=0)
//    {
//        printf("%d is a leap year.",year);
//    }
//    else if(year%400==0){
//        printf("%d is a leap year.",year);
//    }
//    else{
//        printf("%d is a not leap year.",year);
//    }
//
//    return 0;


#include<stdio.h>

int main(){
    int num;
    scanf("%d",&num);

    if((num%4==0 && num%100!=0)|| num%400==0){
        printf("It is Leap Year.");
    }
    else{
        printf("It is not Leap Year.");
    }
    return 0;
}
