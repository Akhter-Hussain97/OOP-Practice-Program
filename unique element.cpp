#include <iostream>
using namespace std;
void UniqElement(float arr[], int size, float uniqueArr[], int &uniqueSize);
int main() {
    float arr[10];
    float uniqueArr[10];
    int uniqueSize; 
    cout << "Enter 10 float numbers:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    UniqElement(arr, 10, uniqueArr, uniqueSize);
    cout << "Unique elements are:" << endl;
    for (int i = 0; i < uniqueSize; i++) {
        cout << uniqueArr[i] << " ";
    }
    cout << endl;
    return 0;
}
void UniqElement(float arr[], int size, float uniqueArr[], int &uniqueSize) {
    uniqueSize = 0; 
    for (int i = 0; i < size; i++) {
        bool isUnique = true;
        for (int j = 0; j < uniqueSize; j++) {
            if (arr[i] == uniqueArr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            uniqueArr[uniqueSize] = arr[i];
            uniqueSize++;
        }
    }
}

