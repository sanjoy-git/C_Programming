/// Concatenate two strings
/// C Program to Concatenate Two Strings

/// Concatenate Two Strings Without Using strcat()

//#include <stdio.h>
//int main() {
//    char s1[100] = "programming ", s2[] = "is awesome";
//    int i, j;
//    // length of s1 is stored in i
//    for (i = 0; s1[i] != '\0'; ++i) {
//        printf("i = %d\n", i);
//    }
//    // concatenating each character of s2 to s1
//    for (j = 0; s2[j] != '\0'; ++j, ++i) {
//        s1[i] = s2[j];
//    }
//    // terminating s1 string
//    s1[i] = '\0';
//    printf("After concatenation: ");
//    puts(s1);
//    return 0;
//}

/// Practice...

#include<stdio.h>

int main(){
    char name[]="sanjoy",name1[]=" Roy";

    int i,j;
    for(i=0;name[i]!='\0';++i);

    for(j=0;name1[j]!='\0';++j,++i){
        name[i]=name1[j];
    }
    name[i]='\0';
    puts(name);
    printf("%s\n",name);
    puts(name1);
}
