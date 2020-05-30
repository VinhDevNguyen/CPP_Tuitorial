// Ví dụ câu 1
// Khai báo thư viện
#include<iostream>
using namespace std;

// Viết hàm main:
int main()
{
    // Lệnh nhập xuất dữ liệu
    cout << "Hello \n";
    // Lệnh gán
    int number = 0; // Khai báo biến number theo kiểu int(integer)
    cin >> number;
    // Cấu trúc rẽ nhánh
    if (number == 5)
    {
        cout << "Number = 5";
    }
    else
    {
        cout << "Number is not = 5";
    }
    return 0;
}
