/// Find the length of a string

/// C Program to Find the Length of a String

/// Calculate Length of String without Using strlen() Function

//#include <stdio.h>
//int main() {
//    char s[] = "Programming is fun";
//    int i;
//    for (i = 0; s[i] != '\0'; ++i);
//
//    printf("Length of the string: %d", i);
//    return 0;
//}


/// Practice...

//#include<stdio.h>
//
//int main(){
//    char name[]="Sanjoy Roy1";
//    int i;
//
//    for(i=0;name[i]!='\0';++i);
//
//    printf("length : %d",i);
//
//    return 0;
//}


//--2

#include<stdio.h>

int main(){
    char name[]="Sanjoy Roy";
    int i=-1;

    //for(i=0;name[i]!='\0';++i);
    while(name[++i]!='\0');

    printf("length : %d",i);

    return 0;
}

