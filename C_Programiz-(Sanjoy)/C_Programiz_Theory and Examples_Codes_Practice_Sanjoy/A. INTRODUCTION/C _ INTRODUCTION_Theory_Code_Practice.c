

//main()                //main function
//{
//
//}

/// ----------------C Keywords and Identifiers-------------

/* C Keywords

auto	double	int	struct
break	else	long	switch
case	enum	register	typedef
char	extern	return	union
continue	for	signed	void
do	if	static	while
default	goto	sizeof	volatile
const	float	short	unsigned  etc... */

//int money;            // C identifiers is a any identity name. such as variable name.
//double accountBalance;



/// -------------------C Variables, Constants and Literals---------------


//char ch = 'a';
//  // some code
//ch = 'l';

//int number = 5;      // integer variable
//number = 5.5;        // error
//double number;       // error


/*  decimal (base 10)
    octal (base 8)
    hexadecimal (base 16)*/

/* Escape Sequences : \b, \f, \n, \r, \t, \v, \\, \', \", \?, \0, etc...  */


//"good"                  //string constant
//""                     //null string constant
//"      "               //string constant of six white space
//"x"                    //string constant having a single character.
//"Earth is round\n"         //prints string with a newline



//const double PI = 3.14;           //Constants
//PI = 2.9; //Error                 //its value cannot be changed.



/// -----------C Preprocessor and Macros----------

// C Source Code --------> Preprocessor ----------> compiler

//#define PI 3.14           //#define preprocessor directive.

//Including Header Files: #include

//#include <stdio.h>                    // Find it directly in the install file.
//#include "my_header.h"               // It firstly find in the source file and secondly find in the install file.

///Macros using #define

// #define c 299792458  // speed of light


///Example 1: #define preprocessor

//#include<stdio.h>
//#define PI 3.1416             //define pi value
//
//int main(){
//    float radius,area;
//    printf("Enter the radius: ");
//    scanf("%f",&radius);
//
//    //Notice, the use of PI
//    area=PI*radius*radius;
//
//    printf("Area = %.2f",area);
//    return 0;
//}

///Practice...

//#include<stdio.h>
//#define name "Sanjoy roy"             //define the name
//
//int main(){
//    printf("%s",name);                //use the name
//
//    return 0;
//}


/// Example 2: Using #define preprocessor

//#include<stdio.h>
//#define PI 3.1415
//#define circleArea(r) (PI*r*r)

//int main(){
//    float radius,area;
//
//    printf("Enter the radius : ");
//    scanf("%f",&radius);
//    area=circleArea(radius);
//    printf("Area=%.2f",area);
//
//    return 0;
//}

///Practice...

//#include<stdio.h>
//#define num3 15
//#define sum(num1,num2) (num1+num2+num3)         //receive the value of argument.and return.
//
//int main(){
//    int num1,num2,result;
//    printf("Enter the num1&num2 : ");
//    scanf("%d%d",&num1,&num2);
//
//    result=sum(num1,num2);              //passing the value of argument.
//
//    printf("Result: %d",result);
//
//    return 0;
//}

///#ifdef Directive

/* #ifdef, #if, #defined, #else and #elseif  is conditional  directives */

//#ifdef MACRO
//   // conditional codes
//#endif

///practice...

//#include<stdio.h>
//#define y 10
//
//int main(){
//    #ifdef y
//    printf("y= %d",y);
//    #endif // y
//
//    return 0;
//}


///#if, #elif and #else Directive

//#if expression
//    // conditional codes if expression is non-zero
//#elif expression1
//    // conditional codes if expression is non-zero
//#elif expression2
//    // conditional codes if expression is non-zero
//#else
//    // conditional if all expressions are 0
//#endif

///Practice...

//#include<stdio.h>
//
//#define a 10
//#define y 5
//#define z 100
//
//#define number  10          //input value
//
//int main()
//{
//    int b=15;
//
//#if number==10                  // expression/condition true then into the body.
//    printf("a is %d\n",a);
//#elif number==5
//    printf("y is %d\n",y);       //Statement
//#elif number==100
//    printf("z is %d\n",z);
//#elif number==15
//    printf("b is %d",b);
//#else
//    printf("number is not equal");
//#endif // number
//
//    return 0;
//}


/// Predefined Macros

