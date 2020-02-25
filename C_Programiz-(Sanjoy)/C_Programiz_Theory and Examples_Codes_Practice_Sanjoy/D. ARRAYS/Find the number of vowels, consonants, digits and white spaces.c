/// Find the number of vowels, consonants, digits and white spaces

/// C Program to Count the Number of Vowels, Consonants and so on

///Program to count vowels, consonants etc.

//#include <stdio.h>
//int main() {
//    char line[150];
//    int vowels, consonant, digit, space;
//    vowels = consonant = digit = space = 0;
//    printf("Enter a line of string: ");
//    fgets(line, sizeof(line), stdin);
//    for (int i = 0; line[i] != '\0'; ++i) {
//        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
//            line[i] == 'o' || line[i] == 'u' || line[i] == 'A' ||
//            line[i] == 'E' || line[i] == 'I' || line[i] == 'O' ||
//            line[i] == 'U') {
//            ++vowels;
//        } else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')) {
//            ++consonant;
//        } else if (line[i] >= '0' && line[i] <= '9') {
//            ++digit;
//        } else if (line[i] == ' ') {
//            ++space;
//        }
//    }
//    printf("Vowels: %d", vowels);
//    printf("\nConsonants: %d", consonant);
//    printf("\nDigits: %d", digit);
//    printf("\nWhite spaces: %d", space);
//    return 0;
//}


/// Practice...

#include<stdio.h>

int main(){
    char name[]="Sanjoy Roy1";
    int vowels,consonant,digit,space,special,i;
    vowels=consonant=digit=space=special=0;

    for(i=0;name[i]!='\0';++i){
        if(name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U'||name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'){
            ++vowels;
        }
        else if((name[i]>='A' && name[i]<='Z') || (name[i]>='a' && name[i]<='z')){
            ++consonant;
        }
        else if(name[i]>='0' && name[i]<='9'){
            ++digit;
        }
        else if(name[i]==' '){
            ++space;
        }
        else{
            ++special;
        }
    }
    printf("\n vowel : %d \n consonant : %d \n digit : %d \n space : %d \n special char : %d \n",vowels,consonant,digit,space,special);

    return 0;
}
