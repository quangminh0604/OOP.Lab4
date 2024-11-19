// bo.cpp
#include "bo.h"
#include <cstdlib>

Bo::Bo(int soLuong) : GiaSuc(soLuong) {
    loai = "Bo";
}

void Bo::Keu() {
    cout << "Bo: Moo!" << endl;
}

int Bo::SinhCon() {
    return rand() % 3; // Random between 0 and 2
}

int Bo::ChoSua() {
    return rand() % 21; // Random between 0 and 20 liters
}

