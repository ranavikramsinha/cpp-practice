/*Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

Input
Only one line containing 3 numbers A, B and C ( - 105 ≤ A, B, C ≤ 105)

Output
Print the minimum number followed by a single space then print the maximum number.*/

#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int min = a;

    if(min>b)
    {
        min=b;
    }

    if(min>c)
    {
        min=c;
    }

    int max = a;

    if(max<b)
    {
        max=b;
    }

    if(max<c)
    {
        max=c;
    }

    cout<<min<<" "<<max;

    return 0;
}