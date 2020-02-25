/// Store information of n students using structures
/// C Program to Store Information Using Structures with Dynamically Memory Allocation
/// Demonstrate the Dynamic Memory Allocation for Structure

//#include <stdio.h>
//#include <stdlib.h>
//struct course
//{
//    int marks;
//    char subject[30];
//};
//int main()
//{
//    struct course *ptr;
//    int i, noOfRecords;
//    printf("Enter the number of records: ");
//    scanf("%d", &noOfRecords);
//    // Memory allocation for noOfRecords structures
//    ptr = (struct course *)malloc(noOfRecords * sizeof(struct course));
//    for (i = 0; i < noOfRecords; ++i)
//    {
//        printf("Enter the name of the subject and marks respectively:\n");
//        scanf("%s %d", &(ptr + i)->subject, &(ptr + i)->marks);
//    }
//
//    printf("Displaying Information:\n");
//    for (i = 0; i < noOfRecords; ++i)
//        printf("%s\t%d\n", (ptr + i)->subject, (ptr + i)->marks);
//    return 0;
//}


/// Practice...

#include<stdio.h>
#include<stdlib.h>

struct student{
    int id;
    char name[30];
};

int main(){
   struct student *ptr;
   int i,n;
   printf("Enter student\'s number : ");
   scanf("%d",&n);

   ptr=(struct student *)malloc(n*sizeof(struct student));

   for(i=0;i<n;++i){
    printf("Enter student id : ");
    scanf("%d",&(ptr+i)->id);
    printf("Enter student name : ");
    scanf("%s",&(ptr+i)->name);
   }

   printf("\nDisplaying information.\n");
   for(i=0;i<n;++i){
       printf("id : %d , name : %s \n",(ptr+i)->id,(ptr+i)->name);
   }
   return 0;
}
