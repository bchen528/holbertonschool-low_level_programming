#include <stdio.h>
#include <math.h>

int main(void)
{
	int num = 28;
	int res;
	int i;

	res = (sqrt(num) / 10) + 1;

	for (i = res; i > 1; i--)
	{
		if (num % i == 0)
		   {
				num = (num / i);
				      printf("%d\n", num);
				      		     }
						     }

						     return (0);
}