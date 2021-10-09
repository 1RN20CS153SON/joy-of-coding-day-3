/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int r,n,s,rev=0,r2,s2,num=0,i;
    printf("enter the secret code\n");
    scanf("%d",&n);
    i=n;
    while(n!=0)
    {
        r=n%10;
        if(r!=9)
        {
          s=r+1;
          rev=rev*10+s;  
        }
        else
        {
            rev=rev*10;
            
        }
        
        n=n/10;
    }
    while(rev!=0)
    {
        r2=rev%10;
        num=num*10+r2;
        rev=rev/10;
    }
    printf("pincode of secret code %d is %d",i,num);
}


