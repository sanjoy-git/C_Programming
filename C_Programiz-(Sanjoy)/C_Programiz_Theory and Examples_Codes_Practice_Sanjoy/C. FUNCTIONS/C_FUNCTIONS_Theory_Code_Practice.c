///---------------C Standard Library Functions--------------

/// Example

//#include <stdio.h>        //use for Standard Library Function
//int main()
//{
//    int num;
//    scanf("%d",&num);                                 //built in function
//    printf("Catch me if you can. number: %d",num);    //built in function
//}

///Example: Square root using sqrt() function

//#include <stdio.h>
//#include <math.h>     //use for sqrt();
//
//int main()
//{
//   float num, root;
//   printf("Enter a number: ");
//   scanf("%f", &num);
//   // Computes the square root of num and stores in root.
//   root = sqrt(num);
//   printf("Square root of %.2f = %.2f", num, root);
//   return 0;
//}

///practice...

//#include<stdio.h>
//#include<math.h>
//
//int main(){
//    int a=9;
//    int s=sqrt(a);
//    printf("%d",s);
//}





///----------C User-defined functions------------



///Example: User-defined function

//#include <stdio.h>
//
//
//int addNumbers(int a, int b);         //returnType functionName(type1 argument1, type2 argument2, ...); function prototype / declaration
//
//int main()
//{
//    int n1,n2,sum;
//    printf("Enters n1 number: ");
//    scanf("%d",&n1);
//    printf("Enters n2 number: ");
//    scanf("%d",&n2);
//    sum = addNumbers(n1, n2);        //functionName(argument1, argument2, ...);  function call
//    printf("sum = %d",sum);
//    return 0;
//}
//int addNumbers(int a, int b)         //returnType functionName(type1 argument1, type2 argument2, ...)  function definition
//{
//    int result;                     // body of the function
//    result = a+b;
//    return result;                  //return (expression);  return statement
//}

///practice...

//#include<stdio.h>
//
//int add(int a,int b);
//int sub(int a,int b);
//int mul(int a,int b);
//int dev(int a,int b);
//
//
//
//int main(){
//    int a=12, b=3;
//    int sum1,sub1,mul1,dev1;
//    sum1=add(a,b);
//    sub1=sub(a,b);
//    mul1=mul(a,b);
//    dev1=dev(a,b);
//    printf("sum: %d sub=%d mul=%d dev=%d",sum1,sub1,mul1,dev1);
//}
//
//int add(int a,int b){
//    int result=a+b;
//    return result;
//}
//
//int sub(int a,int b){
//    int result=a-b;
//    return result;
//}
//
//int mul(int a,int b){
//    int result=a*b;
//    return result;
//}
//
//int dev(int a,int b){
//    int result=a/b;
//    return result;
//}

///Example 1: No arguments passed and no return value

//#include <stdio.h>
//
//void checkPrimeNumber();
//
//int main()
//{
//    checkPrimeNumber();    // argument is not passed
//    return 0;
//}
//// return type is void meaning doesn't return any value
//void checkPrimeNumber()
//{
//    int n, i, flag = 0;
//    printf("Enter a positive integer: ");
//    scanf("%d",&n);
//    for(i=2; i <= n/2; ++i)
//    {
//        if(n%i == 0)
//        {
//            flag = 1;
//        }
//    }
//    if (flag == 1)
//        printf("%d is not a prime number.", n);
//    else
//        printf("%d is a prime number.", n);
//}

///Practice...

//#include<stdio.h>
//
//void check_primenumber();
//
//int main()
//{
//    check_primenumber();
//    printf("\n\n\n");         // new line
//    check_primenumber();
//}
//
//void check_primenumber()
//{
//
//    int n,i,flag=0;
//
//    printf("Enter the number: ");
//    scanf("%d",&n);
//
//    if(n==1)
//    {
//        printf("1 is neither a prime nor a composite number.");
//    }
//    else
//    {
//        for (i=2; i<=n/2; ++i)
//        {
//            if(n%i==0)
//            {
//                flag=1;
//            }
//        }
//
//    }
//
//    if(flag==1 && n!=1)
//    {
//        printf("%d this is not prime number.",n);
//    }
//    else if(n!=1)
//    {
//        printf("%d this is prime number.",n);
//    }
//}


