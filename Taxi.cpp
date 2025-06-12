
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
	int n; cin >> n;
	int d[5] = { 0 };
	for (int i = 0; i < n; i++)
	{
		int x; cin >> x;
		d[x]++;
	}
	int res = 0;

	int res4 = d[4];
	int res31 = min(d[3], d[1]);

	d[1] = d[1] - res31;
	d[3] = d[3] - res31;

	int res3 = d[3];
	int res22 = d[2] / 2;

	d[2] = d[2] % 2;
	int res211 = 0;
	if (d[2] == 1) {
		res211 = 1;
		d[1] -= min(2, d[1]);
	}
	int res1111 = d[1] / 4;
	if (d[1] % 4 != 0) {
		res1111++;
	}
	res = res4 + res3 + res22 + res211 + res1111 + res31;
	cout << res;
}

