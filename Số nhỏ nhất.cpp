
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
	long long n, k; cin >> n >> k;
	if (n > 9 * k || n < 1 && k > 1) {
		cout << -1; return 0;
	}
	string res = "";
	for (int i = 0; i < k; i++) {
		int s = 0;
		if (i == 0) {
			s = 1;
		}
		else s = 0;
		for (int j = s; j <= 9; j++) {
			int d = n - j;
			int maxnum = (k - i - 1) * 9;
			if (d <= maxnum) {
				res += char(j + '0');
				n -= j;
				break;
			}
		}
	}
	if (n != 0) cout << -1;
	else cout << res;
}

