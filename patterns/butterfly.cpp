#include <iostream>

using namespace std;

int main()
{
    int n = 4;

    // Upper Half
    for (int i = 0; i < n; i++)
    {
        // Left stars
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }

        // Middle spaces
        for (int j = 0; j < 2 * (n - i - 1); j++)
        {
            cout << " ";
        }

        // Right stars
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    // Lower Half
    for (int i = 0; i < n; i++)
    {
        // Left stars
        for (int j = 0; j <n -i; j++)
        {
            cout << "*";
        }

        // Middle spaces
        for (int j = 0; j < 2 * i; j++)
        {
            cout << " ";
        }

        // Right stars
        for (int j = 0; j <n-i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}