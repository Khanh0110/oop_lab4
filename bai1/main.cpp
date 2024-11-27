#include "nhanvien.h"
#include "quanly.h"
#include "kysu.h"
#include <iostream>
using namespace std;

int main() {
    cout << "Nhap thong tin cua quan ly:" << "\n";
    Quanly NV1;
    NV1.nhap();  // Nhập thông tin cho đối tượng Quanly

    cout << "\nNhap thong tin cua ky su:" << "\n";
    Kysu NV2; 
    NV2.nhap();  // Nhập thông tin cho đối tượng Kysu

    cout << "\nThong tin cua quan ly:" << "\n";
    NV1.xuat();  // Xuất thông tin của đối tượng Quanly

    cout << "\nThong tin cua ky su:" << "\n";
    NV2.xuat();  // Xuất thông tin của đối tượng Kysu

    return 0;
}
