/// Find the largest number (Dynamic memory allocation is used)
/// C Program to Find Largest Number Using Dynamic Memory Allocation
/// Find the Largest Element in a Dynamically Allocated Memory

//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    int num;
//    float *data;
//    printf("Enter the total number of elements: ");
//    scanf("%d", &num);
//    // Allocating memory for num elements
//    data = (float *)calloc(num, sizeof(float));
//    if (data == NULL) {
//        printf("Error!!! memory not allocated.");
//        exit(0);
//    }
//    // Storing numbers entered by the user.
//    for (int i = 0; i < num; ++i) {
//        printf("Enter Number %d: ", i + 1);
//        scanf("%f", data + i);
//    }
//    // Finding the largest number
//    for (int i = 1; i < num; ++i) {
//        if (*data < *(data + i))
//            *data = *(data + i);
//    }
//    printf("Largest number = %.2f", *data);
//    return 0;
//}


/// Practice...

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;
    float *p;

    printf("Enter the total number of elements : ");
    scanf("%d",&n);

    // Allocating memory for n elements

    p=(float *)calloc(n,sizeof(float));

    if(p==NULL)
    {
        printf("Error!!! memory not allocated.");
        exit(0);
    }

    // Storing number entered by the user.

    for(i=0; i<n; ++i)
    {
        printf("Enter number %d : ",i+1);
        scanf("%f",p+i);
    }

    // Finding the largest number

    for(i=0; i<n; ++i)
    {
        if(*p < *(p+i))
        {
            *p=*(p+i);
        }
    }

    printf("Largest number= %.3f",*p);

    return 0;
}
