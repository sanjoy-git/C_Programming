/// Print pyramids and triangles

/// C Programming Code To Create Pyramid and Pattern

/// Programs to print triangles using *, numbers and character
/// Program to print half pyramid using *

//#include <stdio.h>
//int main() {
//    int i, j, rows;
//    printf("Enter number of rows: ");
//    scanf("%d", &rows);
//    for (i = 1; i <= rows; ++i) {
//        for (j = 1; j <= i; ++j) {
//            printf("* ");
//        }
//        printf("\n");
//    }
//    return 0;
//}


/// Program to print a half pyramid using numbers

//#include <stdio.h>
//int main() {
//    int i, j, rows;
//    printf("Enter number of rows: ");
//    scanf("%d", &rows);
//    for (i = 1; i <= rows; ++i) {
//        for (j = 1; j <= i; ++j) {
//            printf("%d ", j);
//        }
//        printf("\n");
//    }
//    return 0;
//}

/// rograms to print inverted half pyramid using * and numbers
/// Inverted half pyramid using *

//#include<stdio.h>
//int main() {
//    int i, j, rows;
//    printf("Enter number of rows: ");
//    scanf("%d", &rows);
//    for (i=rows; i>=1; --i) {
//       for (j=1; j<=i; ++j)
//        { printf("* "); }
//        printf("\n");
//    }
//    return 0;
//}

/// Inverted half pyramid using numbers

//#include <stdio.h>
//int main() {
//    int i, j, rows;
//    printf("Enter number of rows: ");
//    scanf("%d", &rows);
//    for (i = rows; i >= 1; --i) {
//        for (j = 1; j <= i; ++j) {
//            printf("%d ", j);
//        }
//        printf("\n");
//    }
//    return 0;
//}



///Programs to display pyramid and inverted pyramid using * and digits
///Program to print full pyramid using *

//#include <stdio.h>
//int main() {
//    int i, space, rows, k = 0;
//    printf("Enter number of rows: ");
//    scanf("%d", &rows);
//    for (i = 1; i <= rows; ++i, k = 0) {
//        for (space = 1; space <= rows - i; ++space) {
//            printf("  ");
//        }
//        while (k != 2 * i - 1) {
//            printf("* ");
//            ++k;
//        }
//        printf("\n");
//    }
//    return 0;
//}

/// Program to print pyramid using numbers


//#include <stdio.h>
//int main() {
//    int i, space, rows, k = 0, count = 0, count1 = 0;
//    printf("Enter number of rows: ");
//    scanf("%d", &rows);
//    for (i = 1; i <= rows; ++i) {
//        for (space = 1; space <= rows - i; ++space) {
//            printf("  ");
//            ++count;
//        }
//        while (k != 2 * i - 1) {
//            if (count <= rows - 1) {
//                printf("%d ", i + k);
//                ++count;
//            } else {
//                ++count1;
//                printf("%d ", (i + k - 2 * count1));
//            }
//            ++k;
//        }
//        count1 = count = k = 0;
//        printf("\n");
//    }
//    return 0;
//}


/// Inverted full pyramid using *

//#include <stdio.h>
//int main() {
//    int rows, i, j, space;
//    printf("Enter number of rows: ");
//    scanf("%d", &rows);
//    for (i = rows; i >= 1; --i) {
//        for (space = 0; space < rows - i; ++space)
//            printf("  ");
//        for (j = i; j <= 2 * i - 1; ++j)
//            printf("* ");
//        for (j = 0; j < i - 1; ++j)
//            printf("* ");
//        printf("\n");
//    }
//    return 0;
//}


/// Print Pascal's triangle

//#include <stdio.h>
//int main() {
//    int rows, coef=1, space, i, j;
//    printf("Enter number of rows: ");
//    scanf("%d", &rows);
//    for (i=0; i<rows; i++) {
//        for (space=1; space<=rows-i; space++)
//            printf("  ");
//        for (j=0; j<=i; j++) {
//               if (j==0||i==0)
//               coef=1;
//            else
//               coef=coef*(i-j+1)/j;
//            printf("%4d", coef);
//        }
//        printf("\n");
//    }
//    return 0;
//}

///Print Floyd's Triangle

//#include <stdio.h>
//int main() {
//    int rows, i, j, num = 1;
//    printf("Enter number of rows: ");
//    scanf("%d", &rows);
//    for (i = 1; i <= rows; i++) {
//        for (j = 1; j <= i; ++j) {
//            printf("%d ", num);
//            ++num;
//        }
//        printf("\n");
//    }
//    return 0;
//}


/// Practice...

