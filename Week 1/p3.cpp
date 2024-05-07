//Given two numbers N and M. Print the summation of their last digits.
// Input - Only one line containing two numbers N, M (0 ≤ N, M ≤ 10^18)

#include <iostream>
using namespace std;

int main()
{
    long long int a,b; // long long int because of (0 ≤ N, M ≤ 10^18)
    cin>>a>>b;

    int c = a%10;
    int d = b%10;

    cout<<c+d;
    return 0;
}