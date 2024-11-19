// cuu.cpp
#include "cuu.h"
#include <cstdlib>

Cuu::Cuu(int soLuong) : GiaSuc(soLuong) {
    loai = "Cuu";
}

void Cuu::Keu() {
    cout << "Cuu: Baa!" << endl;
}

int Cuu::SinhCon() {
    return rand() % 3; // Random between 0 and 2
}

int Cuu::ChoSua() {
    return rand() % 6; // Random between 0 and 5 liters
}
