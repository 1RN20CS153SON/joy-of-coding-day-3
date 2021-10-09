/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
void main()
{
       int r,n,s,sum=0,i;
    printf("enter  a number\n");
    scanf("%d",&n);
    i=n;
    while(n!=0)
    {
        r=n%10;
        s=r+1;
        sum=sum+s;
        n=n/10;
    }
    if(i!=0)
    printf("%d ",sum);
    else
    printf("1");


}
