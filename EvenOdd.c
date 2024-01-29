#include <stdio.h>
#include <conio.h>

int main() {
    int a = 5;
    printf("the value of a ");
    if (a % 2 == 0) {
        printf("%d Even Number", a);
    } else {
        printf("%d odd Number", a);
    }
    getch();
}

