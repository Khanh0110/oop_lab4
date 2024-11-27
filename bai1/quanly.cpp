#include "quanly.h" 

// Constructor mặc định
Quanly::Quanly() : Nhanvien("", "", 0), tilethuong(0) {}

// Constructor với tham số
Quanly::Quanly(string MSNV, string Ten, float LuongCB, float tilethuong) : Nhanvien(MSNV, Ten, LuongCB) {
    this->tilethuong = tilethuong;
}

// Phương thức nhập thông tin
void Quanly::nhap() {
    Nhanvien::nhap();  // Gọi phương thức nhap() của lớp cơ sở (Nhanvien)
    cout << "Nhap ti le thuong: ";
    cin >> tilethuong;  // Nhập tỉ lệ thưởng
    cin.ignore();  // Bỏ qua ký tự '\n' còn lại sau khi nhập số
}

// Phương thức tính tiền thưởng
int Quanly::Tienthuong() {
    return LuongCB * tilethuong;  // Tính tiền thưởng theo lương cơ bản và tỉ lệ thưởng
}

// Phương thức xuất thông tin
void Quanly::xuat() {
    Nhanvien::xuat();  // Gọi phương thức xuat() của lớp cơ sở (Nhanvien)
    cout << "\nTien thuong: " << Tienthuong();  // Xuất tiền thưởng
}
