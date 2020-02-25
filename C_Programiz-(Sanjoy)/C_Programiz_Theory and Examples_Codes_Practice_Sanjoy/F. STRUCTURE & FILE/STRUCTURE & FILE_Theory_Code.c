/// STRUCTURE & FILE

/// ---------- C Structure ------------

/// Create struct variables

//struct Person
//{
//    char name[50];
//    int citNo;
//    float salary;
//};
//
//int main()
//{
//    struct Person person1, person2, p[20];
//    return 0;
//}

/// Practice...

//#include<stdio.h>
//
//struct student{
//    int id;
//    char name[20];
//};
//
//int main(){
//    struct student s1,s2,s3[5];
//
//    return 0;
//}


/// Example: Add two distances

// Program to add two distances (feet-inch)
//#include <stdio.h>
//struct Distance
//{
//    int feet;
//    float inch;
//} dist1, dist2, sum;
//
//int main()
//{
//    printf("1st distance\n");
//    printf("Enter feet: ");
//    scanf("%d", &dist1.feet);
//    printf("Enter inch: ");
//    scanf("%f", &dist1.inch);
//    printf("2nd distance\n");
//    printf("Enter feet: ");
//    scanf("%d", &dist2.feet);
//    printf("Enter inch: ");
//    scanf("%f", &dist2.inch);
//    // adding feet
//    sum.feet = dist1.feet + dist2.feet;
//    // adding inches
//    sum.inch = dist1.inch + dist2.inch;
//    // changing to feet if inch is greater than 12
//    while (sum.inch >= 12)
//    {
//        ++sum.feet;
//        sum.inch = sum.inch - 12;
//    }
//    printf("Sum of distances = %d\'-%.1f\"", sum.feet, sum.inch);
//    return 0;
//}


/// Practice...

//#include<stdio.h>
//
//struct Distance{
//    int feet;
//    float inch;
//}dist1,dist2,sum;
//
//int main(){
//    printf("1st distance\n");
//    printf("Enter feet : ");
//    scanf("%d",&dist1.feet);
//
//    printf("Enter inch : ");
//    scanf("%f",&dist1.inch);
//
//    printf("2nd distance\n");
//    printf("Enter feet : ");
//    scanf("%d",&dist2.feet);
//
//    printf("Enter inch : ");
//    scanf("%f",&dist2.inch);
//
//    //adding feet
//
//    sum.feet=dist1.feet+dist2.feet;
//
//    //adding inches
//    sum.inch=dist1.inch+dist2.inch;
//
//    //changing to feet if inch is greater than 12
//    while(sum.inch<=12){
//        ++sum.feet;
//        sum.inch=sum.inch-12;
//    }
//
//    printf("Sum of distances = %d\'-%.3f\"",sum.feet,sum.inch);
//    return 0;
//}



///p

//#include<stdio.h>
//
//struct student{
//    int feet;
//    float inch;
//};
//
//int main(){
//     struct student s1, s2;
//     s1.feet=10;
//     s2.inch=12;
//     printf("%d , %f",s1.feet,s2.inch);
//
//    return 0;
//}


///p2
//#include<stdio.h>
//struct student{
//    int id;
//    char name[30];
//}std;
//
//int main(){
//    std.id=2;
//    gets(std.name);
//    printf("id : %d\nname: %s",std.id,std.name);
//
//    return 0;
//}


///p2

//#include<stdio.h>
//typedef struct student{
//    int id;
//    char name[30];
//}std;
//
//int main(){
//    std s1,s2;
//    s1.id=2;
//    gets(s1.name);
//    printf("id : %d\nname: %s",s1.id,s1.name);
//
//    return 0;
//}

///p3

//#include<stdio.h>
//
//typedef struct student{
//    int id;
//    char name[30];
//}std;
//
//int main(){
//
//    struct student st;
//    st.id=7;
//    printf("id : %d\n",st.id);
//
//    std s1,s2;
//    s1.id=2;
//    gets(s1.name);
//    printf("id : %d\nname: %s",s1.id,s1.name);
//
//    return 0;
//}

