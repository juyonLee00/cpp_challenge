#include <iostream>
#include <vector>

void set_divorsor_sum(unsigned int limit, std::vector<unsigned int>& divisor_sum) {
    for(unsigned int i = 2; i <= limit; ++i) {
        for(unsigned int j = i * 2; j <= limit; j += i) {
            divisor_sum[j] += i;
        }
    }
}

void get_amicable_numbers(unsigned int limit, std::vector<unsigned int>& divisor_sum) {
    set_divorsor_sum(limit, divisor_sum);

    for(unsigned int i = 2; i < limit; ++i) {
        unsigned int j = divisor_sum[i];

        if(j > i && j <= limit && divisor_sum[j] == i) {
            std::cout << i << " " << j << '\n';
        }
    }

}

int main() {
    const unsigned int limit = 1000000;
    std::vector<unsigned int> divisor_sum(limit + 1, 1);
    divisor_sum[0] = 0;

    get_amicable_numbers(limit, divisor_sum);

    return 0;
}
