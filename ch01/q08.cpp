#include <iostream>

void set_cubic_array(unsigned int cubic_array[]) {
    for(unsigned int i = 1; i < 10; i++) {
        cubic_array[i] = i * i * i;
    }
}

void print_narcissistic_number(unsigned int n) {
    std::cout << n << '\n';
}

void compute_narcissistic_number(unsigned int start, unsigned int end) {
    unsigned int cubic_array[10];

    set_cubic_array(cubic_array);

    for(unsigned int i = start; i < end; i++) {
        unsigned int n = i;
        unsigned int sum = 0;

        while(n > 0) {
            unsigned int digit = n % 10;
            sum += cubic_array[digit];

            n /= 10;
        }

        if(sum == i)
            print_narcissistic_number(i);
    }
}

int main() {
    unsigned int start = 100;
    unsigned int end = 1000;
    compute_narcissistic_number(start, end);
}
