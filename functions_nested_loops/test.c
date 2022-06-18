#include <stdio.h>
#include <string.h>
#include <stdint.h>

int main(void)
{
	unsigned long int val = 7540113804746346429u;
	unsigned long int val2 = 12200160415121876738u;

	uint64_t res = val + val2;

	/*
	uint64_t res2 = 19740274219868223167;
	*/

	printf("%lu\n", res);

	return (0);
}
