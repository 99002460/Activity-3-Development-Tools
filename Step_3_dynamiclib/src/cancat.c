#include"mystring.h"

char* cancat(char s[],char p[])
{

int length = 0,i,j;
  while (s[length] != '\0') {
    ++length;
  }

  // concatenate p to s
  for (j = 0; p[j] != '\0'; ++j, ++length) {
    s[length] = p[j];
  }

  // terminating the s1 string
  s[length] = '\0';
  
  return s;
}




