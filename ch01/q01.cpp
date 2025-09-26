#include <iostream>

using ull = unsigned long long;

ull sum_multiples_3_or_5(ull limit) {
    auto sum_of_multiples = [](ull k, ull n) -> ull {
        ull m = n / k;
        return k * m * (m + 1) / 2;
    };

    return sum_of_multiples(3, limit) + sum_of_multiples(5, limit) - sum_of_multiples(15, limit);
}

int main() {
    ull input;
    constexpr ull max_input_num = 8'790'000'000ULL;

    std::cin >> input;
    if (input > max_input_num) {
        std::cout << "Error";
        return 1;
    }

    std::cout << sum_multiples_3_or_5(input - 1);
    return 0;
}
