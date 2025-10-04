#include <iostream>
#include <vector>

unsigned long long find_largest_prime(unsigned long long n) {
    if (n <= 2) return 0;

    std::vector<bool> is_prime(n, true);
    is_prime[0] = is_prime[1] = false;

    for (unsigned long long i = 2; i * i < n; ++i) {
        if (is_prime[i]) {
            for (unsigned long long j = i * i; j < n; j += i) {
                is_prime[j] = false;
            }
        }
    }

    for (unsigned long long i = n - 1; i >= 2; --i) {
        if (is_prime[i]) return i;
    }
    return 0;
}

int main() {
    unsigned long long n;
    std::cin >> n;
    unsigned long long result = find_largest_prime(n);
    if(result > 0) {
        std::cout << result << '\n';
    } else {
        std::cout << "Can't find prime\n";
    }
    return 0;
}
