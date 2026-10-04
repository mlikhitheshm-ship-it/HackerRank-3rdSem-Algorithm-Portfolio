#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<long long> arr(5);

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    long long total = 0;
    long long minimum = LLONG_MAX;
    long long maximum = LLONG_MIN;

    for (long long x : arr) {
        total += x;
        minimum = min(minimum, x);
        maximum = max(maximum, x);
    }

    cout << total - maximum << " " << total - minimum;

    return 0;
}
