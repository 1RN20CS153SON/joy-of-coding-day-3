/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#include <stdlib.h>
int main()
{
    int rem,rev=0,rnum;
    long int n,an;
    printf("Enter any Number\n");
    scanf("%ld",&n);
    an=n;
    while(n>0)
    {
        rem=n%10;
        if(rem!=0)
        rev=rev*10+rem;
        n=n/10;
    }
    while(rev>0)
    {
        rem=rev%10;
        rnum=rnum*10+rem;
        rev=rev/10;
    }
    printf("Original Number = %ld\n",an);
    printf("Number after removing all the Zeros = %d",rnum);

    return 0;
}

