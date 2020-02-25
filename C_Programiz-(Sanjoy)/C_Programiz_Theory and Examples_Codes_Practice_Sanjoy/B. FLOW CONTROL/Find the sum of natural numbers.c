/// Find the sum of natural numbers

/// C Program to Calculate the Sum of Natural Numbers

/// Sum of Natural Numbers Using for Loop

//#include <stdio.h>
//int main() {
//    int n, i, sum = 0;
//    printf("Enter a positive integer: ");
//    scanf("%d", &n);
//    for (i = 1; i <= n; ++i) {
//        sum += i;
//    }
//    printf("Sum = %d", sum);
//    return 0;
//}

/// Sum of Natural Numbers Using while Loop


//#include <stdio.h>
//int main() {
//    int n, i, sum = 0;
//    printf("Enter a positive integer: ");
//    scanf("%d", &n);
//    i = 1;
//    while (i <= n) {
//        sum += i;
//        ++i;
//    }
//    printf("Sum = %d", sum);
//    return 0;
//}

/// Read Input Until a Positive Integer is Entered

//#include <stdio.h>
//int main() {
//    int n, i, sum = 0;
//    do {
//        printf("Enter a positive integer: ");
//        scanf("%d", &n);
//    } while (n <= 0);
//    for (i = 1; i <= n; ++i) {
//        sum += i;
//    }
//    printf("Sum = %d", sum);
//    return 0;
//}


/// Practice...

//#include<stdio.h>
//
//int main(){
//    int n,i,sum=0;
//
//    printf("Enter a positive integer: ");
//    scanf("%d",&n);
//
//    for(i=1; i<=n; i++){
//        sum+=i;
//    }
//    printf("sum= %d",sum);
//    return 0;
//}

//#include<stdio.h>
//
//int main(){
//    int n,i,j=1,sum=0;
//
//    printf("Enter a positive integer: ");
//    scanf("%d",&n);
//
//    i=1;
//    while(i<=n){
//        sum+=i;
//        i++;
//    }
//    printf("sum= %d",sum);
//    return 0;
//}


#include<stdio.h>

int main()
{
    int n,i,sum=0;
    do
    {
        printf("Enter a positive integer: ");
        scanf("%d",&n);
    }
    while(n<=0);

    for(i=1; i<=n; i++)
    {
        sum+=i;
    }
    printf("sum= %d",sum);
    return 0;
}
