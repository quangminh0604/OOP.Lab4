#include <iostream>
#include <string>
using namespace std;

class NhanVien {
protected:
    string maSo;
    string ten;
    double luongCoBan;
public:
    NhanVien(string maSo, string ten, double luongCoBan) : maSo(maSo), ten(ten), luongCoBan(luongCoBan) {}
    virtual double TienThuong() = 0; // Pure virtual function
    virtual void Xuat() {
        cout << "Ma so: " << maSo << "\nTen: " << ten << "\nLuong co ban: " << luongCoBan << endl;
    }
};

class QuanLy : public NhanVien {
private:
    double tyLeThuong;
public:
    QuanLy(string maSo, string ten, double luongCoBan, double tyLeThuong)
        : NhanVien(maSo, ten, luongCoBan), tyLeThuong(tyLeThuong) {}
    double TienThuong() override {
        return luongCoBan * tyLeThuong;
    }
    void Xuat() override {
        NhanVien::Xuat();
        cout << "Tien thuong: " << TienThuong() << endl;
    }
};

class KySu : public NhanVien {
private:
    int soGioLamThem;
public:
    KySu(string maSo, string ten, double luongCoBan, int soGioLamThem)
        : NhanVien(maSo, ten, luongCoBan), soGioLamThem(soGioLamThem) {}
    double TienThuong() override {
        return soGioLamThem * 100000;
    }
    void Xuat() override {
        NhanVien::Xuat();
        cout << "Tien thuong: " << TienThuong() << endl;
    }
};

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
