#include <stdio.h>
#include <stdlib.h>
int max_ones (int n);
int main(void) {
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Max ones between two zeros is :%d",max_ones(n));
}
int max_ones (int n)
{
	int count =0;
	while (n!=0)
	{
		n=(n&(n<<1));
		count++;

	}
	return count;
}
