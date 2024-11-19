// main.cpp
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "bo.h"
#include "cuu.h"
#include "de.h"

using namespace std;

int main() {
    srand(time(0)); // Initialize random seed

    int soBo, soCuu, soDe;
    cout << "Nhap so luong Bo: "; cin >> soBo;
    cout << "Nhap so luong Cuu: "; cin >> soCuu;
    cout << "Nhap so luong De: "; cin >> soDe;

    Bo bo(soBo);
    Cuu cuu(soCuu);
    De de(soDe);

    vector<GiaSuc*> trangTrai = { &bo, &cuu, &de };

    // a) Sound when animals are hungry
    cout << "\nTieng keu khi gia suc doi:\n";
    for (auto &giaSuc : trangTrai) {
        giaSuc->Keu();
    }

    // b) Statistics after one breeding and milking session
    int tongSua = 0;
    for (auto &giaSuc : trangTrai) {
        int soCon = giaSuc->SinhCon();
        int soLuongMoi = giaSuc->getSoLuong() + soCon;
        giaSuc->setSoLuong(soLuongMoi);

        int sua = giaSuc->ChoSua() * giaSuc->getSoLuong();
        tongSua += sua;

        cout << "\nLoai gia suc: " << typeid(*giaSuc).name() << endl;
        cout << "So luong: " << giaSuc->getSoLuong() << endl;
        cout << "Tong so sua: " << sua << " lit" << endl;
    }

    cout << "\nTong so sua cua tat ca gia suc: " << tongSua << " lit" << endl;

    return 0;
}

