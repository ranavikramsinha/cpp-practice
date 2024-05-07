#include <iostream>

// It must be include while using reverse function
#include <algorithm>

using namespace std;

int main() 
{
    int arr[6] = {0, 1, 2, 3, 4, 5};


    // Print the original array
    for (int i = 0; i < 6; ++i) {
        cout << arr[i] << " ";
    }

    cout<<endl;

    // Reverse the array using the reverse() function
    reverse(arr, arr + 6);

    // Print the reversed array
    for (int i = 0; i < 6; i++) 
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}