///p4

//#include<stdio.h>
//void function1();
//
//typedef struct student{
//    int id;
//    char name[30];
//}std;
//
//struct student1{
//    std s1;
//    int roll;
//    int reg;
//}test,test1;
//
//int main(){
//    struct student1 st1,st2;
//    st1.reg=3;
//    printf("reg : %d\n",st1.reg);
//
//    st2.s1.id=13;
//    printf("id : %d\n",st2.s1.id);
//
//    function1();
//
//    return 0;
//}
//
//void function1(){
//    test1.roll=23;
//    printf("roll : %d\n",test1.roll);
//    struct student1 t1,t2;
//    t1.s1.id=9;
//    printf("id : %d",t1.s1.id);
//
//}


///------------ Structure & Pointers ----------------

/// C structs and Pointers

///Example: Access members using Pointer

//#include <stdio.h>
//struct person
//{
//   int age;
//   float weight;
//};
//int main()
//{
//    struct person *personPtr, person1;
//    personPtr = &person1;
//
//    printf("Enter age: ");
//    scanf("%d", &personPtr->age);
//
//    printf("Enter weight: ");
//    scanf("%f", &personPtr->weight);
//
//    printf("Displaying:\n");
//    printf("Age: %d\n", personPtr->age);
//    printf("weight: %f", personPtr->weight);
//    return 0;
//}



/// Practice...

//#include<stdio.h>
//struct student{
//    int id;
//    char name[20];
//};
//
//struct student1{
//
//};
//
//int main(){
//    struct student *ptr,person1;
//    ptr=&person1;
//
//    printf("Enter id : ");
//    scanf("%d",&ptr->id);
//
//    printf("Enter name : ");
//    scanf("%s",&ptr->name);
//
//    printf("Displaying : \n");
//    printf("id : %d\n",ptr->id);
//    printf("name : %s",ptr->name);
//
//    return 0;
//}

/// p1

//#include<stdio.h>
//struct student{
//    int id;
//    char name[20];
//};
//
//struct student1{
//    struct student s1;
//    int roll;
//    char n[30];
//};
//
//int main(){
//    struct student1 *ptr,person1;
//    ptr=&person1;
//
//    printf("Enter roll : ");
//    scanf("%d",&(*ptr).roll);
//    printf("roll : %d\n",(*ptr).roll);
//
//    printf("Enter id : ");
//    scanf("%d",&(*ptr).s1.id);
//    printf("id : %d\n",(*ptr).s1.id);
//
//    printf("Enter name : ");
//    scanf("%s",&ptr->s1.name);
//    printf("name : %s",ptr->s1.name);
//
//    return 0;
//}


/// Example: Dynamic memory allocation of structs

//#include <stdio.h>
//#include <stdlib.h>
//struct person {
//   int age;
//   float weight;
//   char name[30];
//};
//int main()
//{
//   struct person *ptr;
//   int i, n;
//   printf("Enter the number of persons: ");
//   scanf("%d", &n);
//   // allocating memory for n numbers of struct person
//   ptr = (struct person*) malloc(n * sizeof(struct person));
//   for(i = 0; i < n; ++i)
//   {
//       printf("Enter first name and age respectively: ");
//       // To access members of 1st struct person,
//       // ptr->name and ptr->age is used
//       // To access members of 2nd struct person,
//       // (ptr+1)->name and (ptr+1)->age is used
//       scanf("%s %d", (ptr+i)->name, &(ptr+i)->age);
//   }
//   printf("Displaying Information:\n");
//   for(i = 0; i < n; ++i)
//       printf("Name: %s\tAge: %d\n", (ptr+i)->name, (ptr+i)->age);
//   return 0;
//}


/// Practice...

