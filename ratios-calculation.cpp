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
    cout << "Enter the number of elements: ";
    if (!getline(cin, n_temp) || n_temp.empty()) {
        cerr << "Error: No input provided for the number of elements." << endl;
        return 1;
    }
    cout << "Number of elements input: '" << n_temp << "'" << endl;

    int n;
    try {
        n = stoi(n_temp);
    } catch (const std::invalid_argument&) {
        cerr << "Invalid number of elements: '" << n_temp << "'" << endl;
        return 1;
    }

    string arr_temp_temp;
    cout << "Enter the array elements (space-separated): ";
    if (!getline(cin, arr_temp_temp) || arr_temp_temp.empty()) {
        cerr << "Error: No input provided for the array elements." << endl;
        return 1;
    }
    cout << "Array elements input: '" << arr_temp_temp << "'" << endl;

    vector<string> arr_temp;
    stringstream ss(arr_temp_temp);
    string item;
    vector<int> arr;

    while (getline(ss, item, ' ')) {
        cout << "Processing item: '" << item << "'" << endl;
        try {
            arr.push_back(stoi(item));
        } catch (const std::invalid_argument&) {
            cerr << "Invalid input in array: '" << item << "'" << endl;
            return 1;
        }
    }

    // Check if the number of elements matches
    if (arr.size() != n) {
        cerr << "Error: Number of elements provided does not match the specified count." << endl;
        return 1;
    }

    calculateRatios(arr);
    return 0;
}
