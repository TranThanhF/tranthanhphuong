using System;

namespace TinhTong
{
    class Program
    {
        static void Main(string[] args)
        {
            // Nhập số thứ nhất
            Console.Write("Nhập số thứ nhất: ");
            double so1 = Convert.ToDouble(Console.ReadLine());

            // Nhập số thứ hai
            Console.Write("Nhập số thứ hai: ");
            double so2 = Convert.ToDouble(Console.ReadLine());

            // Tính tổng
            double tong = so1 + so2;

            // Hiển thị kết quả
            Console.WriteLine($"Tổng của {so1} và {so2} là: {tong}");

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


        }
    }
}
