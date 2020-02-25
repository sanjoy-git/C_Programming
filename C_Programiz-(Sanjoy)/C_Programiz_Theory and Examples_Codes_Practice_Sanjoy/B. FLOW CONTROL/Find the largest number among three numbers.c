/// Find the largest number among three numbers

/// C Program to Find the Largest Number Among Three Numbers

///Example 1: Using if

//#include <stdio.h>
//int main() {
//    double n1, n2, n3;
//    printf("Enter three different numbers: ");
//    scanf("%lf %lf %lf", &n1, &n2, &n3);
//    if (n1 >= n2 && n1 >= n3)
//        printf("%.2f is the largest number.", n1);
//    if (n2 >= n1 && n2 >= n3)
//        printf("%.2f is the largest number.", n2);
//    if (n3 >= n1 && n3 >= n2)
//        printf("%.2f is the largest number.", n3);
//    return 0;
//}

/// Example 2: Using if...else Ladder

//#include <stdio.h>
//int main() {
//    double n1, n2, n3;
//    printf("Enter three numbers: ");
//    scanf("%lf %lf %lf", &n1, &n2, &n3);
//    if (n1 >= n2 && n1 >= n3)
//        printf("%.2lf is the largest number.", n1);
//    else if (n2 >= n1 && n2 >= n3)
//        printf("%.2lf is the largest number.", n2);
//    else
//        printf("%.2lf is the largest number.", n3);
//    return 0;
//}


/// Example 3: Using Nested if...else

//
//#include <stdio.h>
//int main() {
//    double n1, n2, n3;
//    printf("Enter three numbers: ");
//    scanf("%lf %lf %lf", &n1, &n2, &n3);
//    if (n1 >= n2) {
//        if (n1 >= n3)
//            printf("%.2lf is the largest number.", n1);
//        else
//            printf("%.2lf is the largest number.", n3);
//    } else {
//        if (n2 >= n3)
//            printf("%.2lf is the largest number.", n2);
//        else
//            printf("%.2lf is the largest number.", n3);
//    }
//    return 0;
//}


/// Practice...

//#include <stdio.h>
//
//void main()
//{
//    int a,b,c,d;
//    printf("Enter number a: ");
//    scanf("%d",&a);
//    printf("Enter number b: ");
//    scanf("%d",&b);
//    printf("Enter number c: ");
//    scanf("%d",&c);
//    printf("Enter number d: ");
//    scanf("%d",&d);
//
//    if(a>=b)
//    {
//        if(a>=c)
//        {
//            if(a>=d)
//            {
//                printf("%d is a large number.",a);
//            }
//            else{
//                printf("%d is a large number.",d);
//            }
//        }
//        else
//        {
//            if(c>=d){
//                printf("%d is a large number.",c);
//            }
//            else{
//                printf("%d is a large number.",d);
//            }
//
//        }
//    }
//    else
//    {
//        if(b>=c)
//        {
//            if(b>=d){
//                printf("%d is a large number.",b);
//            }
//            else{
//                printf("%d is a large number.",d);
//            }
//        }
//        else
//        {
//            if(c>=d){
//                printf("%d is a large number.",c);
//            }
//            else{
//                printf("%d is a large number.",d);
//            }
//        }
//    }
//
//    return 0;
//}


//--------------------


//#include <stdio.h>
//
//void main()
//{
//    int a,b,c,d;
//    printf("Enter number a: ");
//    scanf("%d",&a);
//    printf("Enter number b: ");
//    scanf("%d",&b);
//    printf("Enter number c: ");
//    scanf("%d",&c);
//    printf("Enter number d: ");
//    scanf("%d",&d);
//
//    if(a>=b && a>=c && a>=d)
//    {
//        printf("%d is the large number.",a);
//    }
//    if(b>=a && b>=c && b>=d)
//    {
//        printf("%d is the large number.",b);
//    }
//    if(c>=a && c>=b && c>=d)
//    {
//        printf("%d is the large number.",c);
//    }
//    if(d>=a && d>=b && d>c)
//    {
//        printf("%d is the large number.",d);
//    }
//
//    return 0;
//}


//----------------------

//#include <stdio.h>
//
//void main()
//{
//    int a,b,c,d;
//    printf("Enter number a: ");
//    scanf("%d",&a);
//    printf("Enter number b: ");
//    scanf("%d",&b);
//    printf("Enter number c: ");
//    scanf("%d",&c);
//    printf("Enter number d: ");
//    scanf("%d",&d);
//
//    if(a>=b && a>=c && a>=d)
//    {
//        printf("%d is the large number.",a);
//    }
//    else if(b>=a && b>=c && b>=d)
//    {
//        printf("%d is the large number",b);
//    }
//    else if(c>=a && c>=b && c>=d)
//    {
//        printf("%d is the large number",c);
//
//    }
//    else
//    {
//        printf("%d is the large number",d);
//
//    }
//
//    return 0;
//}
