#include <iostream>

void get_prime_factor(unsigned int n) {
    if(n <= 1)
        return;

    while(n % 2 == 0) {
        std::cout << 2 << '\n';
        n /= 2;
    }

    for(unsigned int i = 3; i * i <= n; i = i + 2) {
        if(n % i == 0) {
            std::cout << i << '\n';
            n /= i;
        }
    }

    if(n > 1)
        std::cout << n << '\n';
}

int main() {
    unsigned int n;
    std::cin >> n;

    get_prime_factor(n);
}