///Example 2: No arguments passed but a return value

//#include <stdio.h>
//int getInteger();
//int main()
//{
//    int n, i, flag = 0;
//   // no argument is passed
//    n = getInteger();
//    for(i=2; i<=n/2; ++i)
//    {
//        if(n%i==0){
//            flag = 1;
//            break;
//        }
//    }
//    if (flag == 1)
//        printf("%d is not a prime number.", n);
//    else
//        printf("%d is a prime number.", n);
//    return 0;
//}
//// returns integer entered by the user
//int getInteger()
//{
//    int n;
//    printf("Enter a positive integer: ");
//    scanf("%d",&n);
//    return n;
//}


///practice...

//#include<stdio.h>
//
//int getint_value();
//
//int main()
//{
//        int n,i,flag=0;
//        n=getint_value();
//
//    if(n==1)
//    {
//        printf("1 is neither a prime nor a composite number.");
//    }
//    else
//    {
//        for (i=2; i<=n/2; ++i)
//        {
//            if(n%i==0)
//            {
//                flag=1;
//            }
//        }
//
//    }
//
//    if(flag==1 && n!=1)
//    {
//        printf("%d this is not prime number.",n);
//    }
//    else if(n!=1)
//    {
//        printf("%d this is prime number.",n);
//    }
//}
//
//int getint_value()
//{
//    int num;
//    printf("Enter the number: ");
//    scanf("%d",&num);
//
//    return num;
//}
//

///Example 3: Argument passed but no return value

//#include <stdio.h>
//void checkPrimeAndDisplay(int n);
//int main()
//{
//    int n;
//    printf("Enter a positive integer: ");
//    scanf("%d",&n);
//    // n is passed to the function
//    checkPrimeAndDisplay(n);
//    return 0;
//}
//// return type is void meaning doesn't return any value
//void checkPrimeAndDisplay(int n)
//{
//    int i, flag = 0;
//    for(i=2; i <= n/2; ++i)
//    {
//        if(n%i == 0){
//            flag = 1;
//            break;
//        }
//    }
//    if(flag == 1)
//        printf("%d is not a prime number.",n);
//    else
//        printf("%d is a prime number.", n);
//}


///practice...

//#include<stdio.h>
//
//void check_primenumber(int n);
//
//int main()
//{
//    int num;
//    printf("Enter the number: ");
//    scanf("%d",&num);
//
//    check_primenumber(num);
//}
//
//void check_primenumber(int n)
//{
//
//    int i,flag=0;
//
//    if(n==1)
//    {
//        printf("1 is neither a prime nor a composite number.");
//    }
//    else
//    {
//        for (i=2; i<=n/2; ++i)
//        {
//            if(n%i==0)
//            {
//                flag=1;
//            }
//        }
//
//    }
//
//    if(flag==1 && n!=1)
//    {
//        printf("%d this is not prime number.",n);
//    }
//    else if(n!=1)
//    {
//        printf("%d this is prime number.",n);
//    }
//}


///Example 4: Argument passed and a return value

//#include <stdio.h>
//int checkPrimeNumber(int n);
//int main()
//{
//    int n, flag;
//    printf("Enter a positive integer: ");
//    scanf("%d",&n);
//    // n is passed to the checkPrimeNumber() function
//    // the returned value is assigned to the flag variable
//    flag = checkPrimeNumber(n);
//    if(flag == 1)
//        printf("%d is not a prime number",n);
//    else
//        printf("%d is a prime number",n);
//    return 0;
//}
//// int is returned from the function
//int checkPrimeNumber(int n)
//{
//    int i;
//    for(i=2; i <= n/2; ++i)
//    {
//        if(n%i == 0)
//            return 1;
//    }
//    return 0;
//}

