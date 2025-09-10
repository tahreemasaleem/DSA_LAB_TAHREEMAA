#include <iostream>
#include <vector>
using namespace std;

vector<int> findIndices(const int arr[], int size, int key) {
    vector<int> indices;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            indices.push_back(i);
        }
    }
    
    return indices;
}

int main() {
    // Test case: Key not present
    int arr[] = {1, 3, 5, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 2;
    
    vector<int> result = findIndices(arr, size, key);
    
    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nKey: " << key << endl;
    
    if (result.empty()) {
        cout << "Key not found in the array." << endl;
    } else {
        cout << "Key found at indices: ";
        for (int index : result) {
            cout << index << " ";
        }
        cout << endl;
    }
    
    return 0;
}