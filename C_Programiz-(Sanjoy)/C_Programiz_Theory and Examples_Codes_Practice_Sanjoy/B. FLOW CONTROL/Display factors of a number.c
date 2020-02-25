/// Display factors of a number
///C Program to Display Factors of a Number

///Factors of a Positive Integer

//#include <stdio.h>
//int main() {
//    int num, i;
//    printf("Enter a positive integer: ");
//    scanf("%d", &num);
//    printf("Factors of %d are: ", num);
//    for (i = 1; i <= num; ++i) {
//        if (num % i == 0) {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}


/// Practice...

//#include <stdio.h>
//int main()
//{
//    int number, i;
//    printf("Enter a positive integer: ");
//    scanf("%d",&number);
//    printf("Factors of %d are: ", number);
//    for(i=1; i <= number; ++i)
//    {
//        if (number%i == 0)
//        {
//            printf("%d ",i);
//        }
//    }
//    return 0;
//}

#include<stdio.h>

int main()
{
    int num,i,fac,remainder;
    printf("Enter the number: ");
    scanf("%d",&num);

    int k=0;

    for(i=1; i<=num; i++)
    {
        if(num%i==0)
        {
            fac=i;
            (k==1)? printf(" , %d",fac):printf("%d",fac,k=1);
        }

    }
}
