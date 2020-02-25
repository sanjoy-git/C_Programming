/// Access elements of an array using pointers
/// C Program to Access Array Elements Using Pointer
/// Access Array Elements Using Pointers

//#include <stdio.h>
//int main() {
//    int data[5];
//    printf("Enter elements: ");
//    for (int i = 0; i < 5; ++i)
//        scanf("%d", data + i);
//    printf("You entered: \n");
//    for (int i = 0; i < 5; ++i)
//        printf("%d\n", *(data + i));
//    return 0;
//}

/// Practice...

#include<stdio.h>

int main(){
    int a[4];
    printf("Enter elements : ");
    for(int i=0;i<4;++i){
        scanf("%d",a+i);
    }
    printf("\nYou entered : ");
    for(int i=0; i<4;++i){
        //printf("%d\n",a[i]);
        printf("%d\n",*(a+i));
    }
    return 0;
}


