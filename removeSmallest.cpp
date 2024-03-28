#include <iostream>
#include <vector>
#include <algorithm>

std::string canObtainOneElement(const std::vector<int>& arr) {
    std::vector<int> sortedArr = arr;
    std::sort(sortedArr.begin(), sortedArr.end());
    
    for (int i = 1; i < sortedArr.size(); ++i) {
        if (sortedArr[i] - sortedArr[i - 1] > 1) {
            return "NO";
        }
    }
    
    return "YES";
}

int main() {
    int t;
    std::cin >> t;

    std::vector<std::vector<int>> testCases(t);
    for (int i = 0; i < t; ++i) {
        int n;
        std::cin >> n;
        testCases[i].resize(n);
        for (int j = 0; j < n; ++j) {
            std::cin >> testCases[i][j];
        }
    }

    for (const auto& testCase : testCases) {
        std::cout << canObtainOneElement(testCase) << std::endl;
    }

    return 0;
}