//#include<stdio.h>
//struct student{
//    int id;
//    char name[30];
//};
//
//int main(){
//  struct student *ptr;
//
//  int i,n;
//
//  printf("Enter the number of students : ");
//  scanf("%d",&n);
//
//  //allocating memory for n number of struct student
//  ptr = (struct student*)malloc(n*sizeof(struct student));
//  for(i=0;i<n;++i){
//    printf("Enter id and name : ");
//    //to access member of 1st struct student
//    //ptr->id and ptr->name is used
//
//    //to access member of 2nd struct student
//    //(ptr+1)->id and (ptr+1)->name
//
//    scanf("%d%s",&(ptr+i)->id,(ptr+i)->name);
//  }
//
//  printf("Displaying Information : \n");
//  for(i=0;i<n;++i){
//    printf("id : %d \nname : %s\n",(ptr+i)->id,(ptr+i)->name);
//  }
//
//  return 0;
//
//}


/// ----------Structure & Functions----------

/// how you can pass structures to a function

//#include <stdio.h>
//
//struct student
//{
//    char name[50];
//    int age;
//};
//// function prototype
//void display(struct student s);
//int main()
//{
//    struct student s1;
//    printf("Enter name: ");
//    scanf("%[^\n]%*c", s1.name);
//    printf("Enter age: ");
//    scanf("%d", &s1.age);
//
//    display(s1);   // passing struct as an argument
//
//    return 0;
//}
//void display(struct student s)
//{
//  printf("\nDisplaying information\n");
//  printf("Name: %s", s.name);
//  printf("\nAge: %d", s.age);
//}



/// p1...

//#include<stdio.h>
//
//struct student{
//    int id;
//    char name[20];
//};
//
//void display(struct student s);
//
//int main(){
//    struct student s1,s2;
//
//    printf("Enter id : ");
//    scanf("%d",&s1.id);
//    printf("Enter name : ");
//    //scanf("%s",s1.name);
//    scanf("\n%[^\n]%*c", s1.name);
//
//    display(s1);
//
//    return 0;
//}
//
//void display(struct student s){
//
//    printf("\nDisplaying information :: \n");
//    printf("id : %d\n",s.id);
//    printf("name : %s",s.name);
//}


/// Return struct from a function...

//#include <stdio.h>
//struct student
//{
//    char name[50];
//    int age;
//};
//// function prototype
//struct student getInformation();
//int main()
//{
//    struct student s;
//    s = getInformation();
//    printf("\nDisplaying information\n");
//    printf("Name: %s", s.name);
//    printf("\nRoll: %d", s.age);
//
//    return 0;
//}
//struct student getInformation()
//{
//  struct student s1;
//  printf("Enter name: ");
//  scanf ("%[^\n]%*c", s1.name);
//  printf("Enter age: ");
//  scanf("%d", &s1.age);
//
//  return s1;
//}


/// Practice ...

//#include<stdio.h>
//
//struct student{
//    int id;
//    char name[25];
//};
//
//struct student getintput();
//
//int main(){
//    struct student s1,s2;
//    s1=getintput();
//    printf("\nDisplaying information\n");
//    printf("id : %d\nname : %s",s1.id,s1.name);
//    //printf("name : %s",s1.name);
//
//    return 0;
//}
//
//struct student getintput(){
//    struct student s;
//
//    printf("Enter id : ");
//    scanf("%d",&s.id);
//    printf("Enter Name : ");
//    scanf("\n%[^\n]%*c",s.name);
//
//    return s;
//}


/// Passing struct by reference.

//#include <stdio.h>
//typedef struct Complex
//{
//    float real;
//    float imag;
//} complex;
//
//void addNumbers(complex c1, complex c2, complex *result);
//
//int main()
//{
//    complex c1, c2, result;
//    printf("For first number,\n");
//    printf("Enter real part: ");
//    scanf("%f", &c1.real);
//    printf("Enter imaginary part: ");
//    scanf("%f", &c1.imag);
//    printf("For second number, \n");
//    printf("Enter real part: ");
//    scanf("%f", &c2.real);
//    printf("Enter imaginary part: ");
//    scanf("%f", &c2.imag);
//    addNumbers(c1, c2, &result);
//    printf("\nresult.real = %.1f\n", result.real);
//    printf("result.imag = %.1f", result.imag);
//
//    return 0;
//}
//void addNumbers(complex c1, complex c2, complex *result)
//{
//     result->real = c1.real + c2.real;
//     result->imag = c1.imag + c2.imag;
//}



