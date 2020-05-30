# Câu 1: [Code mẫu](Cau1.cpp)
## Lệnh nhập xuất dữ liệu:
- Sử dụng `cin` để nhập dữ liệu từ bàn phím vào
- Sử dụng `cout` để xuất dữ liệu ra màn hình 
- **Ví dụ:**
```cpp
cin >> number; // Nhập dữ liệu từ bàn phím vào và lưu vào biến number
cout << number; // Xuất ra màn hình giá trị của biến number
```

## Lệnh gán:
- Đầu tiên cần khai báo một biến bất kì, **ví dụ:**
```cpp
int number; // Khai báo biến number với kiểu giá trị integer
```

## Cấu trúc rẽ nhánh:
- Cú pháp câu lệnh `if`:
```cpp
if (/* condition */)
{
    /* code */
}
```
- **Ví dụ:**
```cpp
if (number == 5)
{
    cout << "Number = 5";
}
else
{
    cout << "Number is not = 5";
}
```
Phân tích ví dụ trên:
- Nếu biến `number` mà bằng 5 thì in ra màn hình `Number = 5`
- Ngược lại nếu không thì in ra màn hình `Number is not = 5`

# Câu 2: [Code mẫu](Cau2.cpp)
## Cấu trúc lặp:
### Vòng lặp for:
- **Cú pháp:**
```cpp
for (int i = 0; i < count; i++)
{
    /* code */
}
```
Phân tích cú pháp:

Đầu tiên ta khởi tạo biến `i` = 0, sau đó sau mỗi vòng lặp ta xét coi nếu i < `count` thì tăng biến i thêm một đơn vị

- **Ví dụ:**
```cpp
for (int i = 0; i < 5; i++)
{
    cout << "Xin chao lan:" << i+1 << endl;
}
```
**Kết quả của code trên:**
```
Xin chao lan:1
Xin chao lan:2
Xin chao lan:3
Xin chao lan:4
Xin chao lan:5
```
### Vòng lặp while:
- **Cú pháp:**
```cpp
while (/* dieu kien */)
{
    /* code */
}
```
Phân tích cú pháp:

Vòng lặp `while` sẽ xét điều kiện, nếu điều kiện đúng thì sẽ thực thi dòng code bên trong nó

- **Ví dụ:**
```cpp
int count = 0; // khai báo biến count
while (count < 5) // Nếu count <5 thì thực thi lệnh ở dưới
{
    cout << "Xin chao lan:" << i+1 << endl;
    count++;
}
```
**Kết quả của code trên:**
```
Xin chao lan:1
Xin chao lan:2
Xin chao lan:3
Xin chao lan:4
Xin chao lan:5
```
### [Mảng 1 chiều](https://www.howkteam.vn/course/khoa-hoc-lap-trinh-c-can-ban/mang-1-chieu-trong-c-arrays-1377)

### [Mảng kí tự](https://cpp.daynhauhoc.com/6/0-mang-ki-tu/)

# Câu 3: Một số thuật toán
- [Sắp xếp nhanh](https://nguyenvanhieu.vn/thuat-toan-sap-xep-quick-sort/)
- [Thuật toán tìm kiếm nhị phân](https://nguyenvanhieu.vn/thuat-toan-tim-kiem-nhi-phan/)
- [Code kiểm tra số nguyên tố](https://nguyenvanhieu.vn/kiem-tra-so-nguyen-to-su-dung-c-c-va-java/)
```cpp
#include <iostream>
#include <math.h>
using namespace std;
 
int main(){
    int n;
    cout << "\nNhap n = ";
    cin >> n;
    if(n < 2){
        cout << n << " khong phai so nguyen to\n";
        return 0;
    }
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0){
        cout << n << " la so nguyen to\n";
    }else{
        cout << n << " khong phai so nguyen to\n";
    }
}
```

- [Tìm UCLN sử dụng giải thuật Euclid](https://nguyenvanhieu.vn/thuat-toan-tim-uoc-chung-lon-nhat/)

Cho a, b là hai số nguyên (giả sử a ≥ b), để tìm ước chung lớn nhất của hai số a và b ta cần thực hiện chia a cho b được thương q và số dư r (r ≥ 0) tức là a = b*q + r, khi đó ta có:
![UCLN](https://nguyenvanhieu.vn/wp-content/uploads/2019/06/RC1U1s7.png "UCLN")
**Code**:
```cpp
int gcd(int a, int b) {
    int tmp;
    while(b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
```
