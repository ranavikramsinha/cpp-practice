/*Given an integer n(1<=n<=10), print n rows of the given pattern in minimum length.

1

2 3

6 5 4

7 8 9 10*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int count=1;

    for(int i=0; i<n; i++)
    {
        int a[1000];

        for(int j=0; j<i+1; j++)
        {
            a[j]=count++;
        }

        if (i%2==0){
            reverse(a,a+(i+1));
        }

        for (int j=0; j<i+1; j++)
        {
            cout<<a[j]<<" ";
        }

        cout<<endl;
    }

    return 0;
}