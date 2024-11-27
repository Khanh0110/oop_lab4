#ifndef GIASUC_H
#define GIASUC_H

#include <string>
using namespace std;

class GiaSuc {
protected:
    int soLuong;           // Số lượng gia súc
    int tongSua;           // Tổng lượng sữa đã cho
    string tiengKeu;       // Tiếng kêu đặc trưng

public:
    GiaSuc(int soLuongBanDau, const string& tiengKeu);
    virtual ~GiaSuc() {}

    virtual int choSua() = 0;    // Sản xuất sữa
    virtual int sinhCon() = 0;  // Sinh con

    int laySoLuong() const;
    int layTongSua() const;
    const string& layTiengKeu() const;

    void capNhatSoLuong(int them); // Cập nhật số lượng
};

#endif // GIASUC_H
