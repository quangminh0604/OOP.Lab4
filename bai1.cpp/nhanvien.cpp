// nhanvien.cpp
#include "nhanvien.h"
#include <iostream>
using namespace std;

NhanVien::NhanVien(string maSo, string ten, double luongCoBan)
    : maSo(maSo), ten(ten), luongCoBan(luongCoBan) {}

void NhanVien::Xuat() {
    cout << "Ma so: " << maSo << "\nTen: " << ten << "\nLuong co ban: " << luongCoBan << endl;
}

