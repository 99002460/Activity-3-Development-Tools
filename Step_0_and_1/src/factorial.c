#include"myutils.h"

int factorial(int n)
{
int i,fact=1;
if (n < 0)
{
        printf("Error! Factorial of a negative number doesn't exist.");
 }
 else {

        for (i = 1; i <= n; ++i)
 {
            fact *= i;
 
}}

return fact;

}
