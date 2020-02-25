/// ------C Pointers--------

/// Address in C

//#include <stdio.h>
//int main()
//{
//  int var = 5;
//  printf("var: %d\n", var);
//  // Notice the use of & before var
//  printf("address of var: %p", &var);
//  return 0;
//}


/// practice...


//#include <stdio.h>
//
//int main()
//{
//  int var = 5;
//  printf("var: %d\n", var);
//  printf("address of var: %p\n", &var);
//  printf("address of var: %d", &var);
//  return 0;
//
//}


/// Changing Value Pointed by Pointers

//#include<stdio.h>
//
//int main()
//{
//    int* pc, c;
//    c = 5;
//    pc = &c;
//    c = 1;
//    printf("%d\n", c);    // Output: 1
//    printf("%d", *pc);  // Ouptut: 1
//
//    return 0;
//}

//
//#include<stdio.h>
//
//int main()
//{
//    int* pc, c;
//    c = 5;
//    pc = &c;
//    *pc = 1;
//    printf("%d\n", *pc);  // Ouptut: 1
//    printf("%d", c);    // Output: 1
//
//    return 0;
//}

#include<stdio.h>

//int main()
//{
//    int* pc, c, d;
//    c = 5;
//    d = -15;
//    pc = &c;
//    printf("%d\n", *pc); // Output: 5
//    pc = &d;
//    printf("%d", *pc); // Ouptut: -15
//}

///Practice...

//#include<stdio.h>
//
//int main(){
//    int *pt,a;
//    a=3;
//    pt=&a;
//    *pt=2;
//    a=9;
//    printf("%d\n",a);
//    printf("%d\n",pt);
//    printf("%d\n",*pt);
//}


//int main()
//{
//    int* pc, c, d;
//    c = 5;
//    d = -10;
//    pc = &d;
//    *pc=7;
//    printf("%d\n", *pc); // Output: 5
//    pc = &c;
//    printf("%d", *pc); // Ouptut: -15
//}




/// Example: Working of Pointers

//#include <stdio.h>
//int main()
//{
//   int* pc, c;
//
//   c = 22;
//   printf("Address of c: %p\n", &c);
//   printf("Value of c: %d\n\n", c);  // 22
//
//   pc = &c;
//   printf("Address of pointer pc: %p\n", pc);
//   printf("Content of pointer pc: %d\n\n", *pc); // 22
//
//   c = 11;
//   printf("Address of pointer pc: %p\n", pc);
//   printf("Content of pointer pc: %d\n\n", *pc); // 11
//
//   *pc = 2;
//   printf("Address of c: %p\n", &c);
//   printf("Value of c: %d\n\n", c); // 2
//   return 0;
//
//}


//#include<stdio.h>
//
//int main(){
//    int *pt,a;
//    a=2;
//    printf("%p\n",&a);
//    printf("%d\n",a);
//    pt=&a;
//    printf("%p\n",pt);
//    printf("%d\n",*pt);
//    a=3;
//    printf("%p\n",pt);
//    printf("%d\n",*pt);
//    *pt=5;
//    printf("%p\n",&a);
//    printf("%d\n",a);
//
//    return 0;
//}

///-----Pointers & Arrays--------

/// Relationship Between Arrays and Pointers

/// Relationship Between Arrays and Pointers

//#include <stdio.h>
//int main() {
//   int x[4];
//   int i;
//   for(i = 0; i < 4; ++i) {
//      printf("&x[%d] = %p\n", i, &x[i]);
//   }
//   printf("Address of array x: %p", x);
//   return 0;
//}

//#include<stdio.h>
//int main(){
//    int number[5];
//
//    for(int i=0;i<5;i++){
//        printf("&number[%d] = %p\n",i,&number[i]);
//    }
//    printf("Address of number : %p",number);
//}

/// Example 1: Pointers and Arrays

//#include <stdio.h>
//int main() {
//  int i, x[6], sum = 0;
//  printf("Enter 6 numbers: ");
//  for(i = 0; i < 6; ++i) {
//  // Equivalent to scanf("%d", &x[i]);
//      scanf("%d", x+i);
//  // Equivalent to sum += x[i]
//      sum += *(x+i);
//  }
//  printf("Sum = %d", sum);
//  return 0;
//}

