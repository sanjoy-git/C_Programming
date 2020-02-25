/// Check whether a character is a vowel or consonant

/// C Program to Check Whether a Character is Vowel or Consonant

/// Program to Check Vowel or consonant


//#include <stdio.h>
//int main() {
//    char c;
//    int lowercase, uppercase;
//    printf("Enter an alphabet: ");
//    scanf("%c", &c);
//    // evaluates to 1 if variable c is lowercase
//    lowercase = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
//    // evaluates to 1 if variable c is uppercase
//    uppercase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
//    // evaluates to 1 if c is either lowercase or uppercase
//    if (lowercase || uppercase)
//        printf("%c is a vowel.", c);
//    else
//        printf("%c is a consonant.", c);
//    return 0;
//}



/// Practice...

//#include<stdio.h>
//
//int main()
//{
//    while(1)
//    {
//        char ch;
//        int num;
//
//        printf("Please Enter char: ");
//        scanf("%c",&ch);
//
//        num=ch;
//
//        if(num>=65&&num<=90)
//        {
//            printf("it is a uppercase and value: %d\n",num);
//            break;
//        }
//        else if(num>=97&&num<=122)
//        {
//            printf("it is a lower case and value: %d\n",num);
//            break;
//        }
//    }
//}

///---------

#include<stdio.h>

void main()
{
   // int i;

    while(1)
    {
        char ch;
       // fflush(stdin);
        printf("please input cha: ");
        scanf("\n%c",&ch);

        int num;
        num=ch;

        if(num>=65&&num<=90)
        {
            if(num==65||num==69||num==73||num==79||num==85||num==97||num==101||num==105||num==111||num==117)
            {
                printf("it is a Vowel and Upper case. %c=%d\n",ch,num);

            }
            else
            {
                printf("it is a consonant and Upper case. %c=%d\n",ch,num);
            }
        }
        else if(num>=97&&num<=122)
        {
            if(num==65||num==69||num==73||num==79||num==85||num==97||num==101||num==105||num==111||num==117)
            {
                printf("it is a Vowel and Lower case. %c=%d\n",ch,num);

            }
            else
            {
                printf("it is a consonant and Lower case. %c=%d\n",ch,num);
            }
        }
    }
}

