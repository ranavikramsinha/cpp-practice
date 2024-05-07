/*Given 'n', print the symbol 'Z' spanning n rows using '*' symbol. Value of n>2 and n<=20.

Example:
1) Input : n=3
Output:
***
 *
***

2) Input n=4
Output:
****
  *
 *
*****/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    // first row
    for(int i=1; i<=n; i++)
    {
        cout<<"*";
    }
    cout<<endl;

    // middle part
    for(int i=1; i<=n-2; i++)
    {
        for(int j=1; j<=n-i-1; j++)
        {
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }
    
    // last row
    for(int i=1; i<=n; i++)
    {
        cout<<"*";
    }

    return 0;
}