///Practice...

//#include<stdio.h>
//
//int main()
//{
//    int n[5],sum=0;
//
//    for(int i=0; i<5; i++)
//    {
//        scanf("%d",n+i);
//
//        sum+=*(n+i);
//    }
//
////    for(int i=0; i<5; i++)
////    {
////        printf("%d\n",n[i]);
////    }
//    printf("%d",sum);
//
//    return 0;
//}


/// Example 2: Arrays and Pointers

//#include <stdio.h>
//int main() {
//  int x[5] = {1, 2, 3, 4, 5};
//  int* ptr;
//  // ptr is assigned the address of the third element
//  ptr = &x[2];
//  printf("*ptr = %d \n", *ptr);   // 3
//  printf("*(ptr+1) = %d \n", *(ptr+1)); // 4
//  printf("*(ptr-1) = %d", *(ptr-1));  // 2
//  return 0;
//}

//#include<stdio.h>
//
//int main(){
//    int n[5]={4,6,3,7,9};
//    int *pt;
//    pt=&n[1];
//    printf("%d\n\n",*n);
//    printf("%d\n",*pt);
//    printf("%d\n",*(pt+1));
//    printf("%d\n",*(pt-1));
//    printf("%d\n",*(pt+2));
//    printf("%d\n",*(pt+3));
//
//    return 0;
//}

///---------Pointers & Functions-----------

/// C Call by Reference: Using pointers

/// Example: Call by reference

//#include <stdio.h>
//void swap(int *n1, int *n2);
//int main()
//{
//    int num1 = 5, num2 = 10;
//
//    // address of num1 and num2 is passed
//    swap( &num1, &num2);
//
//    printf("num1 = %d\n", num1);
//    printf("num2 = %d", num2);
//    return 0;
//}
//void swap(int* n1, int* n2)
//{
//    int temp;
//    temp = *n1;
//    *n1 = *n2;
//    *n2 = temp;
//}

/// Practice...

//#include<stdio.h>
//void swap(int *i,int *j);
//
//int main(){
//    int num1,num2;
//    scanf("%d%d",&num1,&num2);
//    swap(&num1,&num2);
//    printf("num1= %d\n",num1);
//    printf("num2= %d",num2);
//}
//
//void swap(int *i,int *j){
////    int temp;
////    temp=*i;
////    *i=*j;
////    *j=temp;
//
//*i=*i-*j;
//*j=*i+*j;
//*i=*j-*i;
//
//}


/// Example 2: Passing Pointers to Functions

//#include <stdio.h>
//void addOne(int* ptr) {
//  (*ptr)++; // adding 1 to *ptr
//}
//int main()
//{
//  int* p, i = 10;
//  p = &i;
//  addOne(p);
//  printf("%d", *p); // 11
//  return 0;
//}


/// Practice...

//#include<stdio.h>
//void add(int *pt);
//
//int main(){
//    int *p,i=5;
//    p=&i;
//    add(p);
//
//    printf("i = %d\n",i);
//    printf("*p = %d\n",*p);
//
//    return 0;
//}
//
//void add(int *pt){
//    (*pt)++;
//}


///------Memory Management-----------

///C Dynamic Memory Allocation

///Example 1: malloc() and free()

// Program to calculate the sum of n numbers entered by the user
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int n, i, *ptr, sum = 0;
//    printf("Enter number of elements: ");
//    scanf("%d", &n);
//    ptr = (int*) malloc(n * sizeof(int));
//
//    // if memory cannot be allocated
//    if(ptr == NULL)
//    {
//        printf("Error! memory not allocated.");
//        exit(0);
//    }
//    printf("Enter elements: ");
//    for(i = 0; i < n; ++i)
//    {
//        scanf("%d", ptr + i);
//        sum += *(ptr + i);
//    }
//    printf("Sum = %d", sum);
//
//    // deallocating the memory
//    free(ptr);
//    return 0;
//}


