#include"mystring.h"

char* cpy(char s2[],char s1[])
{
int i,j;
for (i = 0; s1[i] != '\0'; ++i) {
        s2[i] = s1[i];
    }

    s2[i] = '\0';
return s2;
}

