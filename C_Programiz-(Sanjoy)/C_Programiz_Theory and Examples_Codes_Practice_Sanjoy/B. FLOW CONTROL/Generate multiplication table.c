/// Generate multiplication table

/// C Program to Generate Multiplication Table

/// Multiplication Table Up to 10

//#include <stdio.h>
//int main() {
//    int n, i;
//    printf("Enter an integer: ");
//    scanf("%d", &n);
//    for (i = 1; i <= 10; ++i) {
//        printf("%d * %d = %d \n", n, i, n * i);
//    }
//    return 0;
//}

/// Multiplication Table Up to a range

//#include <stdio.h>
//int main() {
//    int n, i, range;
//    printf("Enter an integer: ");
//    scanf("%d", &n);
//    printf("Enter the range: ");
//    scanf("%d", &range);
//    for (i = 1; i <= range; ++i) {
//        printf("%d * %d = %d \n", n, i, n * i);
//    }
//    return 0;
//}


/// Practice...

//#include <stdio.h>
//int main()
//{
//    int n, i, range;
//    printf("Enter an integer: ");
//    scanf("%d",&n);
//    printf("Enter the range: ");
//    scanf("%d", &range);
//    for(i=1; i <= range; ++i)
//    {
//        printf("%d * %d = %d \n", n, i, n*i);
//    }
//    return 0;
//}


#include<stdio.h>

int main()
{
    float n;
    int nloop,i;
    printf("Enter the number: ");
    scanf("%f",&n);
    printf("Enter the range: ");
    scanf("%d",&nloop);
    float out;

    for(i=1; i<=nloop;i++){
        printf("%.3f*%d=%.3f\n",n,i,n*i);
    }
    return 0;
}
