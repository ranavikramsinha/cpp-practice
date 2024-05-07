#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[5]; // array size should be give in an integer constant, not a variable (a[n]) because of memory allocation

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i: a)
    {
        cout<<i<<" ";
    }

    return 0;
}