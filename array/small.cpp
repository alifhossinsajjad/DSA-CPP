#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int nums[] = {3, 5, 6, 34, 64, 56};
    int size = 6;

    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallestIndex = 0;
    int largestIndex = 0;

    for (int i = 0; i < size; i++)
    {
        if (nums[i] < smallest)
        {
            smallest = nums[i];
            smallestIndex = i;
        }
        if (nums[i] > largest)
        {
             largest = nums[i];
            largestIndex = i;
        }

    }

    cout << "Smallest = " << smallest << endl;
    cout << "Smallest = " << smallestIndex << endl;
    cout << "Largest = " << largest << endl;
    cout << "Largest = " << largestIndex << endl;
}