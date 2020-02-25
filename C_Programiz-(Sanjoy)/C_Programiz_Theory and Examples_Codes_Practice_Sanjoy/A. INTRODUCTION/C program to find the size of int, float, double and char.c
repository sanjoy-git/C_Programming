/// C Program to Find the Size of int, float, double and char

/// Example: Program to Find the Size of a variable

//#include <stdio.h>
//int main()
//{
//    int integerType;
//    float floatType;
//    double doubleType;
//    char charType;
//    // Sizeof operator is used to evaluate the size of a variable
//    printf("Size of int: %ld bytes\n",sizeof(integerType));
//    printf("Size of float: %ld bytes\n",sizeof(floatType));
//    printf("Size of double: %ld bytes\n",sizeof(doubleType));
//    printf("Size of char: %ld byte\n",sizeof(charType));
//    return 0;
//}

/// Practice...

#include<stdio.h>

int main(){
    int a;
    char b;
    float c;
    double d;
    long long e;
    unsigned int f;

    printf("size of int : %d\n",sizeof(a));
    printf("size of char : %d\n",sizeof(b));
    printf("size of float : %d\n",sizeof(c));
    printf("size of double : %d\n",sizeof(d));
    printf("size of long long : %d\n",sizeof(e));
    printf("size of unsigned int : %d\n",sizeof(f));

    return 0;
}
