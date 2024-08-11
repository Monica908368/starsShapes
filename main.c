#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int n ;
	printf("enter number : ");
	scanf("%d",&n);

for(int i=0;i<n;i++)
{
	for (int j =0;j<2*n+1;j++)
	{	if((i+j)>2&&(j-i)<4)
		 printf("*");
        else
        printf(" ");

	}
	printf("\n");



}

for(int i=n-1;i>=0;i--)
{
	for (int j =0;j<2*n+1;j++)
	{	if((i+j)>2&&(j-i)<4)
		 printf("*");
        else
        printf(" ");

	}
	printf("\n");



}

return 0;
}



