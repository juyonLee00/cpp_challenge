#include <iostream>
#include <numeric>

using ull = unsigned long long;

ull get_gcd(ull lhs, ull rhs) {
    return std::gcd(lhs, rhs);
}

int main() {
    ull lhs, rhs;
    std::cin >> lhs >> rhs;

    std::cout << get_gcd(lhs, rhs);
    return 0;
}
