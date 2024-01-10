#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
using namespace std;

int main() {
    
    vector<int> numbers(100000);
    for (int i = 0; i < 100000; ++i) {
        numbers[i] = 100000 - i;
    }

    //  Bubble Sort
    auto startTimeBubbleSort = chrono::high_resolution_clock::now();
    sort(numbers.begin(), numbers.end());
    auto endTimeBubbleSort = chrono::high_resolution_clock::now();

    auto durationBubbleSort = chrono::duration_cast<chrono::microseconds>(endTimeBubbleSort - startTimeBubbleSort);
    cout << "Bubble Sort Execution Time: " << durationBubbleSort.count() << " microseconds"<<endl;

    // Print 10 integers
    cout << "First 10 integers: ";
    for (int i = 0; i < 10; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    cout << "Last 10 integers: ";
    for (int i = 99990; i < 100000; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}


