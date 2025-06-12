
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include <iomanip>
#include <string>
#include <sstream>
#include <queue>
#include <stack>
#include <unordered_map>

using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

struct phanso {
    long long tu, mau;
    void rutgon() {
        long long k = gcd(tu, mau);
        tu /= k;
        mau /= k;
    }
    friend phanso operator - (phanso a, phanso b) {
        phanso res;
        res.tu = a.tu * b.mau - b.tu * a.mau;
        res.mau = a.mau * b.mau;
        res.rutgon();
        return res;
    }
};

int main() {
    phanso ps;
    cin >> ps.tu >> ps.mau;
    ps.rutgon(); 

    bool first = true;
    while (ps.tu != 0) {
        long long x = (ps.mau + ps.tu - 1) / ps.tu;
        if (!first) cout << " + ";
        cout << "1/" << x;
        first = false;
        phanso tmp{ 1, x };
        ps = ps - tmp;
    }
}
