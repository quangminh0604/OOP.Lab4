// kysu.cpp
#include "kysu.h"
#include <iostream>
using namespace std;

KySu::KySu(string maSo, string ten, double luongCoBan, int soGioLamThem)
    : NhanVien(maSo, ten, luongCoBan), soGioLamThem(soGioLamThem) {}

double KySu::TienThuong() {
    return soGioLamThem * 100000;
}

void KySu::Xuat() {
    NhanVien::Xuat();
    cout << "Tien thuong: " << TienThuong() << endl;
}

