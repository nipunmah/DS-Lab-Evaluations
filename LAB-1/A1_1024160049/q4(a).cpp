#include <iostream>
using namespace std;

int main() {
     int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
int start = 0; 
int end = n -1;
int temp;
    while (start < end) {
         temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    cout << "After Reverse\n ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}