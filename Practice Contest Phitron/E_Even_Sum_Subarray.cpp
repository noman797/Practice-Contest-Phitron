#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int N;
        cin >> N; // Size of the array
        vector<int> A(N);
        int sum = 0;

        // Reading the array and calculating the sum
        for (int i = 0; i < N; i++) {
            cin >> A[i];
            sum += A[i];
        }

        // Using if-else structure for all cases
        if (sum % 2 == 0) {
            cout << N << endl; // Entire array has an even sum
        } else {
            if (N > 1) {
                cout << N - 1 << endl; // Largest subarray with even sum by removing one element
            } else {
                cout << 0 << endl; // Single odd element, no even-sum subarray possible
            }
        }
    }
    return 0;
}
