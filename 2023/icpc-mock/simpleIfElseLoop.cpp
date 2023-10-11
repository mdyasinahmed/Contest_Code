#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;  // Number of test cases

    for (int caseNum = 1; caseNum <= T; caseNum++) {
        int N;
        cin >> N;  // Number of integers in the sequence

        int A, B;
        cin >> A >> B;  // A and B

        vector<int> P(N);
        for (int i = 0; i < N; i++) {
            cin >> P[i];  // List of integers Pi
        }

        sort(P.begin(), P.end());  // Sort the array for efficient counting

        long long count = 0;
        int left = 0, right = N - 1;

        while (left < right) {
            int sum = P[left] + P[right];
            if (sum >= A && sum <= B) {
                count += right - left;  // Count all possible pairs with P[left]
                left++;  // Increment the left pointer
            } else if (sum < A) {
                left++;  // Increment the left pointer
            } else {
                right--;  // Decrement the right pointer
            }
        }

        // Print the result for the current case
        cout << "Case " << caseNum << ": " << count << endl;
    }

    return 0;
}
