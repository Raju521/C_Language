#include <stdio.h> 
#include <conio.h> 
int main()  
{  
    int a=2, i,b, c=3,d; 
    printf (" Table of %d",a);  
    
    for ( i = 1; i<= 10; i++)  
    {  
    	b=a*i;
        printf ("\n %d",b);   
        d=c*i;
        printf ("\n %d",d);  
    }   
    getch();  
} 
