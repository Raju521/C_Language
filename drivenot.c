#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age <= 17) {
        printf("You can't drive.\n");
    } else if (age >= 18 && age<=22) {
        printf("You need a license to drive.\n");
    } else if (age >= 22 && age <= 65) {
        printf("You don't need a license to drive.\n");
    } else if (age >= 65) {
        printf("Drive slow.\n");
    } 

    return 0;
}

