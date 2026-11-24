#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string  decToBinary(int n)
{
    bool isNegative = n < 0;
    n = abs(n);
    string binary = "";
    while (n > 0)
    {
        int reminder = n % 2;
        binary += to_string(reminder);

        n = n / 2;
    }

    reverse(binary.begin(), binary.end());

    return binary;
}

int main()
{
    cout << decToBinary(-358);
    return 0;
}