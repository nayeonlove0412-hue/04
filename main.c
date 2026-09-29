#include <stdio.h>

int main (int argc, char *argv[]) {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%i %i", &num1, &num2);

    printf("%i + %i = %i\n", num1, num2, num1 + num2);
    printf("%i - %i = %i\n", num1, num2, num1 - num2);
    printf("%i * %i = %i\n", num1, num2, num1 * num2);
    printf("%i / %i = %i\n", num1, num2, num1 / num2);
    printf("%i %% %i = %i\n", num1, num2, num1 % num2);
    return 0;
}