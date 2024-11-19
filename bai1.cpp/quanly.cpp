// quanly.cpp
#include "quanly.h"
#include <iostream>
using namespace std;

QuanLy::QuanLy(string maSo, string ten, double luongCoBan, double tyLeThuong)
    : NhanVien(maSo, ten, luongCoBan), tyLeThuong(tyLeThuong) {}

double QuanLy::TienThuong() {
    return luongCoBan * tyLeThuong;
}

void QuanLy::Xuat() {
    NhanVien::Xuat();
    cout << "Tien thuong: " << TienThuong() << endl;
}

