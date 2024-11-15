#include <iostream>
using namespace std;

// Hàm tính UCLN bằng thuật toán Euclid

int main()
{
    int num1, num2;
    cout << "khi 3";

    // Nhập hai số nguyên từ người dùng
    cout << "Nhập số thứ nhất: ";
    cin >> num1;
    cout << "Nhập số thứ hai: ";
    cin >> num2;

    // Tính và in ra UCLN
    cout << "Ước chung lớn nhất của " << num1 << " và " << num2 << " là: " << UCLN(num1, num2) << endl;

    return 0;
}
