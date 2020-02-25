/// Reverse a sentence using recursion
///C program to Reverse a Sentence Using Recursion
/// Example: Reverse a sentence using recursion


///* Example to reverse a sentence entered by user without using strings. */

//#include <stdio.h>
//void reverseSentence();
//int main()
//{
//    printf("Enter a sentence: ");
//    reverseSentence();
//    return 0;
//}
//void reverseSentence()
//{
//    char c;
//    scanf("%c", &c);
//    if( c != '\n')
//    {
//        reverseSentence();
//        printf("%c",c);
//    }
//}


#include<stdio.h>
void rev();

int main()
{
    printf("Enter a sentence : ");
    rev();
}

void rev()
{
    char ch;
    scanf("%c",&ch);
    if(ch!='\n')
    {
        rev();
        printf("%c",ch);
    }
}
