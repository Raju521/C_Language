#include <stdio.h>
 main() {
    int i = 1;
    while (i <= 5)
	{
		int j = 1;
        while (j <= i)
		{
			j++;
            printf("%d", i);   
        }
        i++;
        printf("\n",i);
    }
    getch();
}