//#include<stdio.h>
//
//typedef struct mark{
//    float bangla;
//    float english;
//}mk;
//
//void sumMark(mk m1,mk m2,mk *result);
//
//int main(){
//    mk m1,m2,result;
//    printf("For first number,\n");
//    printf("Enter bangla1 mark : ");
//    scanf("%f",&m1.bangla);
//    printf("Enter English1 mark : ");
//    scanf("%f",&m1.english);
//
//    printf("For first number,\n");
//    printf("Enter bangla2 mark : ");
//    scanf("%f",&m2.bangla);
//    printf("Enter English2 mark : ");
//    scanf("%f",&m2.english);
//
//    sumMark(m1,m2,&result);
//
//    printf("\nresult.bangla : %.3f\n",result.bangla);
//    printf("\nresult.english : %.3f\n",result.english);
//
//    return 0;
//}
//
//void sumMark(mk m1,mk m2,mk *result){
//    result->bangla=m1.bangla+m2.bangla;
//    result->english=m1.english+m2.english;
//}


/// C Unions

/// Difference between unions and structures

//#include <stdio.h>
//union unionJob
//{
//   //defining a union
//   char name[32];
//   float salary;
//   int workerNo;
//} uJob;
//struct structJob
//{
//   char name[32];
//   float salary;
//   int workerNo;
//} sJob;
//int main()
//{
//   printf("size of union = %d bytes", sizeof(uJob));
//   printf("\nsize of structure = %d bytes", sizeof(sJob));
//   return 0;
//}


///practice...

//#include<stdio.h>
//union unionjob{
//    char name[20];
//    float salary;
//    int workerNo;
//}ujob;
//
//struct structjob{
//    char name[20];
//    float salary;
//    int workerNo;
//}sjob;
//
//int main(){
//    printf("Size of union= %d bytes\n",sizeof(ujob));
//    printf("Size of struct= %d bytes",sizeof(sjob));
//
//    return 0;
//}


/// Only one union member can be accessed at a time

//#include <stdio.h>
//union Job
//{
//   float salary;
//   int workerNo;
//} j;
//int main()
//{
//   j.salary = 12.3;
//   j.workerNo = 100;
//   printf("Salary = %.1f\n", j.salary);
//   printf("Number of workers = %d", j.workerNo);
//   return 0;
//}


/// Practice...

//#include<stdio.h>
//union numberC File Handling
//{
//    int x;
//    int y;
//} j;
//
//int main()
//{
//    j.x=12;
//    j.y=15;
//
//    printf("x = %d\n",j.x);
//    printf("x = %d\n",j.y);
//    //printf("y = %.3f",j.y);
//
//    return 0;
//}

/// -----------Files Handling------------

/// Example 1: Write to a text file

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//   int num;
//   FILE *fptr;
//   // use appropriate location if you are using MacOS or Linux
//   if(fptr == NULL)
//   {
//      printf("Error!");
//      exit(1);
//   }
//   printf("Enter num: ");
//   scanf("%d",&num);
//   fprintf(fptr,"%d",num);
//   fclose(fptr);
//   return 0;
//}


/// Practice...

//#include<stdio.h>
//
//int main(){
//    int n;
//    FILE *fptr;
//    fptr=fopen("C:\\Users\\SANJOY ROY\\Desktop\\C_Programming_T_Practice_Sanjoy\\t_F\\test.txt","w");
//
//    if(fptr==NULL){
//        printf("Error...");
//        exit(1);
//    }
//
//    printf("Enter number : ");
//    scanf("%d",&n);
//
//    fprintf(fptr,"%d",n);
//    //fprintf(fptr,"%d",15);
//    //fprintf(fptr,"%.3f",12.8);
//    //fprintf(fptr,12);     // wrong
//    //fprintf(fptr,'a');    //wrong
//
//    fclose(fptr);
//
//    return 0;
//}


