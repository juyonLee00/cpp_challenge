#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

unsigned long long lcm_multiple(const vector<unsigned long long>& numbers) {
    unsigned long long result = numbers[0];
    for (size_t i = 1; i < numbers.size(); ++i) {
        result = lcm(result, numbers[i]);
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<unsigned long long> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    cout << lcm_multiple(numbers) << "\n";
    return 0;
}
