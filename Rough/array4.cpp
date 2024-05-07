#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[100],smallNumber=INT_MAX,bigNumber=INT_MIN;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        if(smallNumber>a[i])
        {
            smallNumber=a[i];
        }
    }

    for(int i=0; i<n; i++)
    {
        if(bigNumber<a[i])
        {
            bigNumber=a[i];
        }
    }

    cout<<"Smallest Number: "<<smallNumber<<endl;
    cout<<"Greatest Number: "<<bigNumber<<endl;

    return 0;
}