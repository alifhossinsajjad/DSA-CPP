#include <iostream>

using namespace std;

// WAF to check if a number is prime or not

bool primeN(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    // WAF to print all prime numbers form 2 to n
    int n = 20;

    for (int i = 2; i < n; i++)
    {
        if (primeN(i))
        {
            cout << i << endl;
        }
   
    }

    // if (primeN(n))
    // {
    //     cout << "This is prime number ";
    // }
    // else
    // {
    //     cout << "This is not prime number";
    // }
    return 0;
}