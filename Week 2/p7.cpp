/*Given a number N
 and two arrays A
, B
 of N
 numbers. Determine if B
 is a permutation of A
 or not.

Note: A permutation is an arrangement of all or part of a set of objects.

For example: The array [2, 1, 3], [3, 2, 1] and [2, 3, 1] are permutation of the array [1, 2, 3].

Input
First line contains a number N
 (1≤N≤103)
 Number of elements.

Second line contains N
 numbers (1≤Ai≤107)
 elements of array A
.

Third line contains N
 numbers (1≤Bi≤107)
 elements of array B
.

Output
Print "yes" if array B
 is a permutation of A
 otherwise, print "no" without quotations.*/

#include <iostream>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;

    long long int a[1000],b[1000];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        if(a[i]>a[j])
        {
            swap(a[i],a[j]);
            // int arr1=a[i];
            // a[i]=a[j];
            // a[j]=arr1;
        }

        for(int j=i+1; j<n; j++)
        if(b[i]>b[j])
        {
            swap(b[i],b[j]);
            // int arr2=b[i];
            // b[i]=b[j];
            // b[j]=arr2;
        }
    }

    for(int i=0; i<n; i++)
    {
        if(a[i]!=b[i])
        {
            cout<<"no";
            return 0;
        }
        // count++;
    }

    // if(count>0)
    // {
    //     cout<<"no";
    // }
    // else
    // {
    //     cout<<"yes";
    // }

    cout<<"yes";

    return 0;
}