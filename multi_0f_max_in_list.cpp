#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <cstdint>

using std::vector;
using std::cin;
using std::cout;

int64_t MaxPairwiseProduct(const vector<int64_t>& numbers, int n) {
     int64_t max1 = numbers[0], max2 = 0;
    if (n == 2){
        return (numbers[0] * numbers[1]);
    }    
        
    for (int i = 0; i < n; ++i) {
        if (numbers[i] > max1){
            max2 = max1;
            max1 = numbers[i];
        }
        else if (numbers[i] > max2){
            max2 = numbers[i];
        }
    }
    return (max1 * max2);
}

int main() {
    int n;
    std::cin >> n;
    vector<int64_t> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::cout << MaxPairwiseProduct(numbers, n) << "\n";
    return 0;
}
