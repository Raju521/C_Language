#include <stdio.h>
main()
{
	int a,b,total;
	float aveg;
	
	printf("the value of a ");
	scanf("%d",&a);
	printf("the value of b ");
	scanf("%d",&b);
	
	total=a+b;
	printf(" /n The sum of a,b: %d \n", total);
	
	aveg=total/2;
	printf("average value %f",aveg);
	getch();
	
}
