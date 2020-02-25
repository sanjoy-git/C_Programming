/// Sort elements in the lexicographical order (dictionary order)

/// C Program to Sort Elements in Lexicographical Order (Dictionary Order)

/// Sort strings in the dictionary order

//#include <stdio.h>
//#include <string.h>
//int main() {
//    char str[5][50], temp[50];
//
//    printf("Enter 5 words: ");
//// Getting strings input
//    for (int i = 0; i < 5; ++i) {
//        fgets(str[i], sizeof(str[i]), stdin);
//    }
//// storing strings in the lexicographical order
//    for (int i = 0; i < 5; ++i) {
//        for (int j = i + 1; j < 5; ++j) {
//            if (strcmp(str[i], str[j]) > 0) {
//                strcpy(temp, str[i]);
//                strcpy(str[i], str[j]);
//                strcpy(str[j], temp);
//            }
//        }
//    }
//    printf("\nIn the lexicographical order: \n");
//    for (int i = 0; i < 5; ++i) {
//        fputs(str[i], stdout);
//    }
//    return 0;
//}


/// Practice...

#include<stdio.h>
#include<string.h>

int main()
{
    char names[10][20], temp[20];
    int i,j;

    for(i=0; i<5; ++i)
    {
        fgets(names[i],sizeof(names[i]),stdin);
    }

    for(i=0; i<5; ++i)
    {
        for(j=i+1; j<5; ++j)
        {
            if(strcmp(names[i],names[j])>0)
            {
                strcpy(temp,names[i]);
                strcpy(names[i],names[j]);
                strcpy(names[j],temp);
            }
        }
    }

    printf("\n");
    for(i=0; i<5; i++)
    {
        fputs(names[i],stdout);
    }

    return 0;
}
