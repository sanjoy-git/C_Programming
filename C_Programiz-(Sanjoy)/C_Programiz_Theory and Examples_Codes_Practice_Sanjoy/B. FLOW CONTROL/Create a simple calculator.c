/// Create a simple calculator

///C Program to Make a Simple Calculator Using switch...case

///Simple Calculator using switch Statement

//#include <stdio.h>
//int main() {
//    char operator;
//    double first, second;
//    printf("Enter an operator (+, -, *,): ");
//    scanf("%c", &operator);
//    printf("Enter two operands: ");
//    scanf("%lf %lf", &first, &second);
//    switch (operator) {
//    case '+':
//        printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
//        break;
//    case '-':
//        printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
//        break;
//    case '*':
//        printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
//        break;
//    case '/':
//        printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
//        break;
//        // operator doesn't match any case constant
//    default:
//        printf("Error! operator is not correct");
//    }
//    return 0;
//}

/// Practice...


#include <stdio.h>
int main()
{
    char operator;
    float num1, num2;
    printf("Enter an operator (+, -, * , / , % ): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);
    switch (operator)
    {
    case '+':
        printf("%.3f + %.3f = %.3f", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%.3f - %.3f = %.3f", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%.3f * %.3f = %.3f", num1, num2, num1 * num2);
        break;
    case '/':
        printf("%.3f / %.3f = %.3f", num1, num2, num1 / num2);
        break;
    case '%':{
        int i,j;
        i= (int)num1;
        j=(int)num2;
        printf("%d modulus %d = %d", i, j, i % j);
        break;
    }
    default:
        printf("Error! operator is not correct");
    }
    return 0;
}
