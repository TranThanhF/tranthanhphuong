#include <iostream>
using namespace std;

// Hàm in dãy Fibonacci với số lượng n phần tử
void inFibonacci(int n) {
    int a = 0, b = 1;
    cout << "Dãy Fibonacci: ";
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        int temp = a + b; // Tính số Fibonacci tiếp theo
        a = b;
        b = temp;
    }
    cout << endl;
}

int main() {
    int n;

    // Nhập số lượng phần tử Fibonacci cần in
    cout << "Nhập số phần tử của dãy Fibonacci: ";
    cin >> n;

    if (n <= 0) {
        cout << "Vui lòng nhập số nguyên dương!" << endl;
    } else {
        inFibonacci(n);
    }

    return 0;
}


