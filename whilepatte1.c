#include <stdio.h>
 main() {
    int i = 1;
    while (i <= 5)
	{
		int j = i;
        while (j <= 5)
		{
			j++;
            printf("%d", j);   
        }
        i++;
        printf("\n");
    }
    getch();
}

