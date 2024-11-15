#include <iostream>
using namespace std;

int main() {
    int number;

    // Nhập số từ người dùng
    cout << "Nhập một số nguyên: ";
    cin >> number;

    // Kiểm tra nếu số chia hết cho 2 (số chẵn) hoặc không chia hết (số lẻ)
    if (number % 2 != 0) {
        cout << number << " là số lẻ." << endl;
    } else {
        cout << number << " là số chẵn." << endl;
    }

    return 0;
}

