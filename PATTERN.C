#include<stdio.h>
#include<conio.h>
void main()
{
	int n,l,t;
	clrscr();
	printf("enter a no: ");
	scanf("%d",&n);
	for(l=1,t=n/10;t!=0;t/=10,l*=10);
	printf("\n the pattern\n");
	for(t=n;t!=0;t%=l,l/=10)
	printf("\n%d",t);
	getch();
}




