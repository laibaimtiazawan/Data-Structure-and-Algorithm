#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, pos, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Original Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << "\nEnter position to insert: ";
    cin >> pos;

    cout << "Enter new element: ";
    cin >> value;

    for (int i = n; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = value;
    n++;

    cout << "Updated Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}