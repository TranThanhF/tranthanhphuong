import java.util.Scanner;

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
