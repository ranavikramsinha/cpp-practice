/*Given a number N. Print the Fibonacci number of N.

Note: In order to create the Fibonacci sequence use the following function:

fib(1) = 0.
fib(2) = 1.
fib(n) = fib(n - 1) + fib(n - 2).
Input
Only one line containing a number N (1 ≤ N ≤ 50).

Output
Print the Fibonacci number of N.*/

#include <iostream>
using namespace std;

int main()
{
    long long int n,a=0,b=1,c=0;
    cin>>n;

    if(n==1)
    {
        cout<<0;
    }

    else if(n==2)
    {
        cout<<1;
    }

    else if(n>2)
    {
        for(int i=3; i<=n; i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        cout<<c;
    }

    return 0;
}