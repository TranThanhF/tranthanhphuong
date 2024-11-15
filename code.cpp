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

int main() {
    int num1, num2;

    // Nhập hai số nguyên từ người dùng
    cout << "Nhập số thứ nhất: ";
    cin >> num1;
    cout << "Nhập số thứ hai: ";
    cin >> num2;

    // Tính và in ra UCLN
    cout << "Ước chung lớn nhất của " << num1 << " và " << num2 << " là: " << UCLN(num1, num2) << endl;

    return 0;
}

