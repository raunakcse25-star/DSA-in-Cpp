#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
        int n = arr.size();

        // Transpose
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                swap(arr[i][j], arr[j][i]);
            }
        }

        // Reverse each row
        for (int i = 0; i < n; i++) {
            int s = 0, e = n - 1;
            while (s < e) {
                int temp = arr[i][s];
                arr[i][s] = arr[i][e];
                arr[i][e] = temp;
                s++;
                e--;
            }
        }
    }
};

int main() {
    // Example matrix
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    Solution sol;
    sol.rotate(arr);

    // Print rotated matrix
    cout << "Rotated Matrix:" << endl;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
        int n = arr.size();

        // Transpose
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                swap(arr[i][j], arr[j][i]);
            }
        }

        // Reverse each row
        for (int i = 0; i < n; i++) {
            int s = 0, e = n - 1;
            while (s < e) {
                int temp = arr[i][s];
                arr[i][s] = arr[i][e];
                arr[i][e] = temp;
                s++;
                e--;
            }
        }
    }
};

int main() {
    // Example matrix
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    Solution sol;
    sol.rotate(arr);

    // Print rotated matrix
    cout << "Rotated Matrix:" << endl;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
