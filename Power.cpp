#include <iostream>
using namespace std;
double calculate(double x, long n)
{
    if (n == 0)
        return 1;
    return calculate(x * x, n / 2) * (n % 2 ? x : 1);
}
double myPow(double x, int n)
{
    if (x == 1.0)
        return x;
    if (n == 0)
        return 1;
    if (n > 0)
        return calculate(x, n);
    else
        return 1 / calculate(x, -long(n));
}

int main()
{
    cout << myPow(2, 5) << endl;
}