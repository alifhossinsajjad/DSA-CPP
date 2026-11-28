#include <iostream>

using namespace std;

void changingArr(int arr[], int size)
{
    cout << "in functoin\n";
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
    }
}

int main()
{
    int arr[] = {1, 23, 45, 5};
    changingArr(arr, 4);

    cout << "in main\n";
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}