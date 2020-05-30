// Ví dụ câu 2
// Khai báo thư viện
#include<iostream>
using namespace std;

// Viết hàm main:
int main()
{
    // Cấu trúc vòng lặp for và xâu kí tự
    char Name[5];
    for (int count = 0; count < 4; count++)
    {
        cout << "Nhap chu cai vi tri thu " << count << " : ";
        cin >> Name[count];
    }
    for (int count = 0; count < 4; count++)
    {
        cout << "Chu cai vi tri thu " << count << " la: " << Name[count] << endl;
    }
    cout << Name << endl;

    // Cấu trúc while thực thi lệnh y chang vòng lặp for ở trên
    // int count = 0;
    // while (count < 5)
    // {
    //     cout << "Chu cai vi tri thu " << count << " la: " << Name[count] << endl;
    //     count ++;
    // }
    
    return 0;
}

