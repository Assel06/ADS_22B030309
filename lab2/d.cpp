#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    std::map<int, int> frequency; // Map to store the frequency of each number

    
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        frequency[num]++;
    }

    int maxFrequency = 0;

    // Find the maximum frequency
    for (const auto& pair : frequency) {
        maxFrequency = std::max(maxFrequency, pair.second);
    }

    std::vector<int> modes;

    // Find numbers with the maximum frequency (modes)
    for (const auto& pair : frequency) {
        if (pair.second == maxFrequency) {
            modes.push_back(pair.first);
        }
    }

    // Sort the modes in descending order
    std::sort(modes.rbegin(), modes.rend());

   
    for (int mode : modes) {
        std::cout << mode << " ";
    }

    std::cout << std::endl;

    return 0;
}

