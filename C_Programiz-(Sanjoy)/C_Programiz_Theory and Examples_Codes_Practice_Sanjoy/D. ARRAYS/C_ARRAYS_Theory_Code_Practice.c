/// ------------ARRAYS---------------

//How to declare an array :    // dataType arrayName[arraySize];

/// Example 1: Array Input/Output

// Program to take 5 values from the user and store them in an array
// Print the elements stored in the array
//#include <stdio.h>
//
//int main()
//{
//    int values[5];
//    printf("Enter 5 integers: ");
//    // taking input and storing it in an array
//    for(int i = 0; i < 5; ++i)
//    {
//        scanf("%d", &values[i]);
//    }
//    printf("Displaying integers: ");
//    // printing elements of an array
//    for(int i = 0; i < 5; ++i)
//    {
//        printf("%d\n", values[i]);
//    }
//    return 0;
//}

/// Practice...

//#include<stdio.h>
//
//int main()
//{
//    int arr[5],i;
//
//    for(i=0; i<5; ++i)
//    {
//        printf("Enter int value : ");
//        scanf("%d",&arr[i]);
//    }
//
//    printf("\n\n");
//
//    for(i=0; i<5; ++i)
//    {
//        printf("output value : %d\n",arr[i]);
//    }
//
//    return 0;
//}



/// Example 2: Calculate Average

// Program to find the average of n numbers using arrays

//#include <stdio.h>
//int main()
//{
//     int marks[10], i, n, sum = 0, average;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);
//     for(i=0; i<n; ++i)
//     {
//          printf("Enter number%d: ",i+1);
//          scanf("%d", &marks[i]);
//
//          // adding integers entered by the user to the sum variable
//          sum += marks[i];
//     }
//     average = sum/n;
//     printf("Average = %d", average);
//     return 0;
//}

/// Practice...

//#include<stdio.h>
//
//int main(){
//    int num[20],i,n,sum=0,avg;
//    printf("Enter a number a element : ");
//    scanf("%d",&n);
//    for(i=0;i<n;++i){
//        printf("Enter number %d : ",i+1);
//        scanf("%d",&num[i]);
//        sum+=num[i];
//    }
//    avg=sum/n;
//    printf("Average = %d",avg);
//
//    return 0;
//}


///----------C Multidimensional Arrays----------


/// Example 1: Two-dimensional array to store and print values

// C program to store temperature of two cities of a week and display it.

//#include <stdio.h>
//const int CITY = 2;
//const int WEEK = 7;
//int main()
//{
//  int temperature[CITY][WEEK];
//  // Using nested loop to store values in a 2d array
//  for (int i = 0; i < CITY; ++i)
//  {
//    for (int j = 0; j < WEEK; ++j)
//    {
//      printf("City %d, Day %d: ", i + 1, j + 1);
//      scanf("%d", &temperature[i][j]);
//    }
//  }
//  printf("\nDisplaying values: \n\n");
//  // Using nested loop to display vlues of a 2d array
//  for (int i = 0; i < CITY; ++i)
//  {
//    for (int j = 0; j < WEEK; ++j)
//    {
//      printf("City %d, Day %d = %d\n", i + 1, j + 1, temperature[i][j]);
//    }
//  }
//  return 0;
//}


/// Practice...

//#include<stdio.h>
//
//const int r=2,c=3;
//
//int main()
//{
//    int test[r][c];
//    printf("\nInput :\n\n");
//    for(int i=0; i<r; ++i)
//    {
//        for(int j=0; j<c; ++j)
//        {
//            printf("input r%dc%d : ",i+1,j+1);
//            scanf("%d",&test[i][j]);
//        }
//        printf("\n");
//    }
//
//    printf("\nDisplay :\n\n");
//    for(int i=0; i<r; ++i)
//    {
//        for(int j=0; j<c; ++j)
//        {
//            printf("input r%dc%d : %d\n",i+1,j+1,test[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

/// Example 2: Sum of two matrices

// C program to find the sum of two matrices of order 2*2

