/// Store information of 10 students using structures
/// C Program to Store Information of Students Using Structure

/// Store Information in Structure and Display it

//#include <stdio.h>
//
//struct student {
//    char firstName[50];
//    int roll;
//    float marks;
//} s[10];
//
//int main() {
//    int i;
//    printf("Enter information of students:\n");
//    // storing information
//    for (i = 0; i < 5; ++i) {
//        s[i].roll = i + 1;
//        printf("\nFor roll number%d,\n", s[i].roll);
//        printf("Enter first name: ");
//        scanf("%s", s[i].firstName);
//        printf("Enter marks: ");
//        scanf("%f", &s[i].marks);
//    }
//    printf("Displaying Information:\n\n");
//    // displaying information
//    for (i = 0; i < 5; ++i) {
//        printf("\nRoll number: %d\n", i + 1);
//        printf("First name: ");
//        puts(s[i].firstName);
//        printf("Marks: %.1f", s[i].marks);
//        printf("\n");
//    }
//    return 0;
//}


/// Practice...

#include<stdio.h>

struct student{
    int id;
    char name[30];
    float marks;
}s[10];

int main(){
    int i,n;
    printf("Enter students : ");
    scanf("%d",&n);
    printf("Enter information of students : \n");

    //storing information
    for(i=0;i<n;++i){
        printf("Enter id : ");
        scanf("%d",&s[i].id);

        printf("Enter name : ");
        scanf("%s",s[i].name);

        printf("Enter mark : ");
        scanf("%f",&s[i].marks);
    }
    printf("\nDisplaying Information.\n");

    // displaying information
    for(i=0;i<n;++i){
        printf("id no : %d\n",s[i].id);
        printf("name : %s\n",s[i].name);
        printf("mark : %.3f",s[i].marks);

        printf("\n");
    }
    return 0;
}
