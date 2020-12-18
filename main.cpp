#include <bits/stdc++.h>
using namespace std;

int most_frequent(int array[], int n) {
    // insert all elements in hash
    unordered_map<int, int> hash;
    for (int i = 0; i < n; ++i) {
        hash[array[i]]++;
    }

    // find the max frequency
    int max_count = 0, res = -1;
    for (auto i: hash) {
        if (max_count < i.second) {
            res = i.first;
            max_count = i.second;
        }
    }

    return res;
}

int main() {
    int array[] = {1, 5, 2, 1, 3, 2, 1};

    int n = sizeof(array) / sizeof(array[0]);

    cout << most_frequent(array, n);

    return 0;
}
