#include <iostream>
using namespace std;
int Linear(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != i + 1)
            return i + 1;
    }
    return size + 1;
}
int Binary(int arr[], int size)
{
    int left = 0, right = size - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] != mid + 1)
        {
            if (mid == 0 || arr[mid - 1] == mid)
                return mid + 1;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return size + 1;
}
int main()
{
    int n;
    cout << "Enter the value of n (range is 1 to n): ";
    cin >> n;
    int size = n - 1;
    int arr[size];
    cout << "Enter " << size << " sorted distinct integers from 1 to " << n << ":\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "\nArray elements: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int missingLinear = Linear(arr, size);
    int missingBinary = Binary(arr, size);
    cout << "Missing number (Linear Search): " << missingLinear << endl;
    cout << "Missing number (Binary Search): " << missingBinary << endl;
    return 0;
}