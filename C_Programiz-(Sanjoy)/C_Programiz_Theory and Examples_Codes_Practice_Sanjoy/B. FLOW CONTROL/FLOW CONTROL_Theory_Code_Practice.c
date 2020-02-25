/// -----------------C if...else- Statement-----------

/// C if Statement


/// Example 1: if statement

//#include <stdio.h>
//int main() {
//    int number;
//    printf("Enter an integer: ");
//    scanf("%d", &number);
//    // true if number is less than 0
//    if (number < 0) {
//        printf("You entered %d.\n", number);
//    }
//    printf("The if statement is easy.");
//    return 0;
//}

/// Practice...

//#include<stdio.h>
//
//int main(){
//    long number;
//    printf("Enter a long integer number : ");
//    scanf("%li",&number);
//    if(number>=0){
//        printf("This number is Positive.");
//    }
//    else{
//        printf("This number is Negative.");
//    }
//    return 0;
//}


/// Example 2: if...else statement

//// Check whether an integer is odd or even
//#include <stdio.h>
//int main() {
//    int number;
//    printf("Enter an integer: ");
//    scanf("%d", &number);
//    // True if the remainder is 0
//    if  (number%2 == 0) {
//        printf("%d is an even integer.",number);
//    }
//    else {
//        printf("%d is an odd integer.",number);
//    }
//    return 0;
//}

/// Practice...

//#include<stdio.h>
//
//int main(){
//    int number;
//    printf("Enter an integer number: ");
//    scanf("%d",&number);
//
//    if(number%2==0){
//        printf("This number is even.");
//    }
//    else{
//        printf("This number is odd.");
//    }
//
//    return 0;
//}


/// Example 3: C if...else LadderExample 3: C if...else Ladder

// Program to relate two integers using =, > or < symbol

//#include <stdio.h>
//int main() {
//    int number1, number2;
//    printf("Enter two integers: ");
//    scanf("%d %d", &number1, &number2);
//    //checks if the two integers are equal.
//    if(number1 == number2) {
//        printf("Result: %d = %d",number1,number2);
//    }
//    //checks if number1 is greater than number2.
//    else if (number1 > number2) {
//        printf("Result: %d > %d", number1, number2);
//    }
//    //checks if both test expressions are false
//    else {
//        printf("Result: %d < %d",number1, number2);
//    }
//    return 0;
//}

/// Practice ...

//#include<stdio.h>
//
//int main(){
//    int num1=10,num2;
//    printf("Enter a number check for 10 : ");
//    scanf("%d",&num2);
//
//    if(num1<num2){
//        printf("%d<%d",num1,num2);
//    }
//    else if(num1>num2){
//        printf("%d>%d",num1,num2);
//    }
//    else{
//        printf("%d=%d",num1,num2);
//    }
//
//    return 0;
//}


/// Example 4: Nested if...else

//#include <stdio.h>
//int main() {
//    int number1, number2;
//    printf("Enter two integers: ");
//    scanf("%d %d", &number1, &number2);
//    if (number1 >= number2) {
//      if (number1 == number2) {
//        printf("Result: %d = %d",number1,number2);
//      }
//      else {
//        printf("Result: %d > %d", number1, number2);
//      }
//    }
//    else {
//        printf("Result: %d < %d",number1, number2);
//    }
//    return 0;
//}


/// Practice...

//#include<stdio.h>
//int main(){
//    int num1,num2,num3;
//
//    printf("Enter the numbers : ");
//    scanf("%d%d%d",&num1,&num2,&num3);
//
//    if(num1<num2){
//        if(num2>num3){
//            printf("Large Number : %d",num2);
//        }
//        else{
//            printf("Large number : %d",num3);
//        }
//    }
//    else if(num1>num3){
//        printf("Learge number : %d",num1);
//    }
//    else{
//        printf("Learge number : %d",num3);
//    }
//    return 0;
//}


/// --------------- C for Loop -------------

/// Example 1: for loop

// Print numbers from 1 to 10
//#include <stdio.h>
//int main()
//{
//    int i;
//    for (i = 1; i < 11; ++i)
//    {
//        printf("%d ", i);
//    }
//    return 0;
//}


/// Practice...

//#include<stdio.h>
//
//int main()
//{
//    int i,j;
//
//    for (i=1,j=1; i<=10&&i<=10; i++,j++)
//    {
//        printf("i: %d  j: %d\n",i,j);
//    }
//    return 0;
//}



/// Example 2: for loop

// Program to calculate the sum of first n natural numbers
// Positive integers 1,2,3...n are known as natural numbers
//#include <stdio.h>
//int main()
//{
//    int num, count, sum = 0;
//    printf("Enter a positive integer: ");
//    scanf("%d", &num);
//    // for loop terminates when num is less than count
//    for(count = 1; count <= num; ++count)
//    {
//        sum += count;
//    }
//    printf("Sum = %d", sum);
//    return 0;
//}

/// ---------- C while and do...while Loop --------------

/// Example 1: while loop

//// Print numbers from 1 to 5
//#include <stdio.h>
//int main()
//{
//    int i = 1;
//
//    while (i <= 5)
//    {
//        printf("%d\n", i);
//        ++i;
//    }
//    return 0;
//}


