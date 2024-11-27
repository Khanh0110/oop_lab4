#include <iostream>
#include <cstdlib> // Để dùng hàm srand, rand
#include <ctime>   // Để khởi tạo seed ngẫu nhiên
#include "Bo.h"
#include "Cuu.h"
#include "De.h"

using namespace std;

int main() {
    srand(time(0)); // Khởi tạo seed ngẫu nhiên

    // Nhập số lượng gia súc ban đầu
    int soLuongBo, soLuongCuu, soLuongDe;
    cout << "Nhap so luong bo: ";
    cin >> soLuongBo;
    cout << "Nhap so luong cuu: ";
    cin >> soLuongCuu;
    cout << "Nhap so luong de: ";
    cin >> soLuongDe;

    Bo bo(soLuongBo);
    Cuu cuu(soLuongCuu);
    De de(soLuongDe);

    // Tất cả gia súc đói, phát ra tiếng kêu
    cout << "\nTieng keu trong nong trai:\n";
    if(bo.laySoLuong() != 0){
        cout << "Con bo keu" << "\n" ;
    }
    if(cuu.laySoLuong() != 0){
        cout << "Con cuu keu" <<"\n";
    }  
    if(de.laySoLuong() != 0){
        cout << "Con de keu" << "\n";
    } 
   

    // Thống kê sau một lứa sinh và cho sữa
    int tongSua = bo.choSua() + cuu.choSua() + de.choSua();
    int tongSoLuong = bo.laySoLuong() + cuu.laySoLuong() + de.laySoLuong();

    cout << "\nThong ke nong trai:\n";
    cout << "Tong so luong gia suc: " << tongSoLuong << "\n";
    cout << "Tong so luong sua: " << tongSua << " lit\n";
    cout << "So luong bo: " << bo.laySoLuong() << "\n";
    cout << "So luong cuu: " << cuu.laySoLuong() << "\n";
    cout << "So luong de: " << de.laySoLuong() << "\n";

    return 0;
}
