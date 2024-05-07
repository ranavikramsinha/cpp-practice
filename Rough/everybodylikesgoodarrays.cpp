/*An array a is good if for all pairs of adjacent elements, ai and ai+1 (1≤i<n) are of different parity. Note that an array of size 1 is trivially good.

You are given an array of size n.

In one operation you can select any pair of adjacent elements in which both elements are of the same parity, delete them, and insert their product in the same position.

Find the minimum number of operations to form a good array.

Input
Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤500). The description of the test cases follows.

The first line of each test case contains an integer n (1≤n≤100).

The second line of each test case contains n integers a1,a2,…,an (1≤ai≤109).

Output
For each test case print an integer, the minimum number of operations required to form a good array.*/

#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    int a[1000],count=0;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    
    for(int i=0; i<n-1; i++)
    {
        if(a[i]%2 == a[i+1]%2)
        {
            count++;
        }
    }

    cout<<count<<endl;
}


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}