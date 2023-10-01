#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> prevYear, currentYear;

    // Read and count T-shirt sizes for the previous year
    for (int i = 0; i < n; i++) {
        string size;
        cin >> size;
        prevYear[size]++;
    }

    // Read and count T-shirt sizes for the current year
    for (int i = 0; i < n; i++) {
        string size;
        cin >> size;
        currentYear[size]++;
    }

    // Initialize the total number of seconds to 0
    int totalSeconds = 0;

    // Iterate through all valid T-shirt sizes
    string sizes[] = {"M", "XXS", "XS", "S", "L", "XL", "XXL", "XXXL"};
    for (const string &size : sizes) {
        // Calculate the difference in counts between the two years
        int diff = currentYear[size] - prevYear[size];

        // Add the absolute value of the difference to the total seconds
        totalSeconds += abs(diff);
    }

    // Print the minimal number of seconds required
    cout << totalSeconds << endl;

    return 0;
}
