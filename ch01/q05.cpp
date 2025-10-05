#include <iostream>
#include <vector>

void set_prime(unsigned int n, std::vector<bool>& is_prime) {
    is_prime[0] = is_prime[1] = false;

    for(unsigned int i = 2; i * i < n; ++i) {
        if(is_prime[i]) {
            for(unsigned int j = i * i; j < n; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

void get_sexy_primes(unsigned int n, std::vector<bool>& is_prime) {
    for(unsigned int i = 2; i + 6 < n; ++i) {
        if(is_prime[i] && is_prime[i + 6]) {
            std::cout << i << " " << i + 6 << '\n';
        }
    }
}

int main() {
    unsigned int n;
    std::cin >> n;

    if(n > 20000000) {
        std::cout << "The input value is too large. Please enter a small number";
        return 1;
    }
    std::vector<bool> is_prime(n, true);

    set_prime(n, is_prime);

    get_sexy_primes(n, is_prime);

    return 0;
}
