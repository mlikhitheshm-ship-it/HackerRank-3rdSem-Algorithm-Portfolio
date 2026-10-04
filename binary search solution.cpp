#include <bits/stdc++.h>
using namespace std;

int introTutorial(int V, vector<int> arr) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == V) {
            return mid;
        }

        if (arr[mid] < V) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}
