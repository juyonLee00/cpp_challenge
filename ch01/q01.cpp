#include<iostream>
#define ULL unsigned long long

using namespace std;

ULL GetSum(ULL limit)
{
    auto sum_of_sequence = [](ULL k, ULL n) -> ULL {
        ULL m = n / k;
        return k * m * (m + 1) / 2;
    };
    return sum_of_sequence(3, limit) + sum_of_sequence(5, limit) - sum_of_sequence(15, limit);
}

int main()
{
    ULL input;
    const ULL MAX_INPUT_NUM = 8790000000ULL;

    cin >> input;
    if(input > MAX_INPUT_NUM)
    {
        cout << "Error";
        return 1;
    }

    cout << GetSum(input-1);
    return 0;
}