//#include <stdio.h>
//int main()
//{
//  float a[2][2], b[2][2], result[2][2];
//  // Taking input using nested for loop
//  printf("Enter elements of 1st matrix\n");
//  for (int i = 0; i < 2; ++i)
//    for (int j = 0; j < 2; ++j)
//    {
//      printf("Enter a%d%d: ", i + 1, j + 1);
//      scanf("%f", &a[i][j]);
//    }
//  // Taking input using nested for loop
//  printf("Enter elements of 2nd matrix\n");
//  for (int i = 0; i < 2; ++i)
//    for (int j = 0; j < 2; ++j)
//    {
//      printf("Enter b%d%d: ", i + 1, j + 1);
//      scanf("%f", &b[i][j]);
//    }
//  // adding corresponding elements of two arrays
//  for (int i = 0; i < 2; ++i)
//    for (int j = 0; j < 2; ++j)
//    {
//      result[i][j] = a[i][j] + b[i][j];
//    }
//  // Displaying the sum
//  printf("\nSum Of Matrix:");
//  for (int i = 0; i < 2; ++i)
//    for (int j = 0; j < 2; ++j)
//    {
//      printf("%.1f\t", result[i][j]);
//      if (j == 1)
//        printf("\n");
//    }
//  return 0;
//}

/// Practice...

// C program to find the sum of two matrices of order 2*2

//#include <stdio.h>
//int main()
//{
//    float numi[2][2], numj[2][2], result[2][2];
//    int i,j;
//
//    printf("Enter elements of 1st matrix\n");
//    for (i = 0; i < 2; ++i)
//        for (j = 0; j < 2; ++j)
//        {
//            printf("Enter numi%d%d: ", i + 1, j + 1);
//            scanf("%f", &numi[i][j]);
//        }
//
//    printf("Enter elements of 2nd matrix\n");
//    for (i = 0; i < 2; ++i)
//        for (j = 0; j < 2; ++j)
//        {
//            printf("Enter numj%d%d: ", i + 1, j + 1);
//            scanf("%f", &numj[i][j]);
//        }
//
//    for (i = 0; i < 2; ++i)
//        for (j = 0; j < 2; ++j)
//        {
//            result[i][j] = numi[i][j] + numj[i][j];
//        }
//
//    // Displaying the sum
//
//    printf("\nSum Of Matrix:\n");
//    for (int i = 0; i < 2; ++i)
//        for (int j = 0; j < 2; ++j)
//        {
//            printf("%.1f\t", result[i][j]);
//            if (j == 1){
//                printf("\n");
//            }
//        }
//    return 0;
//}


/// Example 3: Three-dimensional array


// C Program to store and print 12 values entered by the user

//#include <stdio.h>
//int main()
//{
//  int test[2][3][2];
//  printf("Enter 12 values: \n");
//  for (int i = 0; i < 2; ++i)
//  {
//    for (int j = 0; j < 3; ++j)
//    {
//      for (int k = 0; k < 2; ++k)
//      {
//        scanf("%d", &test[i][j][k]);
//      }
//    }
//  }
//  // Printing values with proper index.
//  printf("\nDisplaying values:\n");
//  for (int i = 0; i < 2; ++i)
//  {
//    for (int j = 0; j < 3; ++j)
//    {
//      for (int k = 0; k < 2; ++k)
//      {
//        printf("test[%d][%d][%d] = %d\n", i, j, k, test[i][j][k]);
//      }
//    }
//  }
//  return 0;
//}


/// Practice...

//#include<stdio.h>
//
//int main()
//{
//    int  s,r,c;
//    printf("Enter array number s , r , c : ");
//    scanf("%d%d%d",&s,&r,&c);
//    int number[s][r][c];
//    int i,j,k;
//
//    printf("Inputs : \n\n");
//
//    for(i=0; i<s; ++i)
//    {
//        printf("%d : \n\n",i+1);
//        for(j=0; j<r; ++j)
//        {
//            for(k=0; k<c; ++k)
//            {
//                printf("input %d%d%d : ",i+1,j+1,k+1);
//                scanf("%d",&number[i][j][k]);
//            }
//            printf("\n");
//        }
//    }
//
//    printf("\n\n");
//
//    for(i=0; i<s; ++i)
//    {
//        for(j=0; j<r; ++j)
//        {
//            for(k=0; k<c; ++k)
//            {
//                printf(" %d\t",number[i][j][k]);
//            }
//            printf("\n");
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

/// -----------------Arrays & Functions--------------

/// Pass arrays to a function in C

/// Example 1: Passing an array


//#include <stdio.h>
//
//void display(int age1, int age2)
//{
//    printf("%d\n", age1);
//    printf("%d\n", age2);
//}
//
//int main()
//{
//    int ageArray[] = {2, 8, 4, 12};
//    // Passing second and third elements to display()
//    display(ageArray[1], ageArray[2]);
//    return 0;
//}


/// Practice...

//#include<stdio.h>
//void display(int a,int b);
//
//int main()
//{
//    int number[]= {2,3,4};
//    display(number[0],number[2]);
//
//    return 0;
//}
//
//void display(int a,int b)
//{
//    printf("%d\n%d",a,b);
//}


