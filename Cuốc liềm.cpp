
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
	int a, b; cin >> a >> b;
	if (a < b) swap(a, b);
	int x = a - b;
	if (x >= b) {
		cout << b;
		return 0;
	}
	int res = x;
	int cb = b - x;
	res += cb / 3 * 2;
	if (cb % 3 == 2) res++;
	cout << res;
}

