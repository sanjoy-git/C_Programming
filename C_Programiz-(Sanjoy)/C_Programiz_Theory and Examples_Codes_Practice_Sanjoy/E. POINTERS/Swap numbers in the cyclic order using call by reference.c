/// Swap numbers in the cyclic order using call by reference
/// C Program Swap Numbers in Cyclic Order Using Call by Reference
/// Program to Swap Elements Using Call by Reference

//#include <stdio.h>
//void cyclicSwap(int *a, int *b, int *c);
//int main() {
//    int a, b, c;
//    printf("Enter a, b and c respectively: ");
//    scanf("%d %d %d", &a, &b, &c);
//    printf("Value before swapping:\n");
//    printf("a = %d \nb = %d \nc = %d\n", a, b, c);
//    cyclicSwap(&a, &b, &c);
//    printf("Value after swapping:\n");
//    printf("a = %d \nb = %d \nc = %d", a, b, c);
//    return 0;
//}
//void cyclicSwap(int *n1, int *n2, int *n3) {
//    int temp;
//    // swapping in cyclic order
//    temp = *n2;
//    *n2 = *n1;
//    *n1 = *n3;
//    *n3 = temp;
//}

/// Practice...

#include<stdio.h>
void swapping(int *a,int *b);

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("Before swapping : \na = %d\nb = %d",a,b);
    swapping(&a,&b);
    printf("\nAfter swapping : \na = %d\nb = %d",a,b);
}

void swapping(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
