// Predict the Output of the following program
// Output : Error, because printf is not defined in C++ .. it should have been cout 


#include <iostream>
using namespace std;
int main()
{
    int i;
    int arr[5] = {1};
    for (i = 0; i < 5; i++) 
        printf("%d",arr[i]);
    return 0;
}