/*
  MACRO

__DATE__
__FILE__
__LINE__
__STDC__
__TIME__
etc...
*/

///Example 3: Get current time using __TIME__

//#include <stdio.h>
//int main()
//{
//   printf("Current time: %s",__TIME__);
//}

///Practice...

//#include<stdio.h>
//
//int main(){
//    printf("Current time: %s (international format)\n",__TIME__);
//    printf("Current Date: %s \n",__DATE__);
//    printf("Current file location: %s\n",__FILE__);
//
//}


///-------------C Data Types----------

/// Basic types

/* int,char,float,double,etc.. */

//#include<stdio.h>
//
//int main(){
//
//    int id,age;   //declare the integer variable.
//    char test='s';
//    float salary;
//    double price;
//
//    float r=2.33;   //value initialization
//
//    //void is not return type.
//    long a;
//    long long b;
//    long double c;
//    short d;
//
//    int x;                      //work positive and negative value.
//    unsigned int y;             //just work positive value.
//
//    printf("size of int : %d byte\n",sizeof(id));
//    printf("size of char : %d byte\n",sizeof(test));
//    printf("size of float : %d byte\n",sizeof(salary));
//    printf("size of double : %d byte\n",sizeof(price));
//    printf("\n");
//    printf("size of long : %d byte\n",sizeof(a));
//    printf("size of short : %d byte\n",sizeof(d));
//
//    return 0;
//}

///Other data types

/* bool type, enumerated type, complex type*/

///Derived Data Types

/*arrays, pointers, function types, structures, etc.*/




///----------------------C Input Output (I/O)-------------------

///Example 1: C Output

//#include <stdio.h>
//int main()
//{
//    // Displays the string inside quotations
//    printf("C Programming");
//    return 0;
//}

///practice...

//#include<stdio.h>
//
//int main(){
//    printf("Sanjoy Roy");           // printf() is one of the main output function.
//}

/// Example 2: Integer Output

//#include <stdio.h>
//int main()
//{
//    int testInteger = 5;
//    printf("Number = %d", testInteger);
//    return 0;
//}

/// practice...

//#include<stdio.h>
//
//int main(){
//    int test=3;
//    printf("value: %d",test);
//    return 0;
//}


///Example 3: float and double Output

//#include <stdio.h>
//int main()
//{
//    float number1 = 13.5;
//    double number2 = 12.4;
//    printf("number1 = %f\n", number1);
//    printf("number2 = %lf", number2);
//    return 0;
//}

///practice...

//#include<stdio.h>
//
//int main()
//{
//    float num1=2.4;
//    double num2=4.5;
//    printf("number1 : %.3f\n",num1);            // %.3f use after the point 3 digit print
//    printf("number2 : %.3lf\n",num2);
//    return 0;
//}

/// Example 4: Print Characters

//#include <stdio.h>
//int main()
//{
//    char chr = 'a';
//    printf("character = %c.", chr);
//    return 0;
//}

/// Practice...

//#include<stdio.h>
//
//int main(){
//    char x='s';                   //char size is 1 byte.
//    printf("character = %c",x);
//    return 0;
//}


///C Input


/// Example 5: Integer Input/Output

//#include <stdio.h>
//int main()
//{
//    int testInteger;
//    printf("Enter an integer: ");
//    scanf("%d", &testInteger);
//    printf("Number = %d",testInteger);
//    return 0;
//}

///practice...
//#include<stdio.h>
//
//int main(){
//    int num;
//    printf("Enter an integer value: ");
//    scanf("%d",&num);                           //input a integer value
//    printf("number: %d",num);                   //output the same output value
//}

/// Example 6: Float and Double Input/Output

//#include <stdio.h>
//int main()
//{
//    float num1;
//    double num2;
//    printf("Enter a number: ");
//    scanf("%f", &num1);
//    printf("Enter another number: ");
//    scanf("%lf", &num2);
//    printf("num1 = %f\n", num1);
//    printf("num2 = %lf", num2);
//    return 0;
//}

//#include<stdio.h>
//int main(){
//    float number1;
//    double number2;
//    printf("Enter a number: ");
//    scanf("%f",&number1);                  //input a real number
//    printf("Enter another number: ");
//    scanf("%lf",&number2);
//
//    printf("number = %.3f\n", number1);     //output a same rear number but after point 3 digit print
//    printf("number= %.3lf",number2);
//
//    return 0;
//}

