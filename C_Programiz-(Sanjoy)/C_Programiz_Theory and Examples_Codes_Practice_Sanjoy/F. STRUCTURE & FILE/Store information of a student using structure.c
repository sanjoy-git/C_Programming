/// Store information of a student using structure
/// C Program to Store Information of a Student Using Structure
/// Store Information and Display it Using Structure

//#include <stdio.h>
//struct student
//{
//    char name[50];
//    int roll;
//    float marks;
//} s;
//int main()
//{
//    printf("Enter information:\n");
//    printf("Enter name: ");
//    fgets(s.name, sizeof(s.name), stdin);
//    printf("Enter roll number: ");
//    scanf("%d", &s.roll);
//    printf("Enter marks: ");
//    scanf("%f", &s.marks);
//
//    printf("Displaying Information:\n");
//    printf("Name: ");
//    printf("%s", s.name);
//    printf("Roll number: %d\n", s.roll);
//    printf("Marks: %.1f\n", s.marks);
//    return 0;
//}


/// Practice...

#include<stdio.h>

struct student{
    char name[30];
    int roll;
    float marks;
}s;

int main(){
    printf("Enter information : \n");
    printf("Enter name : ");
    fgets(s.name,sizeof(s.name),stdin);

    printf("Enter roll number : ");
    scanf("%d",&s.roll);
    printf("Enter marks : ");
    scanf("%f",&s.marks);

    printf("\nDisplaying information : \n");
    printf("Name : ");
    fputs(s.name,stdout);
    printf("Roll Number : %d\n",s.roll);
    printf("Marks : %.3f",s.marks);

    return 0;
}
