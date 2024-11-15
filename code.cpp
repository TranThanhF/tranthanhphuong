#include <iostream>
using namespace std;

// Hàm tính UCLN bằng thuật toán Euclid
int UCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Hàm tính BCNN
int BCNN(int a, int b) {
    return (a * b) / UCLN(a, b);
}

int main() {
    int num1, num2;

    // Nhập hai số nguyên từ người dùng
    cout << "Nhập số thứ nhất: ";
    cin >> num1;
    cout << "Nhập số thứ hai: ";
    cin >> num2;

    // Tính và in ra BCNN
    cout << "Bội chung nhỏ nhất của " << num1 << " và " << num2 << " là: " << BCNN(num1, num2) << endl;

    return 0;
}