/// Example 7: C Character I/O

//#include <stdio.h>
//int main()
//{
//    char chr;
//    printf("Enter a character: ");
//    scanf("%c",&chr);
//    printf("You entered %c.", chr);
//    return 0;
//}

/// Practice...

//#include<stdio.h>
//
//int main(){
//    char a;
//    printf("Enter a character: ");
//    scanf("%c",&a);                   //input a just 1 character
//    printf("output: %c",a);           //output a same char
//
//    return 0;
//}


/// Example 8: ASCII Value

//#include <stdio.h>
//int main()
//{
//    char chr;
//    printf("Enter a character: ");
//    scanf("%c", &chr);
//    // When %c is used, a character is displayed
//    printf("You entered %c.\n",chr);
//    // When %d is used, ASCII value is displayed
//    printf("ASCII value is % d.", chr);
//    return 0;
//}

/// Practice...

//#include<stdio.h>
//
//int main(){
//    char chr;
//    printf("Enter a character value : ");
//    scanf("%c",&chr);
//    printf("%c = %d",chr,chr);            //output a char and ANCII value
//
//    return 0;
//}

/// I/O Multiple Values

//#include <stdio.h>
//int main()
//{
//    int a;
//    float b;
//    printf("Enter integer and then a float: ");
//
//    // Taking multiple inputs
//    scanf("%d%f", &a, &b);
//    printf("You entered %d and %f", a, b);
//    return 0;
//}


/// Practice...

//#include<stdio.h>
//
//int main(){
//    int a,b;
//    float c;
//
//    printf("Enter integer,integer and float number : \n");
//    scanf("%d%d%f",&a,&b,&c);                      //input the multiple type value
//
//    printf("a= %d , b= %d, c= %f",a,b,c);          //print the multiple type value
//
//    return 0;
//}



///---------------------------C Programming Operators---------------------


/// C Arithmetic Operators

// Working of arithmetic operators
//#include <stdio.h>
//int main()
//{
//    int a = 9,b = 4, c;
//
//    c = a+b;
//    printf("a+b = %d \n",c);
//    c = a-b;
//    printf("a-b = %d \n",c);
//    c = a*b;
//    printf("a*b = %d \n",c);
//    c = a/b;
//    printf("a/b = %d \n",c);
//    c = a%b;
//    printf("Remainder when a divided by b = %d \n",c);
//
//    return 0;
//}


/// Practice...

//#include<stdio.h>
//
//int main()
//{
//    int num1,num2,result;
//    printf("Enter the 2 number : ");
//    scanf("%d%d",&num1,&num2);
//
//    result=num1+num2;                   // addition or unary plus use
//    printf("num1+num2 : %d\n",result);
//    result=num1-num2;                   // subtraction or unary minus
//    printf("num1-num2 : %d\n",result);
//    result=num1*num2;                   // multiplication use
//    printf("num1*num2 : %d\n",result);
//    result=num1/num2;                   // division
//    printf("num1/num2 : %d\n",result);
//    result=num1%num2;                  // remainder after division( modulo division)
//    printf("remainder : %d",result);
//
//    return 0;
//}



/// C Increment and Decrement Operators
// Arithmetic Operator.
// Working of increment and decrement operators
//#include <stdio.h>
//int main()
//{
//    int a = 10, b = 100;
//    float c = 10.5, d = 100.5;
//    printf("++a = %d \n", ++a);
//    printf("--b = %d \n", --b);
//    printf("++c = %f \n", ++c);
//    printf("--d = %f \n", --d);
//    return 0;
//}

/// Practice...

//#include<stdio.h>
//
//int main(){
//    int a=10;
//
//    printf("++a : %d\n",++a);      // Prefix increment
//    printf("--a : %d\n",--a);      // Prefix decrement
//    printf("a++ : %d\n",a++);      // Postfix increment
//    printf("a-- : %d\n",a--);      // Postfix decrement
//    printf("a : %d",a);
//}


///C Assignment Operators

///Example 3: Assignment Operators

