
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

int main()
{
	int n;
	cin >> n;
	int x, y;
	for (y = n / 7; y >= 0; y--) {
		if ((n - 7 * y) % 4 == 0) {
			x = (n - 7 * y) / 4;
			break;
		}
	}
	if (y == -1) {
		cout << -1; return 0;
	}
	for (int i = 0; i < x; i++) cout << 4;
	for (int i = 0; i < y; i++) cout << 7;
}

