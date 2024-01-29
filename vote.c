#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age <= 17) {
        printf("You are not eligible to vote");
    } else if (age >= 18 && age<=85) {
        printf("You are eligible to vote ");
    }else if (age>=86) 
	printf("No Need to vote ");
    getch();
}




