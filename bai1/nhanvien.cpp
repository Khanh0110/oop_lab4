#include "nhanvien.h"
using namespace std;

Nhanvien::Nhanvien() : MSNV(""), Ten(""), LuongCB(0) {}

Nhanvien::Nhanvien(string MSNV, string Ten, float LuongCB) {
    this->MSNV = MSNV;
    this->Ten = Ten;
    this->LuongCB = LuongCB;
}

void Nhanvien::nhap() {
    // Nhập mã số nhân viên
    cout << "Nhap ma so nhan vien: ";
    getline(cin, MSNV);  // Đọc mã số nhân viên

    // Nhập tên nhân viên
    cout << "Nhap ten nhan vien: ";
    getline(cin, Ten);   // Đọc tên nhân viên

    // Nhập lương cơ bản của nhân viên
    cout << "Nhap luong co ban cua nhan vien: ";
    cin >> LuongCB;      // Nhập lương cơ bản
    cin.ignore();        // Bỏ qua ký tự '\n' còn lại sau khi nhập số (LuongCB)
}

int Nhanvien::Tienthuong() {
    return 0;  // Lớp cơ sở không có tiền thưởng
}

void Nhanvien::xuat() {
    // In thông tin nhân viên
    cout << "\nMa so nhan vien: " << this->MSNV;
    cout << "\nTen nhan vien: " << this->Ten;
    cout << "\nLuong co ban: " << this->LuongCB;
}
