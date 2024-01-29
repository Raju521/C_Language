#include <stdio.h>
main()
{
	int a=2,b=3,c,d,i;
	for (i=1; i<=10; i++)
	{
		c=a*i;
		d=b*i;
		printf("%d,%d,",c,d);
	}
	getch();
}
