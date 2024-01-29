#include <stdio.h>
main() {
    int i, n=4265789;
    int c=0, d;

    while (n>0) {
        d = n % 10;
        c = c + d;
        n = n / 10;
        i++;
    }
    printf(" %d",c);

    getch();
}

