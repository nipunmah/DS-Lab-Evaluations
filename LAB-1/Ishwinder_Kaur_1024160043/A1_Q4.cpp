#include <iostream>
using namespace std;
void reverseArray()
{
    int n;
    cout << "\nEnter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    for (int i = 0; i < n / 2; ++i)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    cout << "Reversed array:\n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}
void matrixMultiplication()
{
    int r1, c1, r2, c2;
    cout << "\nEnter rows and columns of Matrix A: ";
    cin >> r1 >> c1;
    int A[r1][c1];
    cout << "Enter rows and columns of Matrix B: ";
    cin >> r2 >> c2;
    int B[r2][c2];
    if (c1 != r2)
    {
        cout << "Matrix multiplication not possible.\n";
        return;
    }
    int C[r1][c2];
    cout << "Enter elements of Matrix A:\n";
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c1; ++j)
            cin >> A[i][j];
    cout << "Enter elements of Matrix B:\n";
    for (int i = 0; i < r2; ++i)
        for (int j = 0; j < c2; ++j)
            cin >> B[i][j];
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c2; ++j)
            C[i][j] = 0;
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c2; ++j)
            for (int k = 0; k < c1; ++k)
                C[i][j] += A[i][k] * B[k][j];
    cout << "Result of Matrix Multiplication:\n";
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c2; ++j)
            cout << C[i][j] << " ";
        cout << endl;
    }
}
void transposeMatrix()
{
    int rows, cols;
    cout << "\nEnter rows and columns of the matrix: ";
    cin >> rows >> cols;
    int matrix[rows][cols];
    int transposed[cols][rows];
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            cin >> matrix[i][j];
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            transposed[j][i] = matrix[i][j];
    cout << "Transposed Matrix:\n";
    for (int i = 0; i < cols; ++i)
    {
        for (int j = 0; j < rows; ++j)
            cout << transposed[i][j] << " ";
        cout << endl;
    }
}
int main()
{
    int choice;
    while (true)
    {
        cout << "\n--- MENU ---\n"
             << "1. Reverse Array\n"
             << "2. Matrix Multiplication\n"
             << "3. Transpose Matrix\n"
             << "4. Exit\n"
             << "Enter your choice: ";
        cin >> choice;
        if (choice == 4)
            break;
        if (choice < 1 || choice > 4)
        {
            cout << "Invalid choice. Try again.\n";
            continue;
        }
        if (choice == 1)
            reverseArray();
        else if (choice == 2)
            matrixMultiplication();
        else if (choice == 3)
            transposeMatrix();
        else
            cout << "Invalid choice. Try again.\n";
    }
    cout << "Program terminated.\n";
    return 0;
}