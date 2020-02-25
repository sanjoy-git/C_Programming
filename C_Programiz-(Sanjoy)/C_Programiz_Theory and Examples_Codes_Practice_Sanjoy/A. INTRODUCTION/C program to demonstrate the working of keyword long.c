/// C Program to Demonstrate the Working of Keyword long

/// Example: Program to Demonstrate the Working of long

//#include <stdio.h>
//int main()
//{
//    int a;
//    long b;
//    long long c;
//    double e;
//    long double f;
//    printf("Size of int = %ld bytes \n", sizeof(a));
//    printf("Size of long = %ld bytes\n", sizeof(b));
//    printf("Size of long long = %ld bytes\n", sizeof(c));
//    printf("Size of double = %ld bytes\n", sizeof(e));
//    printf("Size of long double = %ld bytes\n", sizeof(f));
//    return 0;
//}


/// Practice...

#include<stdio.h>

int main(){
    int a;
    long b;
    long long c;

    double d;
    long double e;

    printf("Size of : \n\n");
    printf("int : %d bytes\n",sizeof(a));          //size of integer
    printf("long : %d bytes\n",sizeof(b));
    printf("long long : %d bytes\n",sizeof(c));
    printf("double : %d bytes\n",sizeof(d));
    printf("long double : %d bytes\n",sizeof(e));

    return 0;
}
