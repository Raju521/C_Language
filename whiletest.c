#include <stdio.h>
 main(){
    int i=1,a=0,b=1,c;
    printf("%d",a);
    while (i<=10)
	{	
		c=a+b;
		a=b;
		b=c;
		printf(" %d",c);
		i++;
    }
    getch();
}

