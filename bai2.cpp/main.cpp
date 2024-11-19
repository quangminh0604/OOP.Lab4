// main.cpp
#include <iostream>
#include <algorithm>
#include "deluxe.h"
#include "premium.h"
#include "business.h"
using namespace std;

int main() {
    Deluxe a(1, 100000);
    Deluxe b(2, 150000);
    Premium c(3, 75000);
    Premium d(4, 70000);
    Business e(5);

    long long arr[5];
    arr[0] = a.doanh_thu_phong();
    arr[1] = b.doanh_thu_phong();
    arr[2] = c.doanh_thu_phong();
    arr[3] = d.doanh_thu_phong();
    arr[4] = e.doanh_thu_phong();

    long long mx = *max_element(arr, arr + 5);

    if (arr[0] == mx) cout << "Phòng a có doanh thu cao nhất!";
    else if (arr[1] == mx) cout << "Phòng b có doanh thu cao nhất!";
    else if (arr[2] == mx) cout << "Phòng c có doanh thu cao nhất!";
    else if (arr[3] == mx) cout << "Phòng d có doanh thu cao nhất!";
    else if (arr[4] == mx) cout << "Phòng e có doanh thu cao nhất!";

    return 0;
}

