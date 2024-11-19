// business.cpp
#include "business.h"

Business::Business() {}

Business::Business(long long so_dem) : so_dem(so_dem) {}

long long Business::doanh_thu_phong() {
    return 300000 * so_dem;
}

