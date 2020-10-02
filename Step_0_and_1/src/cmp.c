#include"mystring.h"

int cmp(char *str1, char *str2)
{
int i=0;
int temp=0;
for(i=0;*str1!='\0';i++)
{
if(*str1!=*str2)
{
temp=1;
break;
}
else{
++(*str1);
++(*str2);
}

}
if(temp!=1)
{
return 1;
}
else
{return 0;
}
}
