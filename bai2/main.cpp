#include <iostream>
#include <vector>
#include "Deluxe.h"
#include "Premium.h"
#include "Business.h"

int main() {
    // Khởi tạo danh sách phòng
    Deluxe deluxe1, deluxe2;
    Premium premium1, premium2;
    Business business1;

    // Nhập thông tin các phòng
    deluxe1.nhap();
    deluxe2.nhap();
    premium1.nhap();
    premium2.nhap();
    business1.nhap();

    // Lưu các phòng vào danh sách
    std::vector<Room*> rooms = {&deluxe1, &deluxe2, &premium1, &premium2, &business1};

    // Tính doanh thu và xác định phòng có doanh thu cao nhất
    double maxDoanhThu = 0;
    Room* phongMax = nullptr;

    for (const auto& room : rooms) {
        double doanhThu = room->tinhDoanhThu();
        if (doanhThu > maxDoanhThu) {
            maxDoanhThu = doanhThu;
            phongMax = room;
        }
    }

    // Hiển thị phòng có doanh thu cao nhất và doanh thu của nó
    std::cout << "Phong co doanh thu cao nhat: ";
    if (dynamic_cast<Deluxe*>(phongMax)) {
        std::cout << "Deluxe";
    } else if (dynamic_cast<Premium*>(phongMax)) {
        std::cout << "Premium";
    } else if (dynamic_cast<Business*>(phongMax)) {
        std::cout << "Business";
    }
    std::cout << std::endl;
    std::cout << "Doanh thu cao nhat: " << maxDoanhThu << std::endl;

    return 0;
}
