#include <iostream>
using namespace std;

int main() {
    int *ptr = new int;          // Declared but not initialized
    *ptr = 10; // ❌ Attempting to assign without valid memory

    cout << "Value: " << *ptr << endl;

    int arr[3] = { 1, 2, 3 };
    int* p =arr;

    for (int i = 0; i < 3; i++) {
        cout << "Element" << i << ":" << *(p + i) << endl;
    }

    delete ptr;      
    return 0;
}
