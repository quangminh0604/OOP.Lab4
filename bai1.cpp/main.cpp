// main.cpp
#include <iostream>
#include "quanly.h"
#include "kysu.h"
using namespace std;

int main() {
    string maSo, ten;
    double luongCoBan, tyLeThuong;
    int soGioLamThem;

    cout << "Nhap thong tin Quan ly:\n";
    cout << "Ma so: "; cin >> maSo;
    cout << "Ten: "; cin >> ten;
    cout << "Luong co ban: "; cin >> luongCoBan;
    cout << "Ty le thuong: "; cin >> tyLeThuong;
    QuanLy ql(maSo, ten, luongCoBan, tyLeThuong);

    cout << "\nNhap thong tin Ky su:\n";
    cout << "Ma so: "; cin >> maSo;
    cout << "Ten: "; cin >> ten;
    cout << "Luong co ban: "; cin >> luongCoBan;
    cout << "So gio lam them: "; cin >> soGioLamThem;
    KySu ks(maSo, ten, luongCoBan, soGioLamThem);

    cout << "\nThong tin Quan ly:\n";
    ql.Xuat();

    cout << "\nThong tin Ky su:\n";
    ks.Xuat();

    return 0;
}
