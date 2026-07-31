#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {-62, -35, -5, -1, -88, -34};
    int n = sizeof(arr) / sizeof(arr[0]);  // safer way to get array size  (24/4 =6)

    int mx = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > mx) mx = arr[i];
    }

    int smx = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] == mx) continue;
        if (arr[i] > smx) smx = arr[i];
    }

    cout << "Max: " << mx << ", Second Max: " << smx << endl;
    return 0;
}
