#include"myutils.h"

int ispalindrome(int n)
{
int originalN = n;
int remainder=0,reversedN=0;

    // reversed integer is stored in reversedN
    while (n != 0) {
        remainder = n % 10;
        reversedN = reversedN * 10 + remainder;
        n /= 10;
    }

    // palindrome if orignalN and reversedN are equal
    if (originalN == reversedN)
        return 1;
    else
       return 0;

}




