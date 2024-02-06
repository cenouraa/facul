#include <iostream>
using namespace std;

void twoSum(int *v, int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left < right) {
        int sum = v[left] + v[right];
        if (sum == target) {
            cout << left << " e " << right << endl;
            return;
        } else if (sum < target) {
            left++; 
        } else {
            right--; 
        }
    }

    cout << "Não foram encontrados índices que satisfazem" << target << endl;
}

int main() {
    int v[] = {2, 7, 11, 15, 17, 21, 23, 27, 30}; 
    int n = sizeof(v) / sizeof(v[0]);
    int target;

    cin >> target;

    twoSum(v, n, target);

    return 0;
}