//#include <stdio.h>
//int main()
//{
//    int i, j, rows;
//    printf("Enter number of rows: ");
//    scanf("%d",&rows);
//    for(i=1; i<=rows; ++i)
//    {
//        for(j=1; j<=i; ++j)
//        {
//            printf("* ");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//    int rowNum,row,col;
//    printf("Enter the number of Rows : ");
//    scanf("%d",&rowNum);
//    for(row=1; row<=rowNum; row++)
//    {
//        for(col=1;col<=row;col++)
//        {
//            printf(" * ");
//        }
//    printf("\n\n");
//    }
//}

//#include <stdio.h>
//int main()
//{
//    int i, j, rows;
//    printf("Enter number of rows: ");
//    scanf("%d",&rows);
//    for(i=1; i<=rows; ++i)
//    {
//        for(j=1; j<=i; ++j)
//        {
//            printf("%d ",j);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//    int rowNum,row,col;
//    printf("Enter the number of Rows : ");
//    scanf("%d",&rowNum);
//    for(row=1; row<=rowNum; row++)
//    {
//        for(col=1;col<=row;col++)
//        {
//            printf("%d ",col);
//        }
//    printf("\n");
//    }
//}

//#include <stdio.h>
//int main()
//{
//    int i, j;
//    char input, alphabet = 'A';
//    printf("Enter the uppercase character you want to print in last row: ");
//    scanf("%c",&input);
//    for(i=1; i <= (input-'A'+1); ++i)
//    {
//        for(j=1;j<=i;++j)
//        {
//            printf("%c", alphabet);
//        }
//        ++alphabet;
//        printf("\n");
//    }
//    return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//    int rowNum,row,col;
//    printf("Enter the Row Rangge char : ");
//    scanf("%c",&rowNum);
//    for(row='A'; row<=rowNum; row++)
//    {
//        for(col='A';col<=row;col++)
//        {
//            printf("%c ",col);
//        }
//    printf("\n");
//    }
//}


//#include<stdio.h>
//
//int main()
//{
//    int row,col;
//    char rowNum;
//    printf("Enter the Row Rangge char : ");
//    scanf("%c",&rowNum);
//    for(row='A'; row<=rowNum; row++)
//    {
//        for(col='A';col<=row;col++)
//        {
//            printf("%c ",col);
//        }
//    printf("\n");
//    }
//}


//#include<stdio.h>
//
//int main()
//{
//    char row,col;
//    char rowNum;
//    printf("Enter the Row Rangge char : ");
//    scanf("%c",&rowNum);
//    for(row='A'; row<=rowNum; row++)
//    {
//        for(col='A';col<=row;col++)
//        {
//            printf("%c ",col);
//        }
//    printf("\n");
//    }
//}


//#include<stdio.h>
//
//int main()
//{
//    char row,col;
//    char rowNum;
//    printf("Enter the Row Rangge char : ");
//    scanf("%c",&rowNum);
//    for(row=65; row<=rowNum; row++)
//    {
//        for(col='A';col<=row;col++)
//        {
//            printf("%c ",col);
//        }
//    printf("\n");
//    }
//}


//#include<stdio.h>
//
//int main()
//{
//    int row,col,out=65;
//    char rowNum;
//    printf("Enter the Row Rangge char : ");
//    scanf("%c",&rowNum);
//    for(row=1; row<=rowNum-64; row++)
//    {
//        for(col=1;col<=row;col++)
//        {
//            printf("%c ",out);
//        }
//        out++;
//    printf("\n");
//    }
//}

//#include <stdio.h>
//int main()
//{
//    int i, j, rows;
//    printf("Enter number of rows: ");
//    scanf("%d",&rows);
//    for(i=rows; i>=1; --i)
//    {
//        for(j=1; j<=i; ++j)
//        {
//            printf("* ");
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//    int rowNum,row,col;
//    printf("Enter the number of Rows : ");
//    scanf("%d",&rowNum);
//    for(row=1; row<=rowNum; row++)
//    {
//        for(col=rowNum;col>=row;col--)
//        {
//            printf("* ");
//        }
//    printf("\n");
//    }
//}

//#include<stdio.h>
//
//int main()
//{
//    int rowNum,row,col;
//    printf("Enter the number of Rows : ");
//    scanf("%d",&rowNum);
//    for(row=rowNum; row>=1; row--)
//    {
//        for(col=1;col<=row;col++)
//        {
//            printf("* ");
//        }
//    printf("\n");
//    }
//}

//#include<stdio.h>
//
//int main()
//{
//    int rowNum,row,col;
//    printf("Enter the number of Rows : ");
//    scanf("%d",&rowNum);
//    for(row=rowNum; row>=1; row--)
//    {
//        for(col=1;col<=row;col++)
//        {
//            printf("%d ",col);
//        }
//    printf("\n");
//    }
//}




//#include<stdio.h>
//
//int main()
//{
//    int rowNum,row,col;
//    printf("Enter the number of Rows : ");
//    scanf("%d",&rowNum);
//    for(row=1; row<=rowNum; row++)
//    {
//        for(col=rowNum;col>=row;col--)
//        {
//            printf("%d ",col);
//        }
//    printf("\n");
//    }
//}

