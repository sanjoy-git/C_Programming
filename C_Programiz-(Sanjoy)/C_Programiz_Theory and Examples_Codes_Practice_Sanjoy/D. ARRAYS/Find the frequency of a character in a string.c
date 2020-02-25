/// Find the frequency of a character in a string

/// C Program to Find the Frequency of Characters in a String

/// Find the Frequency of a Character

//#include <stdio.h>
//int main() {
//    char str[1000], ch;
//    int count = 0;
//    printf("Enter a string: ");
//    fgets(str, sizeof(str), stdin);
//    printf("Enter a character to find its frequency: ");
//    scanf("%c", &ch);
//    for (int i = 0; str[i] != '\0'; ++i) {
//        if (ch == str[i])
//            ++count;
//    }
//    printf("Frequency of %c = %d", ch, freq);   //wrong
//    return 0;
//}

/// Practice...

//#include <stdio.h>
//int main()
//{
//    char str[1000], ch;
//    int count = 0,i;
//    printf("Enter a string: ");
//    fgets(str, sizeof(str), stdin);
//    printf("Enter a character to find its frequency: ");
//    scanf("%c", &ch);
//    for (i = 0; str[i] != '\0'; ++i)
//    {
//        ++count;
//        if (ch == str[i])
//        {
//            break;
//        }
//
//    }
//    (str[i]!='\0')?printf("Frequency of %c = %d", ch, count):printf("char missing");
//
//    return 0;
//}


//---2

#include <stdio.h>
int main()
{
    char str[1000], ch;
    int count = 0,i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);
    for (i = 0; str[i] != '\0'; ++i)
    {
        //++count;
        if (ch == str[i])
        {
            break;
        }

    }
    (str[i]!='\0')?printf("Frequency of %c = %d", ch, i+1):printf("char missing");

    return 0;
}
