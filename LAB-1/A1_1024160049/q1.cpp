#include <iostream>
using namespace std;
int arr[100],n;

void create_array() {
    cout << "Enter the number of elements: "<< endl;
    cin >> n ;
    cout << "Enter " << n << " elements" << endl;
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    cout << endl << endl;
}
void display_array() {
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }    
    cout << endl << endl;
}
void insert_array() {
    int val,pos;
    cout << "Enter the Value and position where element is to be inserted: " << endl;
    cin >> val >> pos;
    for(int i = n-1;i>pos;i--) {
        arr[i]=arr[i-1];
    }
    arr[pos]=val;
    cout << endl << endl;
}
void delete_array() {
    int pos;
    cout << "Enter the position  where element is to be deleted: " << endl;
    cin >> pos ;
    for(int i=pos;i<n;i++) {
        arr[i]=arr[i+1];
    }
    cout << endl << endl;
}
void linear_search() {
    int target;
    cout << "Enter the element you want to search" << endl;
    cin >> target ;
    for(int i=0;i<n;i++) {
        if(arr[i]==target) {
            cout << "Element found at " << i <<endl;
        }
    }
    cout << "Element not found ";
    cout << endl << endl;
}

int main() {
    int y;
    while (true) {
         cout << "1. CREATE\n2. DISPLAY\n3. INSERT\n4. DELETE\n5. LINEAR SEARCH\n6. EXIT\n";
          cout << "Give your input: ";
        cin >> y;
        switch (y) {
            case 1: create_array(); 
            break;
            case 2: display_array(); 
            break;
            case 3: insert_array(); 
            break;
            case 4: delete_array(); 
            break;
            case 5: linear_search(); 
            break;
            case 6: return 0;
        }
    }
}