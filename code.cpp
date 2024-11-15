import java.util.Scanner;

<<<<<<< HEAD
public class PhepChia {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Nhập hai số
        System.out.print("Nhập số thứ nhất (a): ");
        double a = scanner.nextDouble();

        System.out.print("Nhập số thứ hai (b): ");
        double b = scanner.nextDouble();

        // Kiểm tra điều kiện b != 0
        if (b == 0) {
            System.out.println("Lỗi: Không thể chia cho 0!");
        } else {
            double thuong = a / b;
            System.out.println("Thương của " + a + " và " + b + " là: " + thuong);
        }

        scanner.close();
    }
}
Ch
=======
// Hàm tính UCLN bằng thuật toán Euclid

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

>>>>>>> f3a09ff33eea1c6992eb24bb9e596316c0f60904