///Practice...

//#include<stdio.h>
//
//int main(){
//    int i,*ptr,sum=0,n;
//
//    printf("Enter number of elements : ");
//    scanf("%d",&n);
//
//    ptr= (int*) malloc(n * sizeof(int));
//
//    if(ptr== NULL){
//        printf("Error! memory not allocated.");
//        exit(0);
//    }
//
//    printf("Enter elements : ");
//    for(i=0;i<n;++i){
//        scanf("%d",(ptr+i));
//        sum+=*(ptr+i);
//    }
//    printf("Print element : ");
//    for(i=0;i<n;++i){
//        printf("%d\n",*(ptr+i));
//    }
//    printf("Sum = %d",sum);
//
//    free(ptr);
//
//    return 0;
//}


/// Example 2: calloc() and free()

//// Program to calculate the sum of n numbers entered by the user
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int n, i, *ptr, sum = 0;
//    printf("Enter number of elements: ");
//    scanf("%d", &n);
//    ptr = (int*) calloc(n, sizeof(int));
//    if(ptr == NULL)
//    {
//        printf("Error! memory not allocated.");
//        exit(0);
//    }
//    printf("Enter elements: ");
//    for(i = 0; i < n; ++i)
//    {
//        scanf("%d", ptr + i);
//        sum += *(ptr + i);
//    }
//    printf("Sum = %d", sum);
//    free(ptr);
//    return 0;
//}


/// Practice...

//#include<stdio.h>
//
//int main()
//{
//    int n,i,*ptr,sum=0;
//
//    printf("Enter number of element : ");
//    scanf("%d",&n);
//
//    ptr=(int*)calloc(n,sizeof(int));
//    if(ptr==NULL)
//    {
//        printf("Error! memory not allocated.");
//        exit(0);
//    }
//
//    printf("Enter element: ");
//    for(i=0; i<n; ++i)
//    {
//        scanf("%d",ptr+i);
//        sum+=*(ptr+i);
//    }
//    printf("Print : ");
//    for(i=0; i<n; ++i)
//    {
//        printf("%d\n",*(ptr+i));
//    }
//    printf("Sum=%d",sum);
//
//    free(ptr);
//
//    return 0;
//}



/// Example 3: realloc()

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int *ptr, i , n1, n2;
//    printf("Enter size: ");
//    scanf("%d", &n1);
//    ptr = (int*) malloc(n1 * sizeof(int));
//    printf("Addresses of previously allocated memory: ");
//    for(i = 0; i < n1; ++i)
//         printf("%u\n",ptr + i);
//    printf("\nEnter the new size: ");
//    scanf("%d", &n2);
//    // rellocating the memory
//    ptr = realloc(ptr, n2 * sizeof(int));
//    printf("Addresses of newly allocated memory: ");
//    for(i = 0; i < n2; ++i)
//         printf("%u\n", ptr + i);
//
//    free(ptr);
//    return 0;
//}


/// Practice...

#include<stdio.h>

int main()
{
    int *ptr, i,n1,n2;

    printf("Enter size : ");
    scanf("%d",&n1);

    ptr=(int *)malloc(5 * sizeof(int));

    if(ptr==NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }
    ptr[3]=5;

    printf("Addresses of previously allocated memory : \n");
    for(i=0; i<n1; ++i)
    {
        printf("%d\n",ptr+i);
    }
    printf("%d\n",*(ptr+3));

    printf("Enter the new size : ");
    scanf("%d",&n2);
    ptr=realloc(ptr,n2*sizeof(int));
    printf("Addresses of newly allocated memory : \n");
    for(i=0; i<n2; i++)
    {
        printf("%d\n",ptr+i);
    }
    printf("%d\n",*(ptr+3));

    printf("Enter the new size : ");
    scanf("%d",&n2);
    ptr=realloc(ptr,n2*sizeof(int));
    printf("Addresses of newly allocated memory : \n");
    for(i=0; i<n2; i++)
    {
        printf("%d\n",ptr+i);
    }

    printf("%d\n",*(ptr+3));

    free(ptr);

    return 0;
}
