/*Given a number X. Determine if the number is prime or not

Note:

A prime number is a number that is greater than 1 and has only two factors which are 1 and itself.

In other words : prime number divisible only by 1 and itself.

Be careful that 1 is not prime .*/

#include <iostream>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;

    if(n<=1)
    {
        cout<<"NO";
    }
    
    else if(n==2)
    {
        cout<<"YES";
    }

    else if(n>2)
    {
        for(int i=2; i<=n/2; i++)
        {
            if(n%i==0)
            {
                count++;
            }
        }

        if(count>0)
        {
            cout<<"NO";
        }

        else if (count==0)
        {
            cout<<"YES";
        }
    }

    return 0;
}