#include <stdio.h>

void calc_val(int n)
{
        int i;

        if (n > 0)
        {
                i = n % 10;
                n /= 10;

                calc_val(n);
                putchar('0' + i);
        } 
	else if (n < 0)
	{
		n *= -1;
		calc_val(n);
	}

}


int main(void)
{
	calc_val(-311);

	return (0);
}
