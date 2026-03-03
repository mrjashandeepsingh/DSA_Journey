#include <iostream>
using namespace std;

int main()
{
    // 1D array

    int arr1[5];
    for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
    {
        cout << arr1[i] << " ";
    }

    // 3D array

    int arr[3][5];
    arr[1][2] = 3;
    cout << "\n"
         << arr[3][2];

    return 0;
}