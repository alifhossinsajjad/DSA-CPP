#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int s = a + b;
    return s;
}
// min of tow number

int minOfTwo(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{

    // cout << sum(23, 34);
    cout <<"Min = " << minOfTwo(10,5)<<endl;
    return 0;
}