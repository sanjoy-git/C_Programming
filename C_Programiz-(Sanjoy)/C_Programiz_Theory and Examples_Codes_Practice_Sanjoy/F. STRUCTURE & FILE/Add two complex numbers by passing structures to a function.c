/// Add two complex numbers by passing structures to a function
/// C Program to Add Two Complex Numbers by Passing Structure to a Function

/// Add Two Complex Numbers

//#include <stdio.h>
//typedef struct complex {
//    float real;
//    float imag;
//} complex;
//complex add(complex n1, complex n2);
//
//int main() {
//    complex n1, n2, result;
//    printf("For 1st complex number \n");
//    printf("Enter the real and imaginary parts: ");
//    scanf("%f %f", &n1.real, &n1.imag);
//    printf("\nFor 2nd complex number \n");
//    printf("Enter the real and imaginary parts: ");
//    scanf("%f %f", &n2.real, &n2.imag);
//    result = add(n1, n2);
//    printf("Sum = %.1f + %.1fi", result.real, result.imag);
//    return 0;
//}
//complex add(complex n1, complex n2) {
//    complex temp;
//    temp.real = n1.real + n2.real;
//    temp.imag = n1.imag + n2.imag;
//    return (temp);
//}


/// Practice...

#include<stdio.h>

typedef struct marks{
    int bangla;
    int englih;
}mk;


mk add(mk s1,mk s2);

int main(){
    mk s1,s2,result;

    printf("for s1 bangla number : ");
    scanf("%d",&s1.bangla);
    printf("for s1 english number : ");
    scanf("%d",&s1.englih);
    printf("for s2 bangla number : ");
    scanf("%d",&s2.bangla);
    printf("for s2 english number : ");
    scanf("%d",&s2.englih);

    result=add(s1,s2);
    printf("Sum = %d+%d",result.bangla,result.englih);

    return 0;
}

mk add(mk s1,mk s2){
    mk temp;
    temp.bangla=s1.bangla+s2.bangla;
    temp.englih=s1.englih+s2.englih;

    return (temp);
}
