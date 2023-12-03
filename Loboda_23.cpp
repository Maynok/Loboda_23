#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int n = 5;
    int array[n] = { 3, 8, 1, 4, 6 };
    int minDiff = INT_MAX;
    int minDiffIndex = -1;

    for (int i = 0; i < n - 1; ++i) {
        int currentDiff = std::abs(array[i + 1] - array[i]);
        if (currentDiff < minDiff) {
            minDiff = currentDiff;
            minDiffIndex = i;
        }
    }

    if (minDiffIndex != -1) {
        std::cout << "Пара сусідніх елементів з найменшою різницею: "
            << array[minDiffIndex] << " і " << array[minDiffIndex + 1] << std::endl;
    }
    else {
        std::cout << "Масив порожній або має лише один елемент." << std::endl;
    }

    return 0;
}
