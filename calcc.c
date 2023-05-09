#include <stdio.h>
#include <math.h>
//rosmani22

double sum(double num1, double num2) {
    return num1 + num2;
}


double subtraction(double num1, double num2) {
    return num1 - num2;
}


double multiplication(double num1, double num2) {
    return num1 * num2;
}


double division(double num1, double num2) {
    if (num2 == 0) {
        printf("Error: Cannot divide by zero!\n");
        return 0;
    } else {
        return num1 / num2;
    }
}


double squareRoot(double num) {
    if (num < 0) {
        printf("Error: Cannot calculate square root of a negative number!\n");
        return 0;
    } else {
        return sqrt(num);
    }
}


double power(double num, int m) {
    return pow(num, m);
}


double calculateAverage() {
    int count = 0;
    double sum = 0;
    double num;

    printf("Enter numbers to calculate average (enter a special character to finish): ");
    while (scanf("%lf", &num) == 1) {
        sum += num;
        count++;
    }

    if (count == 0) {
        printf("Error: No numbers entered!\n");
        return 0;
    } else {
        return sum / count;
    }
}

int main() {
    double num1, num2;
    int m;
    char operation;

    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    printf("Enter the operation (+, -, *, /, sqrt, pow, a): ");
    scanf(" %c", &operation);

    switch (operation) {
        case '+':
            printf("Sum: %.2lf\n", sum(num1, num2));
            break;
        case '-':
            printf("Subtraction: %.2lf\n", subtraction(num1, num2));
            break;
        case '*':
            printf("Multiplication: %.2lf\n", multiplication(num1, num2));
            break;
        case '/':
            printf("Division: %.2lf\n", division(num1, num2));
            break;
        case 's':
        case 'S':
            printf("Square Root of %.2lf: %.2lf\n", num1, squareRoot(num1));
            break;
        case 'p':
        case 'P':
            printf("%.2lf raised to the power of %d: %.2lf\n", num1, m, power(num1, m));
            break;
        case 'a':
        case 'A':
            printf("Average: %.2lf\n", calculateAverage());
            break;
        default:
            printf("Error: Invalid operation!\n");
    }

    return 0;
}
