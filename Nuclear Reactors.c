#include <stdio.h>
 
int main(int argc, const char *argv[])
{
	unsigned long long a = 0, n = 0, k = 0, i, dividend = 1;
	scanf("%lu %lu %lu", &a, &n, &k);
 
	for (i = 0; i < k; i++, dividend *= n+1) {
		printf("%lu ", ((a/dividend)%(n+1)));
	}
	return 0;
}