//#include <stdio.h>
//int main()
//{
//    int i, space, rows, k=0;
//    printf("Enter number of rows: ");
//    scanf("%d",&rows);
//    for(i=1; i<=rows; ++i, k=0)
//    {
//        for(space=1; space<=rows-i; ++space)
//        {
//            printf("  ");
//        }
//        while(k != 2*i-1)
//        {
//            printf("* ");
//            ++k;
//        }
//        printf("\n");
//    }
//
//    return 0;
//}



//#include<stdio.h>
//
//int main()
//{
//    int rowNum,row,col;
//    printf("Enter the number of Rows : ");
//    scanf("%d",&rowNum);
//
//    int odd=1;
//    int spec=(rowNum-1);
//
//    for(row=1; row<=rowNum; row++)
//    {
//        int i=1;
//
//        while(i<=spec)
//        {
//            printf("  ");
//            i++;
//        }
//
//        for(col=1; col<=odd; col++)
//        {
//            printf(" *");
//        }
//
//        printf("\n");
//        spec=spec-1;
//        odd=odd+2;
//
//
//    }
//}



//#include<stdio.h>
//
//int main()
//{
//    int i,space,rows,k=0,count=0,count1=0;
//    printf("Enter number of rows: ");
//    scanf("%d",&rows);
//    for(i=1; i<=rows; ++i)
//    {
//        for(space=1; space<=rows-i; ++space)
//        {
//            printf(" ");
//            ++count;
//        }
//        while(k!=2*i-1)
//        {
//            if(count<=rows-1){
//                printf("%d",i+k);
//                ++count;
//            }
//            else{
//                ++count1;
//                printf("%d",(i+k-2*count1));
//            }
//            k++;
//        }
//        count1=count=k=0;
//        printf("\n");
//    }
//    return 0;
//}



//#include<stdio.h>
//
//int main()
//{
//    int rowNum,row,col;
//    printf("Enter the number of Rows : ");
//    scanf("%d",&rowNum);
//
//    for(row=1; row<=rowNum; row++)
//    {
//        int i;
//        for(i=1;i<row;i++){
//            printf(" ");
//        }
//
//        for(col=rowNum;col>=row;col=col-1)
//        {
//            printf(" *");
//        }
//    printf("\n");
//    }
//}


//#include<stdio.h>
//int main()
//{
//    int rows, i, j, space;
//    printf("Enter number of rows: ");
//    scanf("%d",&rows);
//    for(i=rows; i>=1; --i)
//    {
//        for(space=1; space <= rows-i; ++space)
//            printf("  ");
//
//        for(j=i; j>=1; --j)
//            printf("* ");
//
//        for(j=1; j <= i-1; ++j)
//            printf("* ");
//
//        printf("\n");
//    }
//    return 0;
//}

///Print Pascal's triangle

//#include <stdio.h>
//int main()
//{
//    int rows, coef = 1, space, i, j;
//    printf("Enter number of rows: ");
//    scanf("%d",&rows);
//    for(i=0; i<rows; i++)
//    {
//        for(space=1; space <= rows-i; space++)
//            printf("  ");
//        for(j=0; j <= i; j++)
//        {
//            if (j==0 || i==0)
//                coef = 1;
//            else
//                coef = coef*(i-j+1)/j;
//            printf("%4d", coef);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//#include<stdio.h>
//
//int main(){
//    int rows,coef=1,space,i,j;
//
//    printf("Enter number of rows: ");
//    scanf("%d",&rows);
//
//    for(i=0;i<rows;i++){
//        for(space=1;space<=rows-i;space++){
//            printf("  ");
//        }
//        for(j=0;j<=i;j++){
//
//            //printf(" *");
//
//            if(j==0 || i==0){
//                coef=1;
//            }
//            else{
//                coef=coef*(i-j+1)/j;
//            }
//        printf("%4d",coef);
//        }
//        printf("\n");
//    }
//    return 0;
//}


///Print Floyd's Triangle.

//#include <stdio.h>
//int main()
//{
//    int rows, i, j, number= 1;
//    printf("Enter number of rows: ");
//    scanf("%d",&rows);
//    for(i=1; i <= rows; i++)
//    {
//        for(j=1; j <= i; ++j)
//        {
//            printf("%d ", number);
//            ++number;
//        }
//        printf("\n");
//    }
//    return 0;
//}


#include<stdio.h>

int main(){
    int row,col,rowN,number=1;

    printf("Enter the row num: ");
    scanf("%d",&rowN);

    for(row=1;row<=rowN;row++){
        for(col=1;col<=row;col++){
            printf(" %d",number);
            number++;
        }
        printf("\n");
    }
    return 0;
}
