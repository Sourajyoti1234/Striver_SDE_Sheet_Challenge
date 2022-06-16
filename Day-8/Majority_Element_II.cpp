#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr) {
    vector<int> output;
    int first = INT_MAX;
    int second = INT_MAX;
    int countFirst = 0;
    int countSecond = 0;
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        if (first == arr[i]) {
            countFirst++;
        } else if (second == arr[i]) {
            countSecond++;
        } else if (countFirst == 0) {
            first = arr[i];
            countFirst++;
        } else if (countSecond == 0) {
            second = arr[i];
            countSecond++;
        } 
        // if the current element if different from both first 
        // and second decrement both the counts
        else {
            countFirst--;
            countSecond--;
        }
    }
    countFirst = 0;
    countSecond = 0;
    for (int i = 0; i < n; ++i) {
        if (first == arr[i]) {
            countFirst++;
        }
        if (second == arr[i]) {
            countSecond++;
        }
    }
    if (countFirst > floor(n / 3)) {
        output.push_back(first);
    }
    if (countSecond > floor(n / 3)) {
        output.push_back(second);
    }
    return output;
}