///practice...

//#include<stdio.h>
//
//int check_primenumber(int num,int flag);
//
//int main()
//{
//    int n,flag=0;
//    printf("Enter the number: ");
//    scanf("%d",&n);
//    if(n==1)
//    {
//        printf("1 is neither a prime nor a composite number.");
//    }
//    else
//    {
//        flag=check_primenumber(n,flag);
//    }
//
//    if(flag==1 && n!=1)
//    {
//        printf("%d this is not prime number.",n);
//    }
//    else if(n!=1)
//    {
//        printf("%d this is prime number.",n);
//    }
//
//    return 0;
//}
//
//int check_primenumber(int num, int flag)
//{
//    int i;
//
//    for (i=2; i<=num/2; ++i)
//    {
//        if(num%i==0)
//        {
//            flag=1;
//        }
//    }
//return flag;
//}


///----------C Recursion-----------

///Example: Sum of Natural Numbers Using Recursion
//#include <stdio.h>
//int sum(int n);
//int main()
//{
//    int number, result;
//    printf("Enter a positive integer: ");
//    scanf("%d", &number);
//    result = sum(number);
//    printf("sum = %d", result);
//    return 0;
//}
//int sum(int n)
//{
//    if (n != 0)
//        return n + sum(n-1);                      // sum() function calls itself
//    else
//        return n;
//}

/////Practice...
//
//#include<stdio.h>
//    int sum(int n);
//int main(){
//    int num,result;
//    num=6;
//    result=sum(num);
//    printf("%d",result);
//}
//
//int sum(int n){
//    if(n!=0){
//        return n+sum(n-1);
//    }
//    else{
//        return n;
//    }
//}


///--------Variable Scope / C Storage Class-------------

//There are 4 types of storage class:
/*automatic      //is a default
external        //is a global variable.
static
register*/


///Example Automatic variable:
//#include<stdio.h>
//
//int main(){
//    auto int i=1;
//    {
//        auto int i=2;
//        {                               //{
//            auto int i=3;                   //Scope, visibility and lifetime of variable
//            printf("i3= %d\n",i);
//        }                               //}
//        printf("i2= %d\n",i);
//    }
//    printf("i1= %d\n",i);
//}



///Example 1: Global Variable

//#include <stdio.h>
//void display();
//int n = 5;  // global/external  variable
//int main()
//{
//    ++n;
//    display();
//    return 0;
//}
//void display()
//{
//    ++n;
//    printf("n = %d", n);
//}

///practice...

//#include<stdio.h>
//
//void display();
//int num=4;
//int main()
//{
//    num=1;
//    display();
//    printf("\n%d",num);
//}
//void display()
//{
//    num=num+2;
//    printf("%d",num);
//}

///Example 2: Static Variable

//#include <stdio.h>
//void display();
//int main()
//{
//    display();
//    display();
//}
//void display()
//{
//    static int c = 1;
//    c += 5;
//    printf("%d  ",c);
//}

///practice...
//#include<stdio.h>
//void display();
//
//int main(){
//    display();
//    display();
//}
//void display(){
//    static int a=2;
//    a=a+3;
//    printf("%d\n",a);
//}

///Example register variable
                                //program outside collect
//#include <stdio.h>
//int main() {
//   register char x = 'S';        //it is temporary hold in the register. it is first.
//   register int a = 10;
//   auto int b = 8;
//   printf("The value of register variable b : %c\n",x);
//   printf("The sum of auto and register variable : %d",(a+b));
//   return 0;
//}

///practice...
//#include<stdio.h>
//int main(){
//    register int a=12;
//    auto int b=10;
//    int c=3;
//    int d=a+b+c;
//    printf("%d",d);
//
//}


///Thanks
#include<stdio.h>
int main(){
printf("Thanks...");
}

