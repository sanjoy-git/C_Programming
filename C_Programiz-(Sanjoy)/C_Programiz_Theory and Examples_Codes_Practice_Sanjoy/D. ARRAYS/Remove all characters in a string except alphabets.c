/// Remove all characters in a string except alphabets

/// C Program to Remove all Characters in a String Except Alphabets

/// Remove Characters in String Except Alphabets

//#include <stdio.h>
//int main()
//{
//    char line[150];
//    printf("Enter a string: ");
//    gets(line);
//    for (int i = 0; line[i] != '\0'; ++i)
//    {
//        while (!((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z') || line[i] == '\0'))
//        {
//            int j;
//            for (j = i; line[j] != '\0'; ++j)
//            {
//                line[j] = line[j + 1];
//            }
//            line[j] = '\0';
//        }
//    }
//    printf("Output String: ");
//    puts(line);
//    return 0;
//}

/// Practice...

//#include<stdio.h>
//
//int main(){
//    char name[30];
//    printf("Enter a string : ");
//    scanf("%s",&name);
//    //gets(name);
//    printf("%c",name[5]);
//
//    int i,j;
//    for(i=0; name[i]!='\0';++i){
//        while(!((name[i]>='a' && name[i]<='z')||(name[i]>='A' && name[i]<='Z')||name[i]=='\0')){
//            for(j=i; name[j]!='\0';++j){
//                name[j]=name[j+1];
//                //printf("%c , ",name[j]);
//            }
//            printf("\n");
//            //puts(name);
//            //name[j]='\0';
//        }
//    }
//    puts(name);
//   printf("%c",name[5]);
//
//    return 0;
//}



#include<stdio.h>

int main(){
    char name[]="Wi*e3d#iT$";

    for(int i=0;name[i]!='\0';i++){
        while(!((name[i]>='a'&&name[i]<='z')||name[i]=='\0')){
            for(int j=i;name[j]!='\0';j++){
                name[j]=name[j+1];
            }
        }
    }
    printf("%s",name);
}
