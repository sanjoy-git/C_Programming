/// Find the largest element of an array
/// C Program to Find Largest Element in an Array
/// Find the Largest Element in an array

//#include <stdio.h>
//int main() {
//    int i, n;
//    float arr[100];
//    printf("Enter the number of elements (1 to 100): ");
//    scanf("%d", &n);
//
//    for (i = 0; i < n; ++i) {
//        printf("Enter number%d: ", i + 1);
//        scanf("%f", &arr[i]);
//    }
//
//    // storing the largest number to arr[0]
//    for (i = 1; i < n; ++i) {
//        if (arr[0] < arr[i])
//            arr[0] = arr[i];
//    }
//
//    printf("Largest element = %.2f", arr[0]);
//
//    return 0;
//}


/// Practice...

//#include<stdio.h>
//
//int main()
//{
//    int n,i;
//    float *ptr;
//    printf("Enter the n value : ");
//    scanf("%d",&n);
//
//    float number[10];
//
//    ptr=number;
//
//    //scanf("%f",number);
//    //printf("%d",number);
//
//    for(i=0; i<n; ++i)
//    {
//        scanf("%f",number+i);
//    }
//
//    for(i=0; i<n; ++i)
//    {
//        printf("%f\n",*(ptr+i));
//    }
//
//    printf("size : %d",sizeof(number));
//
//    return 0;
//}



//#include<stdio.h>
//
//int main(){
//    float *pt;
//    int n;
//    //int *pt,n;
//    scanf("%d",&n);
//    pt=&n;
//    printf("n=%d\n",n);
//    printf("pt=%.3f\n",*pt);
//}


#include<stdio.h>

int main()
{
    int i,n;

    printf("Enter the number of elements : ");
    scanf("%d",&n);
    float number[n];

    for(i=0; i<n; ++i)
    {
        printf("Enter number %d : ",i+1);
        scanf("%f",number+i);
    }

    for(i=1; i<n; ++i)
    {
        if(number[0]<number[i])
        {
            number[0]=number[i];
        }
    }
    printf("Largest number : %.3f",number[0]);

    return 0;
}
