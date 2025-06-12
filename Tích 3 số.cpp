
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
int check(int n) {
	int demnt = 0, mu = 0;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			demnt++;
			while (n % i == 0) {
				n /= i;
				mu++;
			}
		}
	}
	if (n != 1) {
		demnt++;
		mu++;
	}
	return (demnt >= 3 || demnt == 2 && mu >= 4 || demnt == 1 && mu >= 6);
}
int main()
{
	int n; cin >> n;
	if (check(n)) cout << "YES";
	else cout << "NO";
}

