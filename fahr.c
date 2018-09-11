#include <stdio.h>
/* print Fahrenheit-Celsius table */
int main(void)
{
    int fahr;

    for (fahr = -100; fahr <= 300; fahr = fahr +20)
    {
            printf ("f - %3d c - %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
}
//for ap exam you need to be able to walk through code
//have to make before you can run
