#include<stdio.h>
int main()
{
char ch;
scanf("%c",&ch);
if(ch>=65&&ch<96)
printf("it is upper case");
else if(ch>97&&ch<122)	
printf("lower case");
else if(ch>48&&ch<=57)
printf("digit");
else
printf("sp char");
return 0;
}
