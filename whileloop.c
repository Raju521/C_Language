#include<stdio.h>
main()
{
	int i=1, a=2,b;
	printf("%d",a);
	while (i<=10)
	{	
		b=a*i;
		printf("\n %d*%d=%d",a,i,b);
		i++;
	}
	getch();
}
