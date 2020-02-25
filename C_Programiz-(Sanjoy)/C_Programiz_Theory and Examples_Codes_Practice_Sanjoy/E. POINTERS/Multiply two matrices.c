/// Multiply two matrices

/// C Program to Multiply Two Matrices Using Multi-dimensional Arrays

/// Multiply Matrices by Passing it to a Function

//#include <stdio.h>
//
//void enterData(int first[][10], int second[][10], int r1, int c1, int r2, int c2);
//void multiplyMatrices(int first[][10], int second[][10], int multResult[][10], int r1, int c1, int r2, int c2);
//void display(int mult[][10], int r1, int c2);
//
//int main() {
//    int first[10][10], second[10][10], mult[10][10], r1, c1, r2, c2;
//    printf("Enter rows and column for the first matrix: ");
//    scanf("%d %d", &r1, &c1);
//    printf("Enter rows and column for the second matrix: ");
//    scanf("%d %d", &r2, &c2);
//    // Taking input until columns of the first matrix is equal to the rows of the second matrix
//    while (c1 != r2) {
//        printf("Error! Enter rows and columns again.\n");
//        printf("Enter rows and columns for the first matrix: ");
//        scanf("%d%d", &r1, &c1);
//        printf("Enter rows and columns for the second matrix: ");
//        scanf("%d%d", &r2, &c2);
//    }
//    // Function to take matrices data
//    enterData(first, second, r1, c1, r2, c2);
//    // Function to multiply two matrices.
//    multiplyMatrices(first, second, mult, r1, c1, r2, c2);
//    // Function to display resultant matrix after multiplication.
//    display(mult, r1, c2);
//    return 0;
//}
//void enterData(int first[][10], int second[][10], int r1, int c1, int r2, int c2) {
//    printf("\nEnter elements of matrix 1:\n");
//    for (int i = 0; i < r1; ++i) {
//        for (int j = 0; j < c1; ++j) {
//            printf("Enter a%d%d: ", i + 1, j + 1);
//            scanf("%d", &first[i][j]);
//        }
//    }
//    printf("\nEnter elements of matrix 2:\n");
//    for (int i = 0; i < r2; ++i) {
//        for (int j = 0; j < c2; ++j) {
//            printf("Enter b%d%d: ", i + 1, j + 1);
//            scanf("%d", &second[i][j]);
//        }
//    }
//}
//void multiplyMatrices(int first[][10], int second[][10], int mult[][10], int r1, int c1, int r2, int c2) {
//    // Initializing elements of matrix mult to 0.
//    for (int i = 0; i < r1; ++i) {
//        for (int j = 0; j < c2; ++j) {
//            mult[i][j] = 0;
//        }
//    }
//    // Multiplying first and second matrices and storing in mult.
//    for (int i = 0; i < r1; ++i) {
//        for (int j = 0; j < c2; ++j) {
//            for (int k = 0; k < c1; ++k) {
//                mult[i][j] += first[i][k] * second[k][j];
//            }
//        }
//    }
//}
//void display(int mult[][10], int r1, int c2) {
//    printf("\nOutput Matrix:\n");
//    for (int i = 0; i < r1; ++i) {
//        for (int j = 0; j < c2; ++j) {
//            printf("%d  ", mult[i][j]);
//            if (j == c2 - 1)
//                printf("\n");
//        }
//    }
//}


/// Practice...

//#include<stdio.h>
//
//int i,j,row1,col1,row2,col2;
//void enterData(int m1[row1][col1],int m2[row2][col2]);
//void calculate(int m1[row1][col1],int m2[row2][col2],int mult[row1][col2]);
//void display(int mult[row1][col2]);
//
//int main()
//{
//    printf("Enter rows and columns for the first matrix : ");
//    scanf("%d%d",&row1,&col1);
//    printf("Enter rows and columns for the first matrix : ");
//    scanf("%d%d",&row2,&col2);
//
//    while(col1!=row2)
//    {
//        printf("Error! Enter rows and columns again.\n" );
//        printf("Enter rows and columns for the first matrix : ");
//        scanf("%d%d",&row1,&col1);
//        printf("Enter rows and columns for the second matrix : ");
//        scanf("%d%d",&row2,&col2);
//    }
//    int m1[row1][col1],m2[row2][col2];
//    int mult[row1][col2];
//    enterData(m1,m2);
//    calculate(m1,m2,mult);
//    display(mult);
//
//
//    return 0;
//}
//
//void enterData(int m1[row1][col1],int m2[row2][col2])
//{
//    printf("Enter element of matrix 1 : \n");
//    for(i=0; i<row1; ++i)
//    {
//        for(j=0; j<col1; ++j)
//        {
//            printf("Enter m1[%d][%d] : ",i,j);
//            scanf("%d",&m1[i][j]);
//        }
//    }
//
//    printf("Enter element of matrix 2 : \n");
//    for(i=0; i<row2; ++i)
//    {
//        for(j=0; j<col2; ++j)
//        {
//            printf("Enter m2[%d][%d] : ",i,j);
//            scanf("%d",&m2[i][j]);
//        }
//    }
//}
//
//void calculate(int m1[row1][col1],int m2[row2][col2],int mult[row1][col2])
//{
//
//    //initial elements of matrix mult to 0.
//    for(i=0; i<row1; ++i)
//    {
//        for(j=0; j<col2; ++j)
//        {
//            mult[i][j]=0;
//        }
//    }
//
//    //Multiplying first and second matrices and storing in mult.
//
//    for(i=0; i<row1; ++i)
//    {
//        for(j=0; j<col2; ++j)
//        {
//            for(int k=0; k<col1; ++k)
//            {
//                mult[i][j]+=m1[i][k]*m2[k][j];
//            }
//        }
//    }
//}
//
//void display(int mult[row1][col2])
//{
//    for(i=0; i<row1; ++i)
//    {
//        for(j=0; j<col2; ++j)
//        {
//            printf("%d\t",mult[i][j]);
//        }
//        printf("\n");
//    }
//}


//#include<stdio.h>
//int i;
//void enter(int a[10]),calculation(int a[10],int b[10]),display(int b[10]);
//
//int main()
//{
//    int a[10],b[10];
//
//    enter(a);
//    calculation(a,b);
//    printf("\n");
//    display(b);
//
//    return 0;
//}
//
//void enter(int c[10])
//{
//    for(i=0; i<5; i++)
//    {
//        scanf("%d",&c[i]);
//    }
//}
//
//void calculation(int d[10],int e[10])
//{
//    for(i=0;i<5;++i){
//        e[i]=d[i];
//    }
//}
//
//void display(int f[10])
//{
//    for(i=0; i<5; i++)
//    {
//        printf("%d\n",f[i]);
//    }
//}
