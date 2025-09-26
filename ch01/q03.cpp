#include <iostream>
#include <vector>
#include <numeric>

using ull = unsigned long long;

ull compute_lcm_multiple(const std::vector<ull>& numbers) {
    ull result = numbers[0];
    for (size_t i = 1; i < numbers.size(); ++i) {
        result = std::lcm(result, numbers[i]);
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<ull> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }
    std::cout << compute_lcm_multiple(numbers) << "\n";
    return 0;
}