/// Practice...

//#include<stdio.h>
//int main(){
//    int i=0;
//    while(i<10){
//        printf("i = %d\n",i);
//        ++i;
//    }
//    return 0;
//}


///---------do...while loop---------

/// Example 2: do...while loop

//// Program to add numbers until the user enters zero
//#include <stdio.h>
//int main()
//{
//    double number, sum = 0;
//    // the body of the loop is executed at least once
//    do
//    {
//        printf("Enter a number: ");
//        scanf("%lf", &number);
//        sum += number;
//    }
//    while(number != 0.0);
//    printf("Sum = %.2lf",sum);
//    return 0;
//}

/// Practice...

//#include<stdio.h>
//int main()
//{
//    int number,sum=0;
//
//    do
//    {
//        printf("Enter a number : ");
//        scanf("%d",&number);
//        sum+=number;
//    }
//    while(number!=0);
//
//    printf("Sum= %d",sum);
//
//    return 0;
//}


/// ---------C break and continue-------

/// Example 1: break statement

// Program to calculate the sum of a maximum of 10 numbers
// If a negative number is entered, the loop terminates
# include <stdio.h>
//int main()
//{
//    int i;
//    double number, sum = 0.0;
//    for(i=1; i <= 10; ++i)
//    {
//        printf("Enter a n%d: ",i);
//        scanf("%lf",&number);
//         If the user enters a negative number, the loop ends
//        if(number < 0.0)
//        {
//            break;
//        }
//        sum += number; // sum = sum + number;
//    }
//    printf("Sum = %.2lf",sum);
//
//    return 0;
//}

/// Practice...

//#include<stdio.h>
//
//int main(){
//    int i;
//    float number,sum=0.0;
//
//    for(i=1;i<=10;i++){
//        printf("Enter the number : ");
//    scanf("%f",&number);
//    if(number<0.0){
//        break;
//    }
//    sum+=number;
//    }
//    printf("sum =%.2f",sum);
//
//    return 0;
//}



//#include<stdio.h>
//
//int main()
//{
//    int i;
//    for(i=1; i<=10; i++)
//    {
//        if(i==5)
//        {
//            break;
//        }
//        printf("i = %d\n",i);
//
//    }
//    return 0;
//}

/// Example 2: continue statement

//// Program to calculate the sum of a maximum of 10 numbers
//// Negative numbers are skipped from the calculation
//# include <stdio.h>
//int main()
//{
//    int i;
//    double number, sum = 0.0;
//    for(i=1; i <= 10; ++i)
//    {
//        printf("Enter a n%d: ",i);
//        scanf("%lf",&number);
//        if(number < 0.0)
//        {
//            continue;
//        }
//        sum += number; // sum = sum + number;
//    }
//    printf("Sum = %.2lf",sum);
//
//    return 0;
//}


/// Practice...

//#include<stdio.h>
//int main(){
//    int i;
//    float num,sum=0.0;
//
//    for(i=1;i<=10;i++){
//        printf("Enter the number: ");
//        scanf("%f",&num);
//
//        if(num<0.0){
//            continue;
//        }
//        sum+=num;           //sum=sum+num;
//    }
//    printf("sum = %f",sum);
//
//    return 0;
//}

//#include<stdio.h>
//
//int main(){
//    int i;
//
//    for(i=1;i<=10;i++){
//            if(i==5){
//                continue;
//            }
//            printf("i = %d\n",i);
//    }
//    return 0;
//}


///---------- Example: Simple Calculator ------------

//// Program to create a simple calculator
//#include <stdio.h>
//int main() {
//    char operator;
//    double n1, n2;
//    printf("Enter an operator (+, -, *, /): ");
//    scanf("%c", &operator);
//    printf("Enter two operands: ");
//    scanf("%lf %lf",&n1, &n2);
//    switch(operator)
//    {
//        case '+':
//            printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
//            break;
//        case '-':
//            printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
//            break;
//        case '*':
//            printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
//            break;
//        case '/':
//            printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
//            break;
//        // operator doesn't match any case constant +, -, *, /
//        default:
//            printf("Error! operator is not correct");
//    }
//    return 0;
//}


/// Practice...

//#include<stdio.h>
//
//int main(){
//    char ope;
//    float num1,num2;
//
//    printf("Enter an operator: ");
//    scanf("\n%c",&ope);
//
//    printf("Enter a num1: ");
//    scanf("%f",&num1);
//    printf("Enter a num2: ");
//    scanf("%f",&num2);
//
//    switch(ope){
//    case '+':
//        printf("%.3f+%.3f = %.3f",num1,num2,num1+num2);
//        break;
//
//        case '-':
//        printf("%.3f-%.3f = %.3f",num1,num2,num1-num2);
//        break;
//
//        case '*':
//        printf("%.3f*%.3f = %.3f",num1,num2,num1*num2);
//        break;
//
//        case '/':
//        printf("%.3f/%.3f = %.3f",num1,num2,num1/num2);
//        break;
//
//        default:
//            printf("Error! Operator is not correct");
//    }
//    return 0;
//}
