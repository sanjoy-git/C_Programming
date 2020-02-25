/// Display all prime numbers between two Intervals

/// C Program to Display Prime Numbers Between Intervals Using Function

/// Prime Numbers Between Two Integers

//#include <stdio.h>
//
//int checkPrimeNumber(int n);
//int main() {
//    int n1, n2, i, flag;
//    printf("Enter two positive integers: ");
//    scanf("%d %d", &n1, &n2);
//    printf("Prime numbers between %d and %d are: ", n1, n2);
//    for (i = n1 + 1; i < n2; ++i) {
//        // flag will be equal to 1 if i is prime
//        flag = checkPrimeNumber(i);
//        if (flag == 1)
//            printf("%d ", i);
//    }
//    return 0;
//}
//// user-defined function to check prime number
//int checkPrimeNumber(int n) {
//    int j, flag = 1;
//    for (j = 2; j <= n / 2; ++j) {
//        if (n % j == 0) {
//            flag = 0;
//            break;
//        }
//    }
//    return flag;
//}


/// Practice...

#include<stdio.h>

int main(){
    int fnum,lnum,i,flag,comma=0;
    printf("Enter the first number : ");
    scanf("%d",&fnum);
    printf("from\n");
    printf("Enter the last number : ");
    scanf("%d",&lnum);

    for(i=fnum;i<lnum; i++){
        if(i==1 || i==0){       // 1 is neither prime nor composite.
            continue;
        }
        flag=PrimeNumberCheck(i);
        if(flag==1){
            (comma==1)? printf(" , "):printf(" ",comma=1);
            printf("%d",i);
        }
    }
    return 0;
}

int PrimeNumberCheck(int i){        // check prime function
    int j,flag=1;
    for(j=2;j<=i/2;++j){
        if(i%j==0){
            flag=0;
            break;
        }
    }
    return flag;
}
