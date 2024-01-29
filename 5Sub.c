#include <stdio.h>
int main()
{
	int E,H,P,M,S,total ;
	float per;
	
	printf("Enter the marks of english:");
	scanf("%d",&E);
	printf("Enter the marks of hindi:");
	scanf("%d",&H);
	printf("Enter the marks of punjabi:");
	scanf("%d",&P);
	printf("Enter the marks of math:");
	scanf("%d",&M);
	printf("Enter the marks of Science:");
	scanf("%d",&S);
	total=E+H+P+M+S;
	printf("total marks :%d",total);
	
	per=((E+H+P+M+S)*100)/500;
	printf(" total percentage %f",per);
	getch();	
}
