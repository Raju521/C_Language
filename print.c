#include <stdio.h>

int main() {
    int number, i, result;

    printf("Enter any number ");
    scanf("%d", &number);

    printf("Table of %d\n", number);
    for (i = 1; i <= 10; i++) {
        result = number * i;
        printf("%d * %d = %d\n", number, i, result);
    }

    getch();
}