/// Example 2: Read from a text file

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//   int num;
//   FILE *fptr;
//   if ((fptr = fopen("program.txt","r")) == NULL){
//       printf("Error! opening file");
//       // Program exits if the file pointer returns NULL.
//       exit(1);
//   }
//   fscanf(fptr,"%d", &num);
//   printf("Value of n=%d", num);
//   fclose(fptr);
//
//   return 0;
//}

/// practice...

//#include<stdio.h>
//
//int main(){
//    int n;
//    FILE *fptr;
//    fptr= fopen("C:\\Users\\SANJOY ROY\\Desktop\\C_Programming_T_Practice_Sanjoy\\t_F\\test.txt","r");
//
//    if(fptr==NULL){
//        printf("Error...");
//        exit(1);
//    }
//
//    fscanf(fptr,"%d",&n);
//    printf("value of n = %d",n);
//
//    fclose(fptr);
//
//    return 0;
//}

/// Example 3: Write to a binary file using fwrite()

//#include <stdio.h>
//#include <stdlib.h>
//struct threeNum
//{
//   int n1, n2, n3;
//};
//int main()
//{
//   int n;
//   struct threeNum num;
//   FILE *fptr;
//   if ((fptr = fopen("C:\\program.bin","wb")) == NULL){
//       printf("Error! opening file");
//       // Program exits if the file pointer returns NULL.
//       exit(1);
//   }
//   for(n = 1; n < 5; ++n)
//   {
//      num.n1 = n;
//      num.n2 = 5*n;
//      num.n3 = 5*n + 1;
//      fwrite(&num, sizeof(struct threeNum), 1, fptr);
//   }
//   fclose(fptr);
//
//   return 0;
//}


/// Practice...

//#include<stdio.h>
//struct student{
//    int s1,s2,s3;
//};
//
//int main(){
//    int n;
//    struct student stu;
//    FILE *fptr;
//
//    if((fptr=fopen("C:\\Users\\SANJOY ROY\\Desktop\\C_Programming_T_Practice_Sanjoy\\t_F\\test.bin","wb"))==NULL){
//        printf("Error...");
//        exit(1);
//    }
//    for(n=1;n<5;++n){
//        stu.s1=n;
//        stu.s2=5*n;
//        stu.s3=5*n+1;
//        fwrite(&stu,sizeof(struct student),1,fptr);
//    }
//    fclose(fptr);
//
//    return 0;
//}

/// p1

//#include<stdio.h>
//struct student{
//    int s1,s2,s3;
//};
//
//int main(){
//    int n;
//    //struct student stu;
//    FILE *fptr;
//
//    if((fptr=fopen("C:\\Users\\SANJOY ROY\\Desktop\\C_Programming_T_Practice_Sanjoy\\t_F\\test.bin","wb"))==NULL){
//        printf("Error...");
//        exit(1);
//    }
//    for(n=1;n<5;++n){
////        stu.s1=n;
////        stu.s2=5*n;
////        stu.s3=5*n+1;
////        fwrite(&stu,sizeof(struct student),1,fptr);
//       fwrite(&n,sizeof(int),1,fptr);
//    }
//    fclose(fptr);
//
//    return 0;
//}

/// p2

//#include<stdio.h>
//struct student{
//    int s1,s2,s3;
//};
//
//int main(){
//    int n;
//    struct student stu;
//    FILE *fptr;
//
//    if((fptr=fopen("C:\\Users\\SANJOY ROY\\Desktop\\C_Programming_T_Practice_Sanjoy\\t_F\\test.txt","w"))==NULL){
//        printf("Error...");
//        exit(1);
//    }
//    for(n=1;n<5;++n){
//        stu.s1=n;
//        stu.s2=5*n;
//        stu.s3=5*n+1;
//        fwrite(&stu,sizeof(struct student),1,fptr);
//    }
//    fclose(fptr);
//
//    return 0;
//}


/// Example 4: Read from a binary file using fread()

