#include <iostream>
using namespace std;

int main() {
    int arr[5] = {7, 5, 3, 6, 2};
    int target = 11;

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "index 1: " << i << endl;
                cout << "index 2: " << j << endl;
                cout << "values " << arr[i] << " + " << arr[j] << " = 11" << endl;
                return 0;
            }
        }
    }

    cout << "no pair found" << endl;
    return 0;
}
