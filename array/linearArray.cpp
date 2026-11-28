#include <iostream>
using namespace std;

int linearArray(int arr[], int sz, int target)
{
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 4, 1, 5, 7, 8, 3};
    int sz = 6;
    int target = 1;

    cout << linearArray(arr, sz, target) << endl;
    return 0;
}