#include <stdio.h>
 main() {
    int n=4265;
	int c=0, d;
    
    while (n>0) 
	{ 	
		c++;
        d=n%10;
        n=n/10;
		   
    }
   printf("%d",c); 
    getch();
}