// Working of assignment operators
//#include <stdio.h>
//int main()
//{
//    int a = 5, c;
//    c = a;      // c is 5
//    printf("c = %d\n", c);
//    c += a;     // c is 10
//    printf("c = %d\n", c);
//    c -= a;     // c is 5
//    printf("c = %d\n", c);
//    c *= a;     // c is 25
//    printf("c = %d\n", c);
//    c /= a;     // c is 5
//    printf("c = %d\n", c);
//    c %= a;     // c = 0
//    printf("c = %d\n", c);
//    return 0;
//}


/// Practice...

//#include<stdio.h>
//
//int main()
//{
//    int number=3,result;
//
//    result=number;              // Assignment operator use
//    printf(" = : %d\n",result);
//    result += number;           // Addition assignment use
//    printf("+= : %d\n",result);
//    result -= number;           // Subtraction assignment use
//    printf("-= : %d\n",result);
//    result *= number;           // Multiplication assignment use
//    printf("*= : %d\n",result);
//    result /= number;           // Division assignment use
//    printf("/= : %d\n",result);
//    result %= number;           // Modulus assignment use
//    printf("modulus= : %d\n",result);
//
//    return 0;
//}


///Example 4: Relational Operators

// Working of relational operators
//#include <stdio.h>
//int main()
//{
//    int a = 5, b = 5, c = 10;
//    printf("%d == %d is %d \n", a, b, a == b);
//    printf("%d == %d is %d \n", a, c, a == c);
//    printf("%d > %d is %d \n", a, b, a > b);
//    printf("%d > %d is %d \n", a, c, a > c);
//    printf("%d < %d is %d \n", a, b, a < b);
//    printf("%d < %d is %d \n", a, c, a < c);
//    printf("%d != %d is %d \n", a, b, a != b);
//    printf("%d != %d is %d \n", a, c, a != c);
//    printf("%d >= %d is %d \n", a, b, a >= b);
//    printf("%d >= %d is %d \n", a, c, a >= c);
//    printf("%d <= %d is %d \n", a, b, a <= b);
//    printf("%d <= %d is %d \n", a, c, a <= c);
//    return 0;
//}


/// Practice...

//#include<stdio.h>
//
//int main()
//{
//    int num1=3,num2=4,d;
//
//    d=(num1==num2);                 // Equal to operator
//    printf("%d==%d is %d\n",num1,num2,d);
//    d=(num1>num2);                  // Greater than operator
//    printf("%d>%d is %d\n",num1,num2,d);
//    d=(num1<num2);                  // Less than operator
//    printf("%d<d is %d\n",num1,num2,d);
//    d=(num1!=num2);                 // Not equal to operator
//    printf("%d!=%d is %d\n",num1,num2,d);
//    d=(num1>=num2);                 // Greater than or equal operator
//    printf("%d>=%d is %d\n",num1,num2,d);
//    d=(num1<=num2);                  // Less than or equal to operator
//    printf("%d<=%d is %d\n",num1,num2,d);
//
//    return 0;
//}


/// C Logical Operators

// Working of logical operators
//#include <stdio.h>
//int main()
//{
//    int a = 5, b = 5, c = 10, result;
//    result = (a == b) && (c > b);
//    printf("(a == b) && (c > b) is %d \n", result);
//    result = (a == b) && (c < b);
//    printf("(a == b) && (c < b) is %d \n", result);
//    result = (a == b) || (c < b);
//    printf("(a == b) || (c < b) is %d \n", result);
//    result = (a != b) || (c < b);
//    printf("(a != b) || (c < b) is %d \n", result);
//    result = !(a != b);
//    printf("!(a == b) is %d \n", result);
//    result = !(a == b);
//    printf("!(a == b) is %d \n", result);
//    return 0;
//}


///Practice...

//#include<stdio.h>
//
//int main(){
//    int x=10,y=5,z=6,digit;
//    printf("x= %d , y= %d, z=%d\n",x,y,z);
//    digit=(x==y)&&(x>=z);           // Logical AND use. Both side true then true.
//    printf("(x==y)&&(x>=z): %d\n",digit);
//    digit=(x==y)||(x>=z);           // Logical OR use. Both side or one side true then true.
//    printf("(x==y)||(x>=z): %d\n",digit);
//    digit= !(x==y);                 // Logical NOT use. !0= 1;
//    printf("!(x==y): %d",digit);
//
//    return 0;
//}


/// C Bitwise Operators


///Example #1: Bitwise AND &

