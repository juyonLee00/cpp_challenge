#include <iostream>

void set_divorsor_sum(unsigned int n, std::vector<unsigned int>& divorsor_sum) {
    for(unsigned int i = 2; i <= n / 2; ++i) {
        for(unsigned int j = i * 2; j <= n; j += i) {
            divorsor_sum[j] += i;
        }
    }
    
    for(unsigned int i = 1; i <= n; ++i) {
        if(divorsor_sum[i] > i)
            std::cout << i << " " << divorsor_sum[i] - i << '\n';
    }
}

int main() {
    unsigned int n;
    std::cin >> n;

    if(n >= 2000000000) {
        std::cout << "The input value is too large. Please enter a small number" << '\n';
        return 1;
    }

    std::vector<unsigned int> divorsor_sum(n + 1, 1);
    set_divorsor_sum(n, divorsor_sum);
    
    return 0;

}
