#include <iostream>
using namespace std;
const int MAX_SIZE = 100;
class A1_Q1
{
private:
    int arr[MAX_SIZE];
    int size;

public:
    A1_Q1()
    {
        size = 0;
    }
    void create()
    {
        cout << "Enter the size of array (max " << MAX_SIZE << "): ";
        cin >> size;
        if (size > MAX_SIZE || size <= 0)
        {
            cout << "Invalid size! Size set to 0.\n";
            size = 0;
            return;
        }
        cout << "Enter " << size << " elements:\n";
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        cout << "Array created successfully!\n";
    }
    void display()
    {
        if (size == 0)
        {
            cout << "Array is empty!\n";
            return;
        }
        cout << "Array elements: ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void insert()
    {
        int pos, element;
        cout << "Enter index to insert (0 to " << size << "): ";
        cin >> pos;
        if (pos < 0 || pos > size || size >= MAX_SIZE)
        {
            cout << "Invalid index or array is full!\n";
            return;
        }
        cout << "Enter element to insert: ";
        cin >> element;
        for (int i = size; i > pos; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[pos] = element;
        size++;
        cout << "Element inserted successfully!\n";
    }
    void deleteElement()
    {
        int pos;
        cout << "Enter index to delete (0 to " << size - 1 << "): ";
        cin >> pos;
        if (pos < 0 || pos >= size)
        {
            cout << "Invalid index!\n";
            return;
        }
        for (int i = pos; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
        cout << "Element deleted successfully!\n";
    }
    void linearSearch()
    {
        int element;
        cout << "Enter element to search: ";
        cin >> element;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == element)
            {
                cout << "Element found at index " << i << endl;
                return;
            }
        }
        cout << "Element not found!\n";
    }
};
int main()
{
    A1_Q1 arr;
    int choice;
    do
    {
        cout << "\n------MENU------\n";
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            arr.create();
            break;
        case 2:
            arr.display();
            break;
        case 3:
            arr.insert();
            break;
        case 4:
            arr.deleteElement();
            break;
        case 5:
            arr.linearSearch();
            break;
        case 6:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 6);
    return 0;
}