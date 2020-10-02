#include"myutils.h"

int isprime(int n)
{
int i=0,flag=0;

    for (i = 2; i <= n / 2; ++i) {

        // condition for non-prime
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

if(n==1)
{

return -1;//1 is neither prime nor composite.
}
else
{
if(flag==0)
{
return 1;//prime
}
else{return 0;//composite
}
}
}
