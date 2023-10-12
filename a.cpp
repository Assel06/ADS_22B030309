#include <iostream>
#include <vector>
#include <cstdlib> // for abs function

int findNearest(const std::vector<int>& numbers, int k) {
    int nearest = numbers[0]; // Initialize nearest to the first element
    int offset = 0; // Initialize offset to 0

    // Iterate through the list to find the nearest number
    for (int i = 0; i < numbers.size(); ++i) {
        int current = numbers[i];
        int currentDistance = std::abs(current - k);
        int nearestDistance = std::abs(nearest - k);

        // Update nearest and offset if a closer number is found
        if (currentDistance < nearestDistance) {
            nearest = current;
            offset = i;
        }
    }

    return offset;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> numbers(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    int k;
    std::cin >> k;

    int offset = findNearest(numbers, k);

    std::cout << offset << std::endl;

    return 0;
}