///Example 2: Passing arrays to functions

// Program to calculate the sum of array elements by passing to a function

//#include <stdio.h>
//float calculateSum(float age[]);
//int main() {
//    float result, age[] = {23.4, 55, 22.6, 3, 40.5, 18};
//    // age array is passed to calculateSum()
//    result = calculateSum(age);
//    printf("Result = %.2f", result);
//    return 0;
//}
//
//float calculateSum(float age[]) {
//  float sum = 0.0;
//  for (int i = 0; i < 6; ++i) {
//		sum += age[i];
//  }
//  return sum;
//}

/// Practice...

//#include<stdio.h>
//
//int calculation(float n[]);
//
//int main(){
//    float a[4]={12,3,5};
//    printf("Result : %d",calculation(a));
//
//    return 0;
//}
//
//int calculation(float n[]){
//    float sum=0;
//    for(int i=0;i<3;++i){
//        sum+=n[i];
//    }
//    return sum;
//}


/// Example 3: Passing two-dimensional arrays

//#include <stdio.h>
//void displayNumbers(int num[2][2]);
//int main()
//{
//    int num[2][2];
//    printf("Enter 4 numbers:\n");
//    for (int i = 0; i < 2; ++i)
//        for (int j = 0; j < 2; ++j)
//            scanf("%d", &num[i][j]);
//    // passing multi-dimensional array to a function
//    displayNumbers(num);
//    return 0;
//}
//void displayNumbers(int num[2][2])
//{
//    printf("Displaying:\n");
//    for (int i = 0; i < 2; ++i)
//    {
//        for (int j = 0; j < 2; ++j)
//        {
//            printf("%d\n", num[i][j]);
//        }
//    }
//}


/// Practice...


//#include<stdio.h>
//void displayN(int n[2][3]);
//
//int main(){
//    int num[2][3]={{1,3,9},{8,5,6}};
//
//    displayN(num);
//}
//
//void displayN(int n[2][3]){
//
//    for(int i=0;i<2;++i){
//        for(int j=0;j<3;++j){
//            printf("%d\t",n[i][j]);
//        }
//        printf("\n");
//    }
//}


/// three dimensional array " Practice

//
//#include<stdio.h>
//
//void displayN(int n[2][2][3]);
//
//int main()
//{
//    int num[2][2][3]= {{{1,3,9},{8,5,6}},{{1,3,9},{8,5,6}}};
//
//    displayN(num);
//}
//
//void displayN(int n[2][2][3])
//{
//
//    for(int i=0; i<2; ++i)
//    {
//        for(int j=0; j<2; ++j)
//        {
//            for(int k=0; k<3; ++k)
//            {
//                printf("%d\t",n[i][j][k]);
//            }
//            printf("\n");
//        }
//        printf("\n");
//    }
//}




/// ---------------C Programming Strings-------------


/// Example 1: scanf() to read a string

//#include <stdio.h>
//int main()
//{
//    char name[20];
//    printf("Enter name: ");
//    scanf("%s", name);
//    printf("Your name is %s.", name);
//    return 0;
//}



/// Practice...

//#include<stdio.h>
//
//int main()
//{
//    char name[25]="Sanjoy Roy";
//    // name[]="Sanjoy Roy";         //error
//    printf("%s\n",name);
//    printf("Enter name : ");
//    scanf("%s",&name);
//    printf("Output name : %s",name);
//
//    return 0;
//}

/// Example 2: fgets() and puts()

//#include <stdio.h>
//
//int main()
//{
//    char name[30];
//    printf("Enter name: ");
//    fgets(name, sizeof(name), stdin);  // read string
//    printf("Name: ");
//    puts(name);         // display string
//    return 0;
//}

/// Practice...

//#include<stdio.h>
//
//int main(){
//    char name[20];
//    printf("Enter name : ");
//    fgets(name,sizeof(name),stdin);  // read string
//    printf("Name : ");
//    puts(name);
//
//    return 0;
//}


/// Passing Strings to Functions

/// Example 3: Passing string to a Function

//#include <stdio.h>
//void displayString(char str[]);
//int main()
//{
//    char str[50];
//    printf("Enter string: ");
//    fgets(str, sizeof(str), stdin);
//    displayString(str);     // Passing string to a function.
//    return 0;
//}
//void displayString(char str[])
//{
//    printf("String Output: ");
//    puts(str);
//}

/// Practice...

//---1

