#include <stdio.h>

int main()
{
	int n1, i, n2, gcd;

	printf("Enter a +ve No:\t");
	scanf("%d",&n1);
	
	printf("Enter another +ve No:\t");
	scanf("%d",&n2);

	for ( i = 1; i <= n1 && i<= n2; i++)
	{
		if ( n1%i == 0 && n2%i == 0)
		{
			gcd = i;
		}
	}
	printf("GCD of %d and %d is:\t%d",n1,n2,gcd);
	return 0;
}