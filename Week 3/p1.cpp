/*There is an ultramarathon course totaling
100km. Water stations are set up every
5km along the course, including the start and goal, for a total of
21.

Takahashi is at the
Nkm point of this course. Find the position of the nearest water station to him.

Under the constraints of this problem, it can be proven that the nearest water station is uniquely determined.

Constraints
0≤N≤100
N is an integer.*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int v1 = n % 5; //* backward water station
    int v2 = 5 - (n % 5); //* forward water station

    if (v1 > v2)
    {
        cout << n + v2; //* forward water station is near
    }
    else
    {
        cout << n - v1; //* backward water station is near
    }

    return 0;
}