import java.util.Scanner;

public class PhepChia {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Nhập hai số
        System.out.print("Nhập số thứ nhất (a): ");
        double a = scanner.nextDouble();

        System.out.print("Nhập số thứ hai (b): ");
        double b = scanner.nextDouble();


            // Hiển thị kết quả
            Console.WriteLine($ "Tổng của {so1} và {so2} là: {tong}");

            double tich = so1 * so2;

            // Hiển thị kết quả
            Console.WriteLine($ "tich của {so1} và {so2} là: {tich}");

            // Đợi người dùng nhấn phím trước khi thoát
            Console.WriteLine("Nhấn phím bất kỳ để thoát...");
            Console.ReadKey();



    Console.Write("Nhập số thứ nhất: ");
            double so1 = Convert.ToDouble(Console.ReadLine());

            // Nhập số thứ hai
            Console.Write("Nhập số thứ hai: ");
            double so2 = Convert.ToDouble(Console.ReadLine());

            // Tính tổng
            double tong = so1 - so2;

            // Hiển thị kết quả
            Console.WriteLine($"Trừ của {so1} và {so2} là: {tong}");

            // Đợi người dùng nhấn phím trước khi thoát
            Console.WriteLine("Nhấn phím bất kỳ để thoát...");
            Console.ReadKey();



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

