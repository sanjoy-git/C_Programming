/// Reverse a string using recursion
/// C program to Reverse a Sentence Using Recursion

/// Reverse a sentence using recursion

//#include <stdio.h>
//void reverseSentence();
//int main() {
//    printf("Enter a sentence: ");
//    reverseSentence();
//    return 0;
//}
//void reverseSentence() {
//    char c;
//    scanf("%c", &c);
//    if (c != '\n') {
//        reverseSentence();
//        printf("%c", c);
//    }
//}


/// Practice...

#include<stdio.h>
int fn();

int main()
{
    fn();
}

int fn()
{
    char ch;
    //scanf("%c",&ch);
    ch=getchar();

    if(ch!='\n')
    {
        fn();
        //printf("%c",ch);
        putchar(ch);
    }
}