//#include<stdio.h>
//
//int main(){
//    char name[20]={'s','e','i','\0'};
//    int i=0;
//    while(i<5){
//        printf("%c",name[i]);
//        ++i;
//    }
//    printf("sanjoy");
//}

//---2

//#include<stdio.h>
////void display(char n[]);
//
//int main(){
//    char name[20];
//
//    printf("Enter name : ");
//    fgets(name,sizeof(name),stdin);
//    display(name);
//    return 0;
//}
//void display(char n[]){
//    printf("Output name : ");
//    puts(n);
//}


/// Strings and Pointers
///Example 4: Strings and Pointers

//#include <stdio.h>
//int main(void) {
//  char name[] = "Harry Potter";
//  printf("%c", *name);     // Output: H
//  printf("%c", *(name+1));   // Output: a
//  printf("%c", *(name+7));   // Output: o
//  char *namePtr;
//  namePtr = name;
//  printf("%c", *namePtr);     // Output: H
//  printf("%c", *(namePtr+1));   // Output: a
//  printf("%c", *(namePtr+7));   // Output: o
//}



/// Practice...
//
//#include<stdio.h>
//
//int main(){
//    char name[20];
//    fgets(name,sizeof(name),stdin);
//
//    printf("%c\n",*name);
//    printf("%c\n",*(name+1));
//    printf("%c\n\n",*(name+2));
//    char *namep;
//    namep=name;
//    printf("%c\n",*namep);
//    printf("%c",*(namep+1));
//
//    return 0;
//}


/// -----------String Functions------------
/// String Manipulations In C Programming Using Library Functions

//#include<stdio.h>
//int main()
//{
//    char name[30];
//    printf("Enter name: ");
//    gets(name);     //Function to read string from user.
//    printf("Name: ");
//    puts(name);    //Function to display string.
//    return 0;
//}


/// Practice...

//#include<stdio.h>
//
//int main(){
//    char name[20];
//
//    gets(name);
//    puts(name);
//
//    return 0;
//}

/// C strlen()
/// Example: C strlen() function

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char a[20]="Program";
//    char b[20]={'P','r','o','g','r','a','m','\0'};
//    printf("Length of string a = %ld \n",strlen(a));
//    printf("Length of string b = %ld \n",strlen(b));
//    return 0;
//}


/// Practice...

//#include<stdio.h>
//
//int main()
//{
//    char name[20]="Sanjoy";
//    char name1[25]= {'s','a','n','j','o','y','\0'};
//
//    printf("length of string name : %d\n",strlen(name));
//    printf("length of string name1 : %d",strlen(name1));
//
//    return 0;
//}


/// C strcpy()
/// strcpy() Function prototype : char* strcpy(char* destination, const char* source);
/// Example: C strcpy()

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char str1[10]= "awesome";
//    char str2[10];
//    char str3[10];
//    strcpy(str2, str1);
//    strcpy(str3, "well");
//    puts(str2);
//    puts(str3);
//    return 0;
//}


///Practice...

//#include<stdio.h>
//#include<string.h>
//
//int main(){
//    char name[]="Sanjoy",name1[13],name2[14];
//    strcpy(name1,name);
//    strcpy(name2," Roy");
//
//    puts(name1);
//    puts(name2);
//
//    return 0;
//}


/// C strcat()

/// Example: C strcat() function

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char str1[] = "This is ", str2[] = "programiz.com";
//    //concatenates str1 and str2 and resultant string is stored in str1.
//    strcat(str1,str2);
//    puts(str1);
//    puts(str2);
//    return 0;
//}


/// Practice...

//#include<stdio.h>
//#include<string.h>
//
//int main(){
//    char name[]="Sanjoy ",name1[]="Roy . ";
//
//    strcat(name,name1);
//
//    puts(name);
//    puts(name1);
//
//    return 0;
//}


/// C strcmp()
/// Example: C strcmp() function

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
//    int result;
//    // comparing strings str1 and str2
//    result = strcmp(str1, str2);
//    printf("strcmp(str1, str2) = %d\n", result);
//    // comparing strings str1 and str3
//    result = strcmp(str1, str3);
//    printf("strcmp(str1, str3) = %d\n", result);
//    return 0;
//}

/// Practice...

#include<stdio.h>
#include<string.h>

int main(){
    char name[]="San",name1[]="San",name2[]="Sanjoy",name3[]="Sa";

    int result;

    result=strcmp(name,name1);
    printf("%d\n",result);
    result=strcmp(name,name2);
    printf("%d\n",result);
    result=strcmp(name,name3);
    printf("%d",result);
}
