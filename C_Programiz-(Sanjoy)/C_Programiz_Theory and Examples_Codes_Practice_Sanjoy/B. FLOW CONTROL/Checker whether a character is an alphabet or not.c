/// Checker whether a character is an alphabet or not

/// C Program to Check Whether a Character is an Alphabet or not

/// Program to Check Alphabet

//#include <stdio.h>
//int main() {
//    char c;
//    printf("Enter a character: ");
//    scanf("%c", &c);
//    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
//        printf("%c is an alphabet.", c);
//    else
//        printf("%c is not an alphabet.", c);
//    return 0;
//}

/// Practice...

#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        printf("%c is an alphabet.", c);
    else
        printf("%c is not an alphabet.", c);
    return 0;
}
