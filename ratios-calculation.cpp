#include <bits/stdc++.h>

using namespace std;

void calculateRatios(vector<int> arr) {
    int oddCount = 0;
    int evenCount = 0;
    int divisibleByThreeCount = 0;
    int totalCount = arr.size();

    // Count odd, even, and divisible by three numbers
    for (int num : arr) {
        if (num % 2 != 0) {
            oddCount++;
        }
        if (num % 2 == 0) {
            evenCount++;
        }
        if (num % 3 == 0) {
            divisibleByThreeCount++;
        }
    }

    // Calculate ratios
    double oddRatio = static_cast<double>(oddCount) / totalCount;
    double evenRatio = static_cast<double>(evenCount) / totalCount;
    double divisibleByThreeRatio = static_cast<double>(divisibleByThreeCount) / totalCount;

    // Print results with 6 decimal places
    cout << fixed << setprecision(6);
    cout << oddRatio << endl;
    cout << evenRatio << endl;
    cout << divisibleByThreeRatio << endl;
}

int main() {
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(n_temp);

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp;
    stringstream ss(arr_temp_temp);
    string item;
    vector<int> arr;

    while (getline(ss, item, ' ')) {
        arr.push_back(stoi(item));
    }

    calculateRatios(arr);

    return 0;
}
