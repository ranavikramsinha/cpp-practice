/*Given N numbers. Count how many of these values are even, odd, positive and negative.

Input
First line contains one number N (1 ≤ N ≤ 103) number of values.

Second line contains N numbers (-105 ≤ Xi ≤ 105).

Output
Print four lines with the following format:

First Line: "Even: X", where X is the number of even numbers in the given input.

Second Line: "Odd: X", where X is the number of odd numbers in the given input.

Third Line: "Positive: X", where X is the number of positive numbers in the given input.

Fourth Line: "Negative: X", where X is the number of negative numbers in the given input*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int even=0, odd=0, positive=0, negative=0;

    for(int i=1; i<=n; i++)
    {
        int num;
        cin>>num;

        if(num%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        if(num>0)
        {
            positive++;
        }
        else if(num<0)
        {
            negative++;
        }
    }

    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<positive<<endl;
    cout<<"Negative: "<<negative<<endl;

    return 0;
}