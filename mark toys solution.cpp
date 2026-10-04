#include <bits/stdc++.h>
using namespace std;

int maximumToys(vector<int> prices, int k) {
    sort(prices.begin(), prices.end());

    int count = 0;
    int spent = 0;

    for (int price : prices) {
        if (spent + price > k) {
            break;
        }

        spent += price;
        count++;
    }

    return count;
}
