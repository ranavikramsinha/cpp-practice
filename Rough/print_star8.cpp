#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n-1; i++) // first row
    {
        cout<<" ";
    }

    cout<<"*"<<endl;

    for(int i=1; i<=n-2; i++) // middle part
    {
        for(int j=1; j<=(n-i)-1; j++)
        {
            cout<<" ";
        }
        cout<<"*";
        
        
        for(int j=1; j<=(2*i)-1; j++)
        {
            cout<<" ";
        }

        cout<<"*";
        cout<<endl;
    }

    for(int i=1; i<=n; i++) // last part
    {
        cout<<"* ";
    }

    return 0;
}