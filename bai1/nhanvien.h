#ifndef NHANVIEN_H
#define NHANVIEN_H 
#include<iostream> 
using namespace std ;

class Nhanvien{
    protected: 
        string Ten , MSNV ;
        float LuongCB ; 
    public:
        Nhanvien() ;
        Nhanvien(string MSNV , string Ten , float LuongCB );
        void nhap() ;
        int Tienthuong() ;
        void xuat() ;
};



#endif NHANVIEN_H