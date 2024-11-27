#include "kysu.h"

Kysu::Kysu() : Nhanvien("", "", 0), GioLT(0) { }  // Lược bỏ dấu chấm phẩy thừa

Kysu::Kysu(string MSNV, string Ten, float LuongCB, int GioLT) : Nhanvien(MSNV, Ten, LuongCB) {
    this->GioLT = GioLT;
}

void Kysu::nhap() {
    Nhanvien::nhap();  // Gọi phương thức nhap của lớp cơ sở

    cout << "Nhap so gio lam them: ";
    cin >> GioLT;  // Nhập số giờ làm thêm
    cin.ignore();  // Bỏ qua ký tự '\n' còn lại sau khi nhập số
}

int Kysu::Tienthuong() {
    return GioLT * 100000;  // Tính tiền thưởng
}

void Kysu::xuat() {
    Nhanvien::xuat();  // Gọi phương thức xuat của lớp cơ sở
    cout << "\nTien thuong la: " << Tienthuong();  // Xuất tiền thưởng
}
