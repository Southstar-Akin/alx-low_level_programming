#include <stdio.h>
/**
 * main - this na code
 * no even whine me
 * Return: returns 0 idf successful
 */

int main (void)
{
const char alpha[] = "a,b,c,d,e,f,g,h,i,j,k,l,m,n";
const char alphb[] = "o,p,q,r,s,t,u,v,w,x,y,z";
int a;
for (a = 0;a < 26; a++)
{
if (a < 14)
{
putchar("%c", alpha[a]);
}
else
{
putchar("%c", alphb[a]);
}
}
return (0);
}
