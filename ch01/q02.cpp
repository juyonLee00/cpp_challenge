#include<iostream>
#include<numeric>

using namespace std;

unsigned long long GetGcd(unsigned long long n1, unsigned long long n2)
{
    return gcd(n1, n2);
}

int main()
{
    unsigned long long n1, n2;
    cin >> n1 >> n2;

    cout << GetGcd(n1, n2);
    return 0;
}
