/*You are given three integers n
, a
, and b
. Determine if there exist two permutations p
 and q
 of length n
, for which the following conditions hold:

The length of the longest common prefix of p
 and q
 is a
.
The length of the longest common suffix of p
 and q
 is b
.
A permutation of length n
 is an array containing each integer from 1
 to n
 exactly once. For example, [2,3,1,5,4]
 is a permutation, but [1,2,2]
 is not a permutation (2
 appears twice in the array), and [1,3,4]
 is also not a permutation (n=3
 but there is 4
 in the array).

Input
Each test contains multiple test cases. The first line contains a single integer t
 (1≤t≤104
) — the number of test cases. The description of test cases follows.

The only line of each test case contains three integers n
, a
, and b
 (1≤a,b≤n≤100
).

Output
For each test case, if such a pair of permutations exists, output "Yes"; otherwise, output "No". You can output each letter in any case (upper or lower).*/

#include <iostream>
using namespace std;


void solve()
{
    int n,a,b;
    cin>>n>>a>>b;

    if(a+b<=n-2 || (n==a && n==b))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
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