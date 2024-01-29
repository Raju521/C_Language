#include <stdio.h>
main() {
    int n = 4265789,c=0,d;
    while (n > 0) {
    d = n % 10;
    if (d % 2 == 0)
	{ 
    c++;
    }
    n = n / 10;
    }
    printf("Even no %d\n", c);

    getch();
}

