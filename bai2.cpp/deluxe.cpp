// deluxe.cpp
#include "deluxe.h"

Deluxe::Deluxe() {}

Deluxe::Deluxe(long long so_dem, long long phi_dich_vu)
    : so_dem(so_dem), phi_dich_vu(phi_dich_vu) {}

long long Deluxe::doanh_thu_phong() {
    return 750000 * so_dem + 2 * phi_dich_vu;
}

