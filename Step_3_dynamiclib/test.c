#include"mystring.h"
#include"myutils.h"
#include"bitmask.h"

#include<stdio.h>

int main()
{
//mystringheader
int len=0;
int pali,fact,prime,prime_check=0;
int compare=0;
char copy[100];
int x=0;

char c[]="Faculty - Bharat";
char d[]="Linux assignment by Pavan";
printf("--------------mystringfunctions-----------------\n\n");
//strlength
len=length(c);
printf("%s----------- The Length of the beside string  = %d\n\n",c,len);
//string compare
compare=cmp(c,d);
if(compare==1)
{
printf("The given strings are same\n\n");
}
else
{
printf("The given strings are not same\n\n");
}
//string cancat

printf("The cancatenated string is %s\n\n",cancat(c,d));

//cpy
printf("Before copy %s\n\n",copy);
cpy(copy,c);
printf("After copy %s\n\n",copy);
printf("--------------myutilsfunctions-----------------\n\n");
//palindrome

pali=ispalindrome(101);
if(pali==1){
printf("101 is the original number & It is palindrome\n\n"); }
else
{
printf("It is not a palindrome \n\n");
}
//vsum
x=sum(5, 12, 67, 6, 7, 100);
printf("\nSum of 12,67,6,7,100 is %d\n\n ",x);

//factorial

fact=5;
printf("The factorial of %d is %d\n\n",fact,factorial(fact));

//prime
prime=5;
printf("The taken number for prime is 5\n\n");

if(isprime(prime)==-1)
{
printf("Neither prime nor composite\n\n");
}
else if(isprime(prime)==1)
{
printf("The number is prime\n\n");
}
else
{
printf("The number is not prime\n\n");
}
printf("--------------bitmask functions-----------------\n\n");
int op=set1(4,4);
int r=reset(2);
int p=flip(4);

printf("Set(1,4),Reset(2),Flip(4)\n");	   
printf("   %d       %d       %d",op,r,p);
printf("\n\n");
printf("isKthBitSet(3,5)\n");

isKthBitSet(3,5);

 
	
return 0;
}
