#ifndef __myutils_h
#define __myutils_h

#include<stdarg.h>

int factorial(int n);
int isprime(int n);
int ispalindrome(int n);
int sum(int arg_count,...)
{
    int i;
    int first, a;
    int sum=0;	

    va_list ap;
    va_start(ap, arg_count);
  

    
    for (i = 1; i <= arg_count; i++) 
        sum+=va_arg(ap,int);

    va_end(ap);
    return sum;
}



#endif



