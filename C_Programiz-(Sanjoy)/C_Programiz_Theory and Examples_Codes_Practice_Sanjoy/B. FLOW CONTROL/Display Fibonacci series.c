/// Display Fibonacci series
/// C Program to Display Fibonacci Sequence

/// Fibonacci Series up to n terms

//#include <stdio.h>
//int main() {
//    int i, n, t1 = 0, t2 = 1, nextTerm;
//    printf("Enter the number of terms: ");
//    scanf("%d", &n);
//    printf("Fibonacci Series: ");
//    for (i = 1; i <= n; ++i) {
//        printf("%d, ", t1);
//        nextTerm = t1 + t2;
//        t1 = t2;
//        t2 = nextTerm;
//    }
//    return 0;
//}


///Fibonacci Sequence Up to a Certain Number


//#include <stdio.h>
//int main() {
//    int t1 = 0, t2 = 1, nextTerm = 0, n;
//    printf("Enter a positive number: ");
//    scanf("%d", &n);
//    // displays the first two terms which is always 0 and 1
//    printf("Fibonacci Series: %d, %d, ", t1, t2);
//    nextTerm = t1 + t2;
//    while (nextTerm <= n) {
//        printf("%d, ", nextTerm);
//        t1 = t2;
//        t2 = nextTerm;
//        nextTerm = t1 + t2;
//    }
//    return 0;
//}

/// Practice...

//#include <stdio.h>
//int main()
//{
//    int i, n, t1 = 0, t2 = 1, nextTerm;
//    printf("Enter the number of terms: ");
//    scanf("%d", &n);
//    printf("Fibonacci Series: ");
//    for (i = 1; i <= n; ++i)
//    {
//        printf("%d, ", t1);
//        nextTerm = t1 + t2;
//        t1 = t2;
//        t2 = nextTerm;
//    }
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int i, n, t1 = 0, t2 = 1, nextTerm,sum=0;
//    printf("Enter the number of terms: ");
//    scanf("%d", &n);
//    printf("Fibonacci Series: ");
//    while(t1 <= n)
//    {
//        sum=sum+t1;
//        printf("%d, ", t1);
//        nextTerm = t1 + t2;
//        t1 = t2;
//        t2 = nextTerm;
//    }
//    printf("sum: %d",sum);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int t1 = 0, t2 = 1, nextTerm = 0, n;
//    printf("Enter a positive number: ");
//    scanf("%d", &n);
//    // displays the first two terms which is always 0 and 1
//    printf("Fibonacci Series: %d, %d, ", t1, t2);
//    nextTerm = t1 + t2;
//    while(nextTerm <= n)
//    {
//        printf("%d, ",nextTerm);
//        t1 = t2;
//        t2 = nextTerm;
//        nextTerm = t1 + t2;
//    }
//
//    return 0;
//}


//#include<stdio.h>
//
//void main(){
//    int n,t1=0,t2=1,nextterm;
//    printf("Enter the range: ");
//    scanf("%d",&n);
//    printf("%d,%d",t1,t2);
//    int sum=t1+t2;
//    nextterm=t1+t2;
//    while(nextterm<=n){
//        printf(",%d",nextterm);
//        sum=sum+nextterm;
//        t1=t2;
//        t2=nextterm;
//        nextterm=t1+t2;
//    }
//    printf(" sum: %d",sum);
//    return 0;
//}

#include<stdio.h>

int main(){
    int a=0,b=1,i,n=20,c;

    for (i=0;i<=n;i++){
        printf("%d  ",a);
        c=a;
        a=b;
        b+=c;
    }
}
