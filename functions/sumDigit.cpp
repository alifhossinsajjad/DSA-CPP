#include <iostream>

using namespace std;

// Calculate sum of digits of a number

int sumOfDigits(int num)
{
    int digitSum = 0;

    while (num > 0)
    {
        int lastDigit = num % 10;
        num /= 10;

        digitSum += lastDigit;
    }
    return digitSum;
}

int main()
{
    cout << "Sum =" << sumOfDigits(34523) << endl;
}