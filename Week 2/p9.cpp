/*Given a number N. The task is to print a series of asterisk(*) from 1 till N terms with increasing order and difference being 1.

Example 1:

Input:
N = 3
Output:
* ** ***
Explanation:
First, print 1 asterisk then space after
that print 2 asterisk and space after that 
print 3 asterisk now stop as N is 3.*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i+1; j++)
        {
            cout<<"*";
        }
        cout<<" ";
    }

    return 0;
}