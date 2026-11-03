#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, pos;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Original Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << "\nEnter position to delete: ";
    cin >> pos;

    for (int i = pos - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;

    cout << "Updated Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}