/*  0 & 0 =0;
    0 & 1 =0;
    1 & 0 =0;
    1 & 1 =1;  */

//#include <stdio.h>
//int main()
//{
//    int a = 12, b = 25;
//    printf("Output = %d", a&b); // a and b convert the binary  then AND calculation .
//    return 0;
//}

///Practice

//#include<stdio.h>
//
//int main(){
//    int x=13, y=10,z;
//    z=(x&y);                // binary z=(1101 & 1010)    // 8=1000
//    printf("Output : %d",z);    // output : 8
//    return 0;
//}

/// Example #1: Bitwise OR |

/*  0 | 0 =0;
    0 | 1 =1;
    1 | 0 =1;
    1 | 1 =1;  */

//#include <stdio.h>
//int main()
//{
//    int a = 12, b = 25;
//    printf("Output = %d", a|b);     //a and b convert the binary and digit OR calculation .
//    return 0;
//}

///Practice...

//#include<stdio.h>
//
//int main(){
//    int x=13,y=10,z;
//    z=(x|y);            // z=(1101 | 1010)       // 15=1111
//    printf("Output : %d",z); //output : 15
//    return 0;
//}


///Bitwise XOR (exclusive OR) operator ^

///Example #3: Bitwise XOR

/*  0 ^ 0 =0;
    0 ^ 1 =1;
    1 ^ 0 =1;
    1 ^ 1 =0;  */

//#include <stdio.h>
//int main()
//{
//    int a = 12, b = 25;
//    printf("Output = %d", a^b);     // a and b convert the binary digit then XOR calculation.
//    return 0;
//}


///Practice

//#include<stdio.h>
//
//int main(){
//    int x=13, y=10,z;
//    z=(x^y);                // z=(1101 ^ 1010)     // 7=111
//    printf("Output : %d",z);    // output : 7
//    return 0;
//}


/// Bitwise complement operator ~

/// Example #4: Bitwise complement

//#include <stdio.h>
//int main()
//{
//    printf("Output = %d\n",~35);
//    printf("Output = %d\n",~-12);
//    return 0;
//}

/// Practice...

//#include<stdio.h>
//
//int main(){
//    int z;
//    z= ~(5);               // 1's complement next 2's complement
//    printf("x= %d\n",z);
//    z= ~(-5);              // 2's complement next 1's complement
//    printf("y= %d",z);
//
//    return 0;
//}

/// Shift Operators in C programming

/// Right Shift Operator

/// Example #5: Shift Operators

//#include <stdio.h>
//int main()
//{
//    int num=212, i;
//    for (i=0; i<=2; ++i)
//        printf("Right shift by %d: %d\n", i, num>>i);
//     printf("\n");
//     for (i=0; i<=2; ++i)
//        printf("Left shift by %d: %d\n", i, num<<i);
//
//     return 0;
//}

/// Practice...

/*
32 16 8 4 2 1
      1 1 0 1  >> 2   //13	// Right shift operator.
      0 0 1 1 // 0 1  //3
      1 1 0 1  <<2    //13	// Left shift Operator.
1  1  0 1 0 0         //52
*/

//#include<stdio.h>
//
//int main()
//{
//    int a=13,r,l;
//    r=(a>>2);           // Right shift operator.
//    printf("Right shift : %d\n",r);
//    l=(a<<2);           // Left shift Operator.
//    printf("Left shift : %d",l);
//
//    return 0;
//}



/// Other Operators

/// Comma Operator

//int a, c = 5, d;


/// The sizeof operator

/// Example 6: sizeof Operator

//#include <stdio.h>
//int main()
//{
//    int a;
//    float b;
//    double c;
//    char d;
//    printf("Size of int=%lu bytes\n",sizeof(a));
//    printf("Size of float=%lu bytes\n",sizeof(b));
//    printf("Size of double=%lu bytes\n",sizeof(c));
//    printf("Size of char=%lu byte\n",sizeof(d));
//    return 0;
//}


/// Practice...

#include<stdio.h>

int main(){
    int a=123344;
    char b;
    float c;
    double d;

    printf("%li\n",sizeof(a));
    printf("%lu\n",sizeof(b));
    printf("%d\n",sizeof(c));
    printf("%llu",sizeof(d));

    return 0;
}



/// ...end...