//#include <stdio.h>
//#include <stdlib.h>
//struct threeNum
//{
//   int n1, n2, n3;
//};
//int main()
//{
//   int n;
//   struct threeNum num;
//   FILE *fptr;
//   if ((fptr = fopen("C:\\program.bin","rb")) == NULL){
//       printf("Error! opening file");
//       // Program exits if the file pointer returns NULL.
//       exit(1);
//   }
//   for(n = 1; n < 5; ++n)
//   {
//      fread(&num, sizeof(struct threeNum), 1, fptr);
//      printf("n1: %d\tn2: %d\tn3: %d", num.n1, num.n2, num.n3);
//   }
//   fclose(fptr);
//
//   return 0;
//}

/// Practice...

//#include<stdio.h>
//
//struct student{
//    int s1,s2,s3;
//};
//
//int main(){
//    int n;
//    struct student stu;
//    FILE *fptr;
//    fptr=fopen("C:\\Users\\SANJOY ROY\\Desktop\\C_Programming_T_Practice_Sanjoy\\t_F\\test.bin","rb");
//    if(fptr==NULL){
//        printf("Error...");
//        exit(1);
//    }
//    for(n=1;n<5;++n){
//        fread(&stu,sizeof(struct student),1,fptr);
//        printf("\n\ns1 : %d \ns2 : %d \ns3 : %d",stu.s1,stu.s2,stu.s3);
//    }
//    fclose(fptr);
//
//    return 0;
//}

/// p1

//#include<stdio.h>

////struct student{
////    int s1,s2,s3;
////};
//
//int main(){
//    int n,i,j;
////    struct student stu;
//    FILE *fptr;
//    fptr=fopen("C:\\Users\\SANJOY ROY\\Desktop\\C_Programming_T_Practice_Sanjoy\\t_F\\test.bin","rb");
//    if(fptr==NULL){
//        printf("Error...");
//        exit(1);
//    }
//    for(i=1;i<5;++i){
//        //fread(&stu,sizeof(struct student),1,fptr);
//        fread(&j,sizeof(int),1,fptr);
//        //printf("\n\ns1 : %d \ns2 : %d \ns3 : %d",stu.s1,stu.s2,stu.s3);
//        printf("\nj : %d\n",j);
//    }
//    fclose(fptr);
//
//    return 0;
//}

/// Example 5: fseek()

//#include <stdio.h>
//#include <stdlib.h>
//struct threeNum
//{
//   int n1, n2, n3;
//};
//int main()
//{
//   int n;
//   struct threeNum num;
//   FILE *fptr;
//   if ((fptr = fopen("program.bin","rb")) == NULL){
//       printf("Error! opening file");
//       // Program exits if the file pointer returns NULL.
//       exit(1);
//   }
//
//   // Moves the cursor to the end of the file
//   fseek(fptr, -sizeof(struct threeNum), SEEK_END);
//   for(n = 1; n < 5; ++n)
//   {
//      fread(&num, sizeof(struct threeNum), 1, fptr);
//      printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
//      fseek(fptr, -2*sizeof(struct threeNum), SEEK_CUR);
//   }
//   fclose(fptr);
//
//   return 0;
//}

/// Practice...

#include<stdio.h>

struct student{
    int s1,s2,s3;
};

int main(){
    int n;
    struct student stu;
    FILE *fptr;
    fptr=fopen("C:\\Users\\SANJOY ROY\\Desktop\\C_Programming_T_Practice_Sanjoy\\t_F\\test.bin","rb");

    if(fptr==NULL){
        printf("Error...");
        exit(1);
    }

    fseek(fptr,-sizeof(struct student),SEEK_END);

    for(n=1;n<5;++n){
        fread(&stu,sizeof(struct student),1,fptr);
        printf("\n\nn1 : %d\nn2 : %d\nn3 : %d\n",stu.s1,stu.s2,stu.s3);
        fseek(fptr,-2*sizeof(struct student),SEEK_CUR);
    }
    fclose(fptr);

    return 0;
}
